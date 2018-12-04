//
//  CNLiveDefinesHeader.h
//  CNLiveCommonCategory
//
//  Created by 张旭 on 2018/9/26.
//  Copyright © 2018年 cnlive. All rights reserved.
//

#ifndef CNLiveDefinesHeader_h
#define CNLiveDefinesHeader_h
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ColorHeaders.h"
//#import "CNLiveARCCompile.h" 暂时用不到

////////////////////////////////////////////////////////
////////////          Color
////////////////////////////////////////////////////////
// 默认的字体颜色
#define kMainTextColor                kBlackColor
#define kAppBakgroundColor                kWhiteColor

// 主色调
// 导航按钮
#define kNavBarThemeColor             RGB(128, 64, 122)

#define kDetailTextColor              RGB(145, 145, 145)

// 默认TableViewCell高度
#define kDefaultCellHeight 69
// 默认界面之间的间距
#define kDefaultMargin     5

////////////////////////////////////////////////////////
////////////          Font
////////////////////////////////////////////////////////
// CommonLibrary中常用的字体
#define kCommonLargeTextFont       [UIFont systemFontOfSize:16]
#define kCommonMiddleTextFont      [UIFont systemFontOfSize:14]
#define kCommonSmallTextFont       [UIFont systemFontOfSize:12]

////////////////////////////////////////////////////////
////////////          SCreen
////////////////////////////////////////////////////////
#define KScreenWidth ([UIScreen mainScreen].bounds.size.width > [UIScreen mainScreen].bounds.size.height ? [UIScreen mainScreen].bounds.size.height : [UIScreen mainScreen].bounds.size.width)
#define KScreenHeight ([UIScreen mainScreen].bounds.size.width > [UIScreen mainScreen].bounds.size.height ? [UIScreen mainScreen].bounds.size.width : [UIScreen mainScreen].bounds.size.height)

//判断iPHoneXr
#define Device_Is_iPhoneXS_XR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO)

//判断iPHoneX、iPHoneXs
#define Device_Is_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#define Device_Is_iPhoneXS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

//判断iPhoneXs Max
#define Device_Is_iPhoneXS_MAX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)

#define IS_IPhoneX_All (CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(375, 812)) ||CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(812, 375)) ||CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(414, 896)) ||CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(896, 414)))


#define kStatusHeight (int)[UIApplication sharedApplication].statusBarFrame.size.height //x44 非x20
#define kNavigationBarHeight ((int)[UIApplication sharedApplication].statusBarFrame.size.height+44) //x88 非x64
#define kVerticalNaviBarHeight ((IS_IPhoneX_All > 0) ? 88 : 44)
#define kVerticalTabBarTotalHeight ((IS_IPhoneX_All > 0) ? 83 : 49)
#define kVerticalBottomSafeHeight ((IS_IPhoneX_All > 0) ? 34 : 0)
#define kVerticalStatusHeight ((IS_IPhoneX_All > 0) ? 44 : 20)
#define kVerticalTopHeight ((IS_IPhoneX_All > 0) ? 24 : 0)
#define kHorizontalTopNaviBarHeight 32
#define kHorizontalBottomHeight ((IS_IPhoneX_All > 0) ? 21 : 0)
#define kHorizontalLeftHeight ((IS_IPhoneX_All > 0) ? 44 : 0)
#define kHorizontalRightHeight ((IS_IPhoneX_All > 0) ? 44 : 0)
#define kHorizontalTopHeight ((IS_IPhoneX_All > 0) ? 24 : 0)


////////////////////////////////////////////////////////
////////////          WeakSelf&StrongSelf
////////////////////////////////////////////////////////
/**
 *  weakSelf
 */
#ifndef weakself
#define weakself __weak typeof(self)weakSelf = self;
#endif
/**
 *  strongSelf
 */
#ifndef strongself
#define strongself __strong typeof(weakSelf)self = weakSelf;
#endif

////////////////////////////////////////////////////////
////////////          输出测试
////////////////////////////////////////////////////////
//#ifdef DEBUG
//#define NSLog(s, ... ) NSLog( @"[%@ in line %d] ===============>%@", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
//#else
//#define NSLog(s, ... )
//#endif

#ifdef DEBUG

#ifndef DebugLog
#define DebugLog(fmt, ...) NSLog((@"[%s Line %d] \n" fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#else

#ifndef DebugLog
#define DebugLog(fmt, ...) // NSLog((@"[%s Line %d] \n" fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#define NSLog // NSLog

#endif


////////////////////////////////////////////////////////
////////////          动态跟随系统设置的字体大小改变字体和行高
////////////////////////////////////////////////////////
#define RATIO [CNSetUserDefaultTool getScaleCoefficient]

//这个字体宏可以统一成UIFontMake()
//字体大小
#define Text_FONT(F)        [UIFont systemFontOfSize:F]


#define contentLabelFontSize 16

////////////////////////////////////////////////////////
////////////          AppDelegate
////////////////////////////////////////////////////////
#ifndef AppKeyWindow
#define AppKeyWindow [IMAAppDelegate sharedAppDelegate].window
#endif

////////////////////////////////////////////////////////
////////////          NSNotificationCenter
////////////////////////////////////////////////////////
#define CNNotificationCenter        [NSNotificationCenter defaultCenter]


#define SINGLETON_FOR_HEADER(className) \
\
+ (className *)shared##className;

#define SINGLETON_FOR_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}

#define AppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]




#endif /* CNLiveDefinesHeader_h */
