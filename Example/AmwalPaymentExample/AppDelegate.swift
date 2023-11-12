//
//  AppDelegate.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 31/08/2023.
//

import UIKit
import SwiftUI
import netfox

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        NFX.sharedInstance().start() 
        return true
    }
}
