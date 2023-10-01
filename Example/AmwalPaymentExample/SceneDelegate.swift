//
//  SceneDelegate.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 31/08/2023.
//

import UIKit
import SwiftUI

class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?

    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {
        
        if let windowScene = scene as? UIWindowScene {
            let contentView = ContentView()
            
            let window = UIWindow(windowScene: windowScene)
            let swiftUIView =  UIHostingController(rootView: contentView)
            let uiKitView = ViewController()
            window.rootViewController = uiKitView
           
            self.window = window
            window.makeKeyAndVisible()
        }
    }
}
