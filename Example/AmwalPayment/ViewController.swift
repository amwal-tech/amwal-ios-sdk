//
//  ViewController.swift
//  AmwalPayment
//
//  Created by knight6700 on 08/06/2023.
//  Copyright (c) 2023 knight6700. All rights reserved.
//

import UIKit
import SwiftUI
import AmwalPay

class ViewController: UIViewController {

    override func viewDidLoad() {
//
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBAction func payButtonTapped(_ sender: UIButton) {
        let paymentView = UIHostingController(rootView: AmwalPaymentView(currency: "SAR", amount: 110, vat: 20, merchantId: "dev-backend.sa.amwal.tech", completion: {}))
        
        self.present(paymentView, animated: true)

    }
}

