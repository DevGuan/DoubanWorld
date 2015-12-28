//
//  CommenDefines.h
//  AnecdotesDemo
//
//  Created by LYoung on 15/10/13.
//  Copyright (c) 2015年 LYoung. All rights reserved.
//

#ifndef AnecdotesDemo_CommenDefines_h
#define AnecdotesDemo_CommenDefines_h



// 打印
#ifdef DEBUG

#define NSLog(FORMAT, ...) fprintf(stderr,"[%s:%d行] %s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif

#define KColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0                            alpha:1.0]

#define     SCREEN_HEIGHT                   ([[UIScreen mainScreen] bounds].size.height)
#define     SCREEN_WIDTH                    ([[UIScreen mainScreen] bounds].size.width)
#endif


#define HMStatusCellMargin 15

#define TheThemeColor KColor(63, 184, 56)

#define iOS7 ([[UIDevice currentDevice].systemVersion doubleValue] >= 7.0)
#define iOS8 ([[[UIDevice currentDevice]systemVersion]doubleValue]>= 8.0)
#define iPHone6 ([UIScreen mainScreen].bounds.size.height > 568) ? YES : NO

#define HotCityButtonWith ([UIScreen mainScreen].bounds.size.height > 568) ? 100.f : 80.f
#define HotCityButtonHeight 36.f
#define HotCityButtonMargin 10.f










