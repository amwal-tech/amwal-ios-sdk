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
    @State var isPresented: Bool = false
    @State var amount: String = "110"
    @State var vat: String = "20"
    @State var merchantId: String = "sandbox-amwal-3db24246-8d09-4f78-a3eb-0d4b8b03bd4b"
    @State var transactionID: String = ""
    @State var result: PayResult?
    var body: some View {
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
            VStack(alignment: .leading) {
                Text("MerchantID")
                TextField("MerchantID", text: $merchantId)
                    .keyboardType(.default)
                    .textFieldStyle(.roundedBorder)
            }
            .padding([.bottom, .horizontal])
            Text("TransactionID: \(transactionID)")
                .frame(maxWidth: .infinity, alignment: .leading)
                .padding()
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
            .padding()
            .frame(maxWidth: .infinity, alignment: .leading)
            Spacer()
            AmwalPayButton(
                currency: .SAR,
                amount: Double(amount) ?? 110,
                vat: Double(vat) ?? 20,
                merchantId: merchantId,
                orderId: nil,
                referenceId: nil
            ) { status in
                switch status {
                case let .success(transactionId):
                    self.transactionID = transactionId
                    result = .success
                case let .fail(error, transactionId):
                    self.transactionID = transactionId
                    result = .failure
                    print(error)
                @unknown default:
                    break
                }
            }
        }
        .padding(.bottom)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
