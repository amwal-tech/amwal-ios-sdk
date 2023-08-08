// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "AmwalPay",
    products: [
        .library(
            name: "AmwalPay",
            targets: ["AmwalPay"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "AmwalPay",
            path: "AmwalPayment/Frameworks/AmwalPay.xcframework"
        )
    ]
)
