#
# Be sure to run `pod lib lint AmwalPayment.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AmwalPayment'
  s.version          = '0.1.0'
  s.summary          = 'AmwalPayment SDK offers the flexibility to use pass keys for enhanced security during the payment process.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/amwal-tech/amwal-ios-sdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'AmwalPayment' => 'faris@amwal.tech' }
  spec.summary       = 'AmwalPayment SDK offers the flexibility to use pass keys for enhanced security during the payment process. '
  s.source           = { :git => 'https://github.com/amwal-tech/amwal-ios-sdk.git', :tag => s.version.to_s }
  s.social_media_url = 'https://www.linkedin.com/company/amwal-tech/'

  s.ios.deployment_target = '15.0'

  s.source_files = 'AmwalPayment/Classes/**/*'
  
  # s.resource_bundles = {
  #   'AmwalPayment' => ['AmwalPayment/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
