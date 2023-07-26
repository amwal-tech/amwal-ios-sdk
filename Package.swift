// swift-tools-version:5.7.1
import PackageDescription

let package = Package(
    name: "AmwalPayment",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "AmwalPayment", 
            targets: ["AmwalPayment"])
    ],
    targets: [
        .binaryTarget(
            name: "AmwalPayment",
            path: "./AmwalPayment.xcframework")
    ])
