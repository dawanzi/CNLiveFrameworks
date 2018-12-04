Pod::Spec.new do |s|

  s.name         = "CNLiveBaseKitSDK"
  s.version      = "0.1.5"
  s.summary      = "CNLive-iOS的通用基类SDK"# 项目简介
  s.homepage     = "https://github.com/oldSixMrZhang/CNLiveFrameworks"
  s.source       = { :git => "https://github.com/oldSixMrZhang/CNLiveFrameworks.git", :tag => "#{s.version}" }
  s.license      = "MIT"          # 开源证书
  s.author       = { "张旭" => "zhangxu@cnlive.com" }
  s.platform     = :ios, "9.0" #平台及支持的最低版本
  s.frameworks   = "UIKit", "Foundation" #支持的框架
  # s.dependency "MJExtension", "~> 3.0.15.1"

  s.vendored_frameworks = 'CNLiveBaseKit.framework'

end