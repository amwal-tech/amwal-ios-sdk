//
//  ContentView.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 25/05/2023.
//

import SwiftUI
import AmwalPay

struct ContentView: View {
    @SwiftUI.State var isPresented: Bool = false
    var body: some View {
        VStack {
            Button {
                isPresented = true
            } label: {
                Label("Pay With Amwal", systemImage: "dollarsign.circle")
                    .padding(10)
                    .foregroundColor(.white)
                    .background(Color.blue)
                    .clipShape(Capsule(style: .continuous))
            }
        }
        .frame(maxWidth: .infinity)
        .padding()
        .sheet(isPresented: $isPresented) {
            
            AmwalPaymentView(
                currency: "SAR",
                amount: 110,
                vat: 20,
                merchantId: "dev-backend.sa.amwal.tech",
                completion: {
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