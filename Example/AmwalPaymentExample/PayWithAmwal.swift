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
    lazy var payButton: UIButton = {
        let button = UIButton(type: .custom)
        button.titleLabel?.font = UIFont.systemFont(ofSize: 24)
        button.titleLabel?.textColor = .white
        button.setTitle("Pay With Amwal", for: .normal)
        button.addTarget(self, action: #selector(buttonTapped), for: .touchUpInside)
        button.setImage(UIImage(systemName: "dollarsign.circle.fill"), for: .normal)
        button.tintColor = .white
        let spacing: CGFloat = 10 // You can change this value to your desired spacing
        button.imageEdgeInsets = UIEdgeInsets(top: 0, left: 2, bottom: 0, right: spacing)
        button.titleEdgeInsets = UIEdgeInsets(top: 0, left: 0, bottom: 0, right: 2)
        return button
    }()

    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .white
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

        payButton.backgroundColor = .systemBlue
        payButton.layer.cornerRadius = 20
    }

    @objc func buttonTapped() {
        // Handle button tap
        let paymentView = AmwalPaymentView(
            currency: "SAR",
            amount: 110,
            vat: 20,
            merchantId: "merchantId",
            completion: { [weak self] _ in
                self?.dismiss(animated: true)

            })
        let viewController = UIHostingController(rootView: paymentView)
        present(viewController, animated: true)
    }
}
