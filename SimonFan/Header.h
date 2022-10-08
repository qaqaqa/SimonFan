//
//  Header.h
//  SimonFan
//
//  Created by sparxo-dev-ios-1 on 2022/9/30.
//

#ifndef Header_h
#define Header_h


//屏幕适配
#define SCREEN_HEIGHT   [UIScreen mainScreen].bounds.size.height
#define SCREEN_WIDTH    [UIScreen mainScreen].bounds.size.width
#define kStatusBarAndNavigationBarHeight (kIs_iPhoneX ? 88.f : 64.f)
#define kIs_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
//颜色
#define RGB(r, g, b)                 [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBA(r, g, b, a)             [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define UIColorFromHEX(rgbValue)     [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define UIColorFromHEXA(rgbValue,a)  [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]
#define kAPPDelegate ((AppDelegate *)[[UIApplication sharedApplication] delegate])
//语言本地化
#define LocalizedString(key, comment) \
     [NSBundle.mainBundle localizedStringForKey:(key) value:@"" table:@"Localizable_SimonFan"]//日志输出
#ifdef DEBUG
# define FLLog(fmt, ...) NSLog((@"\n[File:%s]\n" "[Function:%s]\n" "[Line:%d] \n" fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
# define FLLog(...);
#endif

#endif /* Header_h */
