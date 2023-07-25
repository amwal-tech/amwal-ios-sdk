Pod::Spec.new do |s|
    s.name             = 'AmwalPayment'
    s.version          = '1.0.1'
    s.summary          = 'Powerful biometric checkout & conversion solutions that drive revenue, decrease abandoned carts, and increase loyalty.'
    s.homepage         = 'https://www.amwal.tech/'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { 'AmwalPayment Developer' => 'dev@amwal.tech' }
    s.source           = { :git => 'https://github.com/amwal-tech/amwal-ios-sdk.git', :tag => s.version.to_s }
    s.ios.deployment_target = '15.0'
    s.ios.vendored_frameworks = 'AmwalPayment.xcframework'
    s.frameworks = 'UIKit'
    s.swift_versions = '5.7.1'
end