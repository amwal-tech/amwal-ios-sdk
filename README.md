# AmwalPayment iOS SDK
![SwiftUI](https://img.shields.io/badge/SwiftUI-blue.svg?style=flat)
![UIKit](https://img.shields.io/badge/UIKit-blue.svg?style=flat)
![CocoaPods](https://img.shields.io/cocoapods/v/AmwalPayment.svg?style=flat)
![Swift Package Manager](https://img.shields.io/badge/Swift%20Package%20Manager-compatible-brightgreen.svg)
[![License](https://img.shields.io/cocoapods/l/AmwalPayment.svg?style=flat)](https://github.com/AmwalPayment/AmwalPayment-ios/blob/master/LICENSE)
[![Platform](https://img.shields.io/cocoapods/p/ios.svg?)](https://github.com/AmwalPayment/AmwalPayment-ios#)

Integrate Amwal’s prebuilt payment Sheet into the checkout of your iOS app with the PaymentSheet DSL friendly APIs.

# Screenshots
<p align="center">
  <img src="https://github.com/amwal-tech/amwal-ios-sdk/assets/10992377/f85a4aa0-f3d8-4b98-a3e1-6eb7eb55db4e" alt="Image 1" width="250"/> 
  <img src="https://github.com/amwal-tech/amwal-ios-sdk/assets/10992377/2a6650af-df62-4721-b106-6c663af01ee4" alt="Image 2" width="250"/> 
  <img src="https://github.com/amwal-tech/amwal-ios-sdk/assets/10992377/cf0499c2-ba11-4b21-be43-1fa37539714a" alt="Image 3" width="250"/>
</p>

# Table of Contents

<!-- MarkdownTOC -->
- [Intoduction](#intoduction)
- [Quick Start Guide](#quick-start-guide)
  - [Install SDK](#install-sdk)
    - [Swift Package Manager (SPM)](#swift-package-manager-spm)
    - [CocoaPods](#cocoapods)
  - [Initialize Payment Sheet](#initialize-payment-sheet)
  - [Show Payment Sheet](#showing-payment-sheet)
    - [SwiftUI](#swiftUI)
    - [UIKit](#uikit)
  - [Handle Payment Result](#listen-payment-results)
  - [Tips](#tips)


# Intoduction
AmwalPayment SDK offers the flexibility to use pass keys for enhanced security during the payment process. Pass keys provide an additional layer of protection by replacing traditional OTPs (One-Time Passwords) and ensuring a secure payment experience. Here's how you can generate and integrate pass keys into the Payment Sheet

## Install SDK

### Swift Package Manager (SPM)

Add the following line to your `Package.swift` file's dependencies:
```swift
dependencies: [
    .package(url: "https://github.com/amwal/payment-sdk-ios.git", from: "1.1.1")
]
```
### CocoaPods
```swift
pod 'AmwalPayment', '~> 1.1.1'
```
## ⚠️ Important : Add AmwalPay in your associated domains
- In Xcode > Choose your **target**
- Head to **Signing & Capabilities**
- Press **+ Capability**
- Search and choose **Associated Domains**
- In the newly added Associated Domains section add
  `webcredentials:pay.sa.amwal.tech`
  
## ⚠️ Important : Add your Bundle Identifier and iOS App Id Prefix to Merchant dashboard
- Head to your [Merchant dashboard settings](https://merchant.sa.amwal.tech/settings)
- Choose **IOS SETTINGS** tab
- Select your **Store**
- Add your iOS App Id Prefix aka Your team Id
- Add your iOS Bundle Id
- Click **Save** and you should see "iOS Settings Updated" message ✅

<a name="initialize-payment-sheet"></a>
## 2. Initialize the PaymentSheet
you can use in SwiftUI with `.sheet` and UIKit with  `modalPresentationStyle`.


Choose the language preference for your application. If you don't explicitly set the language, the application will default to the device's current locale.


1- 
`import AmwalPayment`

2-  `initialize View`
```swift
        let builder: PaymentRequestBuilder = .init()
            .setCurrency(.SAR)
            .setAmount(1.0)
            .setVat(0.0)
            .setMerchantId(merchantId)
            .setOrderId("")
            .setReferenceId("")
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
        AmwalPaymentView(paymentRequestBuilder: builder)
```
<a name="showing-payment-sheet"></a>

## 3. Showing Payment Sheet
- you can use our button direct to show payment sheet or use a sheet view  
<a name="swiftUI"></a>
## SwiftUI Sheet
```swift
import SwiftUI
import AmwalPay

struct ContentView: View {
    @SwiftUI.State var isPresented: Bool = false
            let builder: PaymentRequestBuilder = .init()
            .setCurrency(.SAR)
            .setAmount(1.0)
            .setVat(0.0)
            .setMerchantId(merchantId)
            .setOrderId("")
            .setReferenceId("")
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
            AmwalPaymentView(paymentRequestBuilder: builder)
        }
    }
}
```
## SwiftUI AmwalPayButton
```swift
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
        var builder: PaymentRequestBuilder {
        let builder: PaymentRequestBuilder = .init()
            .setCurrency(.SAR)
            .setAmount(Double(amount) ?? 0.0)
            .setVat(Double(vat) ?? 0.0)
            .setMerchantId(merchantId)
            .setOrderId("23455")
            .setReferenceId("ww")
            .setLanguage(selectedLangauge)
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
            AmwalPayButton(paymentRequestBuilder: builder, isOpenSheet: $isOpenSheet)
        }
        .padding(.bottom)
    }
}

```

<a name="uikit"></a>
## UIKit Sheet
```swift
import UIKit
import SwiftUI
import AmwalPay

class ViewController: UIViewController {
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    func dismissPayment() {
        self.dismiss(animated: true)
    }
    
    func presentPaymentView() {
        let builder: PaymentRequestBuilder = .init()
            .setCurrency(.SAR)
            .setAmount(Double(amount) ?? 0.0)
            .setVat(Double(vat) ?? 0.0)
            .setMerchantId(merchantId)
            .setOrderId("23455")
            .setReferenceId("ww")
            .setLanguage(selectedLangauge)
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
        let paymentView = AmwalPaymentView(paymentRequestBuilder: builder)
        let viewController = UIHostingController(rootView: paymentView)
        self.present(viewController, animated: true)
    }
}
```
## UIKIT AmwalPayButton
```swift
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
```
<a name="listen-payment-results"></a>

## 4. Listen for results
we are return status success with transaction id and fail with error
## Tips
🚧 Securely store your keys

The merchantId should be securely stored and not hard-coded as shown in this example. For more information on securely storing keys in iOS, see [this article](https://medium.com/google-developer-experts/a-follow-up-on-how-to-store-tokens-securely-in-android-e84ac5f15f17).
