//
//  AmwalPaymentExampleApp.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 25/05/2023.
//

import SwiftUI

@main
struct AmwalPaymentExampleApp: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}

class AppDelegate: NSObject, UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        return true
    }
    func application(_ application: UIApplication, performFetchWithCompletionHandler completionHandler: @escaping (UIBackgroundFetchResult) -> Void) {
        // Perform background fetch tasks here
        
        // Once your background fetch tasks are completed, call the completion handler
        completionHandler(.newData) // Indicate whether new data was fetched or not
    }

}
