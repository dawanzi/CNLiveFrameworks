Pod::Spec.new do |s|

  s.name         = "CNLiveFrameworks"
  s.version      = "0.0.5"
  s.summary      = "CNLive-iOS SDK集合库"# 项目简介
  s.homepage     = "https://github.com/oldSixMrZhang/CNLiveFrameworks"
  s.source       = { :git => "https://github.com/oldSixMrZhang/CNLiveFrameworks.git", :tag => "#{s.version}" }
  s.license      = "MIT"          # 开源证书
  s.author       = { "张旭" => "zhangxu@cnlive.com" }
  s.platform     = :ios, "9.0" #平台及支持的最低版本
  s.frameworks   = "UIKit", "Foundation" #支持的框架

  s.subspec 'CNLiveBaseKit' do |sp|
    sp.vendored_frameworks = 'BaseLayer/CNLiveBaseKit.framework'
    sp.dependency 'MJExtension','~> 3.0.15.1'
  end

  s.subspec 'CNLiveStat' do |sp|
    sp.vendored_frameworks = 'CNLiveSDKs/CNLiveStat.framework'
  end

  s.subspec 'CNLiveUserSystemSDK' do |sp|
    sp.vendored_frameworks = 'CNLiveSDKs/CNLiveUserSystemSDK.framework'
  end

  s.subspec 'CNLiveMapKit' do |sp|
    sp.vendored_frameworks = 'MapLayer/CNLiveMapKit.framework'
  end

end
