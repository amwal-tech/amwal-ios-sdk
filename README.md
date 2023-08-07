# AmwalPayment iOS SDK

![CocoaPods](https://img.shields.io/cocoapods/v/AmwalPayment.svg?style=flat)
![Swift Package Manager](https://img.shields.io/badge/Swift%20Package%20Manager-compatible-brightgreen.svg)
[![License](https://img.shields.io/cocoapods/l/AmwalPayment.svg?style=flat)](https://github.com/AmwalPayment/AmwalPayment-ios/blob/master/LICENSE)
[![Platform](https://img.shields.io/cocoapods/p/ios.svg?)](https://github.com/AmwalPayment/AmwalPayment-ios#)

# AmwalPayment iOS SDK

Integrate Amwal’s prebuilt payment Sheet into the checkout of your iOS app with the PaymentSheet DSL friendly APIs.

> 📘 Associate your iOS app in our merchant dashboard
> 
> If you haven't done this already, please refer back to [this guide](https://docs.amwal.tech/docs/setup#workflow-with-amwal)

# Table of Contents

<!-- MarkdownTOC -->
- [Intoduction](#intoduction)
- [Quick Start Guide](#quick-start-guide)
  - [Install SDK](#install-sdk)
    - [Swift Package Manager (SPM)](#swift-package-manager-spm)
    - [CocoaPods](#cocoapods)
  - [Initialize Payment Sheet](#initialize-payment-sheet)
  - [Show Payment Sheet](#showing-payment-sheet)
  - [Handle Payment Result](#listen-payment-results)
  - [Tips](#tips)


# Intoduction
AmwalPayment SDK offers the flexibility to use pass keys for enhanced security during the payment process. Pass keys provide an additional layer of protection by replacing traditional OTPs (One-Time Passwords) and ensuring a secure payment experience. Here's how you can generate and integrate pass keys into the Payment Sheet

<a name="quick-start-guide"></a>
# Quick Start Guide
<a name="install-sdk"></a>
## Install SDK
<a name="swift-package-manager-spm"></a>
### Swift Package Manager (SPM)
Add the following line to your `Package.swift` file's dependencies:

```swift
dependencies: [
    .package(url: "https://github.com/amwal/payment-sdk-ios.git", from: "1.0.0-alpha06")
]
```
### CocoaPods
```swift
pod 'AmwalPayment', '~> 1.0.0-alpha06'
```

<a name="initialize-payment-sheet"></a>
## 2. Initialize the PaymentSheet
This example shows how to create a payment sheet using Swift in your view controller.
```swift
import AmwalPayment
let merchantId: String = "Merchant Id Key"
// Creating a payment sheet with no configuration
let paymentSheetWithNoConfig = PaymentSheet(merchantId: merchantId)

// Creating a payment sheet with configurations
let paymentSheet = PaymentSheet(merchantId: merchantId) { builder in
    builder.phoneNumber("1099013301")
    builder.countryCode("+20")
    builder.appearance {

    }
}
```
<a name="showing-payment-sheet"></a>

## 3. Showing Payment Sheet
```swift
@IBAction func showPaymentSheet(_ sender: UIButton) {
    paymentSheet.show(
        PaymentSheet.Amount(
            total: 220.0, tax: 0.0, shipping: 0.0, discount: 0.0
        )
    ) { 
      // ... implementation for success what you want

    }
}
```
<a name="listen-payment-results"></a>

## 4. Listen for results
we are handled all errors closure for success only
## Tips
🚧 Securely store your keys

The merchantId should be securely stored and not hard-coded as shown in this example. For more information on securely storing keys in iOS, see [this article](https://medium.com/google-developer-experts/a-follow-up-on-how-to-store-tokens-securely-in-android-e84ac5f15f17).
