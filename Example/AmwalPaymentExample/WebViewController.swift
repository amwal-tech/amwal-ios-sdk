//
//  WebViewController.swift
//  AmwalPaymentExample
//
//  Created by MahmoudFares on 21/11/2023.
//

import UIKit
import WebKit

class WebViewController: UIViewController, WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler {
    @IBOutlet var containerStack: UIStackView!
    @IBOutlet var textFieldURL: UITextField!

    var webView: WKWebView!
    var webViewtemp: WKWebView!

    override func viewDidLoad() {
        super.viewDidLoad()
        webView = WKWebView()
        webView.navigationDelegate = self
        webView.uiDelegate = self
        containerStack.addArrangedSubview(webView)
        let urlString = textFieldURL.text ?? ""
        let url = URL(string: urlString)!
        webView.load(URLRequest(url: url))
        let userController: WKUserContentController = WKUserContentController()
        let config: WKWebViewConfiguration = WKWebViewConfiguration()
//        webView.isInspectable = true
        config.preferences.javaScriptEnabled = false
        config.preferences.javaScriptCanOpenWindowsAutomatically = true
        config.userContentController = userController
        webView = WKWebView(frame: view.frame, configuration: config)
        webView?.navigationDelegate = self
        webView?.load(URLRequest(url: url))
    }

    func userContentController(_ userContentController: WKUserContentController, didReceive message: WKScriptMessage) {
        print(message.body)
    }

    func webView(
        _ webView: WKWebView,
        createWebViewWith configuration: WKWebViewConfiguration,
        for navigationAction: WKNavigationAction,
        windowFeatures: WKWindowFeatures
    ) -> WKWebView? {
        if navigationAction.targetFrame == nil {
            let tempURL = navigationAction.request.url
            var components = URLComponents()
            components.scheme = tempURL?.scheme
            components.host = tempURL?.host
            components.path = (tempURL?.path)!
            if !(components.url?.absoluteString.isEmpty ?? false) {
                let webViewtemp = WKWebView(frame: view.bounds, configuration: configuration)
                webViewtemp.uiDelegate = self
                if #available(iOS 16.4, *) {
                    webViewtemp.isInspectable = true
                }
                webViewtemp.navigationDelegate = self
                containerStack.arrangedSubviews[0].isHidden = true
                containerStack.addArrangedSubview(webViewtemp)
                return webViewtemp
            } else {
                webView.load(navigationAction.request)
            }
        }
        return nil
    }

    func webViewDidClose(_ webView: WKWebView) {
        containerStack.arrangedSubviews[0].isHidden = false
        webView.removeFromSuperview()
    }

    func webView(_ webView: WKWebView, decidePolicyFor navigationAction: WKNavigationAction) async -> WKNavigationActionPolicy {
        .allow
    }

    func webView(_ webView: WKWebView, decidePolicyFor navigationResponse: WKNavigationResponse) async -> WKNavigationResponsePolicy {
        .allow
    }

    func webView(_ webView: WKWebView, decidePolicyFor navigationAction: WKNavigationAction, preferences: WKWebpagePreferences) async -> (WKNavigationActionPolicy, WKWebpagePreferences) {
        // Your async code goes here

        // Example: Allow all navigation actions
        let policy: WKNavigationActionPolicy = .allow
        return (policy, preferences)
    }

    func webView(_ webView: WKWebView, runJavaScriptAlertPanelWithMessage message: String, initiatedByFrame frame: WKFrameInfo) async {
        let ac = UIAlertController(title: nil,
                                   message: message,
                                   preferredStyle: .alert)
        ac.addAction(UIAlertAction(title: "Ok",
                                   style: .default) { _ in

            })
        present(ac, animated: true)
    }

    @IBAction func goButtonTapped(_ sender: UIButton) {
        let urlString = textFieldURL.text ?? ""
        let url = URL(string: urlString)!
        webView.load(URLRequest(url: url))
    }
}
