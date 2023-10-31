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
        let button = AmwalPayButton { [weak self] in
            self?.buttonTapped()
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
            stackView.centerXAnchor.constraint(equalTo: view.centerXAnchor),
            stackView.centerYAnchor.constraint(equalTo: view.centerYAnchor),
            payButton.widthAnchor.constraint(equalToConstant: 200), // Set your desired width here
            payButton.heightAnchor.constraint(equalToConstant: 60), // Set your desired height here
        ])
    }

     func buttonTapped() {
        // Handle button tap
        let paymentView = AmwalPaymentView(
            currency: .SAR,
            amount: 110,
            vat: 20,
            merchantId: "sandbox-amwal-0cfdf4fc-2972-400e-9186-4d671d245280",
            completion: { [weak self] _ in
                self?.dismiss(animated: true)

            })
        let viewController = UIHostingController(rootView: paymentView)
        present(viewController, animated: true)
    }
}
