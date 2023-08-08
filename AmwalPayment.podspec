Pod::Spec.new do |s|
  s.name             = 'AmwalPayment'
  s.version          = '0.1.1'
  s.summary          = 'AmwalPayment SDK offers the flexibility to use pass keys for enhanced security during the payment process.'

  s.description      = <<-DESC
    TODO: Add long description of the pod here.
  DESC

  s.homepage         = 'https://github.com/amwal-tech/amwal-ios-sdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'AmwalPayment' => 'faris@amwal.tech' }
  s.source           = { :git => 'https://github.com/amwal-tech/amwal-ios-sdk.git', :tag => s.version.to_s }
  s.social_media_url = 'https://www.linkedin.com/company/amwal-tech/'
  s.ios.deployment_target = '15.0'
  s.ios.vendored_frameworks = 'AmwalPayment/Frameworks/AmwalPay.xcframework'
  s.frameworks = 'UIKit'
  s.swift_version = '4.0'
end
