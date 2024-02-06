//
//  ContentView.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 25/05/2023.
//

import AmwalPay
import SwiftUI
enum PayResult: String {
    case success
    case failure
}

struct ContentView: View {
    @State var amount: String = "1"
    @State var vat: String = "0"
    @State var merchantId: String = "prod-amwal-5563d261-8545-418b-b122-8767a2e59931"
    @State var transactionID: String = ""
    @State var phoneNumber: String = ""
    @State var email: String = ""
    @State var result: PayResult?
    @State var isOpenSheet: Bool = false
    let availableLanguages: [Language] = [.arabic, .english]
    @State var selectedLangauge: Language = .english
    var builder: PaymentRequestBuilder {
        let builder: PaymentRequestBuilder = .init()
            .setCurrency(.SAR)
            .setAmount(Double(amount) ?? 0.0)
            .setVat(Double(vat) ?? 0.0)
            .setMerchantId(merchantId)
            .setOrderId("23455")
            .setReferenceId("ww")
            .setLanguage(selectedLangauge)
            // SetUserInfo
            .setUserInfo(
                .init(
                    phoneNumber: phoneNumber,
                    email: email
                )
            )
            .setCompletion { status in
                isOpenSheet = false
                switch status {
                case let .success(transactionId):
                    print(transactionId)
                case let .fail(error, transactionId):
                    print(error, transactionId)
                }
            }
        return builder
    }

    var body: some View {
        GeometryReader { geometryReader in
            ScrollView {
                VStack(alignment: .leading) {
                    priceInput
                    merchantInputsView
                    if #available(iOS 14.0, *) {
                        Menu {
                            ForEach(0 ..< availableLanguages.count) { index in
                                Button {
                                    selectedLangauge = self.availableLanguages[index]
                                } label: {
                                    Text(self.availableLanguages[index].rawValue)
                                }
                            }

                        } label: {
                            Text("Select Lanaguage \(selectedLangauge.rawValue)")
                        }
                        .padding()
                    }

                    registeredUserInputs
                    Spacer()
                    AmwalPayButton(paymentRequestBuilder: builder, isOpenSheet: $isOpenSheet)
                        .padding()

                    Button {
                        isOpenSheet = true
                    } label: {
                        Text("CheckOut QuickPay")
                    }
                }
                .frame(height: geometryReader.size.height)
                .sheet(isPresented: $isOpenSheet, content: {
                    AmwalPaymentView(paymentRequestBuilder: builder)
                })
            }
        }
    }
}

extension ContentView {
    var priceInput: some View {
        VStack {
            Text("Enter your values to test")
                .font(.largeTitle)
            HStack(alignment: .center) {
                VStack(alignment: .leading, spacing: 20) {
                    Text("Amount:")
                    Text("Vat:")
                }
                VStack(spacing: 5) {
                    TextField("Amount", text: $amount)
                        .keyboardType(.numberPad)
                        .textFieldStyle(.roundedBorder)
                    TextField("Vat", text: $vat)
                        .keyboardType(.numberPad)
                        .textFieldStyle(.roundedBorder)
                }
            }
            .padding([.top, .horizontal])
        }
    }

    var merchantInputsView: some View {
        VStack {
            VStack(alignment: .leading) {
                Text("MerchantID")
                TextField("MerchantID", text: $merchantId)
                    .keyboardType(.default)
                    .textFieldStyle(.roundedBorder)
            }
            .padding([.horizontal])
            Text("TransactionID: \(transactionID)")
                .frame(maxWidth: .infinity, alignment: .leading)
                .padding(.horizontal)
            HStack {
                Image(systemName: "circle.fill")
                    .foregroundColor(
                        result == .success
                            ? .green
                            : result == nil
                            ? .gray
                            : .red
                    )
                Text(result?.rawValue ?? "none")
            }
            .padding([.bottom, .horizontal])
            .frame(maxWidth: .infinity, alignment: .leading)
        }
    }

    var registeredUserInputs: some View {
        VStack(alignment: .leading) {
            Text("Register User Inputs to test Optional")
                .font(.subheadline)
                .bold()
            HStack {
                Text("Phone Number")
                TextField("Phone Number", text: $phoneNumber)
                    .keyboardType(.default)
                    .textFieldStyle(.roundedBorder)
            }
            HStack {
                Text("Email")
                TextField("Email", text: $email)
                    .keyboardType(.emailAddress)
                    .textFieldStyle(.roundedBorder)
            }
        }
        .padding(.horizontal)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView(selectedLangauge: .arabic)
    }
}
