//
//  PayWithAmwal.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 01/10/2023.
//

import AmwalPay
import SwiftUI
import UIKit

class ViewController: UIViewController {
    var builder: PaymentRequestBuilder {
        let builder: PaymentRequestBuilder = .init()
            .setCurrency(.SAR)
            .setAmount(1.0)
            .setVat(0.0)
            .setMerchantId("")
            .setOrderId("23455")
            .setReferenceId("ww")
            .setLanguage(.english)
            .setUserInfo(
                .init(
                    phoneNumber: "+201555929770",
                    email: "test@test.com"
                )
            )
            .setCompletion { status in
                switch status {
                case let .success(transactionId):
                    debugPrint(transactionId)
                case let .fail(error, transactionId):
                    debugPrint(error, transactionId)
                }
            }
        return builder
    }
    lazy var payButton: UIView = {
        let button =  AmwalPayButton(paymentRequestBuilder: builder)
        let ButtonView = UIHostingController(rootView: button)
        return ButtonView.view
    }()

    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = UIColor(resource: .custom)
        setupConstrains()
    }

    private func setupConstrains() {
        let stackView = UIStackView(arrangedSubviews: [payButton])
        stackView.axis = .horizontal
        stackView.alignment = .center
        stackView.spacing = 10
        stackView.translatesAutoresizingMaskIntoConstraints = false

        view.addSubview(stackView)

        // Set constraints
        NSLayoutConstraint.activate([
            stackView.leadingAnchor.constraint(equalTo: view.leadingAnchor, constant: 10),
            stackView.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -10),
            stackView.bottomAnchor.constraint(equalTo: view.safeAreaLayoutGuide.bottomAnchor, constant: -10),
            payButton.heightAnchor.constraint(equalToConstant: 60),
        ])

    }

     func buttonTapped() {
        // Handle button tap
        let paymentView = AmwalPaymentView(paymentRequestBuilder: builder)
        let viewController = UIHostingController(rootView: paymentView)
        present(viewController, animated: true)
    }
}
