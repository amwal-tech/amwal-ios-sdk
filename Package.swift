// swift-tools-version:5.7.1
import PackageDescription

let package = Package(
    name: "AmwalPay",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "AmwalPay", 
            targets: ["AmwalPay"])
    ],
    targets: [
        .binaryTarget(
            name: "AmwalPay",
            path: "./AmwalPay.xcframework")
    ])
