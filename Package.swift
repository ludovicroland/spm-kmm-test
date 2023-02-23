// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "KMM_TEST",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "KMM_TEST",
            targets: ["KMM_TEST"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "KMM_TEST",
            path: "./KMM_TEST.xcframework"
        ),
    ]
)
