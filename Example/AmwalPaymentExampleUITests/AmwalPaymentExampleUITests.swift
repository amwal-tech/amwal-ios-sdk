//
//  AmwalPaymentExampleUITests.swift
//  AmwalPaymentExampleUITests
//
//  Created by MahmoudFares on 13/08/2023.
//

import XCTest

final class AmwalPaymentExampleUITests: XCTestCase {

    override func setUp() {
        super.setUp()

        let app = XCUIApplication()
        setupSnapshot(app)
        app.launch()
    }

    func testExample() {
        let app = XCUIApplication()
        snapshot("PassKeys")
        let pay = app.buttons["tapButton"]

        pay.tap()
        snapshot("PhoneNumber")
        

    }
    
}
