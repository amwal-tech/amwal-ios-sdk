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
    lazy var payButton: UIView = {
        let button =  AmwalPayButton(
            currency: .SAR,
            amount:  110,
            vat:  20,
            merchantId: "sandbox-amwal-3db24246-8d09-4f78-a3eb-0d4b8b03bd4b",
            orderId: UUID().uuidString,
            refrenceId: UUID().uuidString
        ) { status in
            switch status {
            case let .success(transactionId):
                debugPrint(transactionId)
            case let .fail(error, transactionId):
                debugPrint(error)
            @unknown default:
                break
            }
        }
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
        let paymentView = AmwalPaymentView(
            currency: .SAR,
            amount: 110,
            vat: 20,
            merchantId: "sandbox-amwal-3db24246-8d09-4f78-a3eb-0d4b8b03bd4b",
            orderId: UUID().uuidString,
            refrenceId: UUID().uuidString,
            completion: { [weak self] _ in
                self?.dismiss(animated: true)

            })
        let viewController = UIHostingController(rootView: paymentView)
        present(viewController, animated: true)
    }
}
