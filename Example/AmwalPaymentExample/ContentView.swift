//
//  ContentView.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 25/05/2023.
//

import AmwalPay
import SwiftUI

struct ContentView: View {
    @SwiftUI.State var isPresented: Bool = false
    var body: some View {
        VStack {
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
                completion: { _ in
                    isPresented = false
                })
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
