//
//  ContentView.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 25/05/2023.
//

import AmwalPay
import SwiftUI

struct ContentView: View {
    @State var isPresented: Bool = false
    @State var transactionId: String = ""
    var body: some View {
        VStack {
            Text("TransactionId: \(transactionId)")
            AmwalPayButton {
                isPresented = true
            }
        }
        .frame(maxWidth: .infinity)
        .padding()
        .sheet(isPresented: $isPresented) {
            AmwalPaymentView(
                currency: .SAR,
                amount: 110,
                vat: 20,
                merchantId: "sandbox-amwal-0cfdf4fc-2972-400e-9186-4d671d245280",
                completion: { transactionId in
                    self.transactionId = transactionId
                    isPresented = false
                }
            )
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
