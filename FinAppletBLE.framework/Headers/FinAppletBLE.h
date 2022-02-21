//
//  FinAppletBLE.h
//  FinAppletBLE
//
//  Created by 胡健辉 on 2022/2/10.
//

#import <Foundation/Foundation.h>

//! Project version number for FinAppletBLE.
FOUNDATION_EXPORT double FinAppletBLEVersionNumber;

//! Project version string for FinAppletBLE.
FOUNDATION_EXPORT const unsigned char FinAppletBLEVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FinAppletBLE/PublicHeader.h>

/* 
 要使用蓝牙功能，需要往info.plist添加：
 <key>NSBluetoothPeripheralUsageDescription</key>
 <string>是否允许【FinApplet】使用蓝牙？</string>
 <key>NSBluetoothAlwaysUsageDescription</key>
 <string>是否允许【FinApplet】使用蓝牙？</string>
 */

/*
 要使用Beacon功能，需要在info.plist文件里面添加描述：
 <key>NSLocationWhenInUseUsageDescription</key>
 <string>我们需要通过您的地理位置信息获取您周边的相关数据</string>
 <key>NSLocationAlwaysAndWhenInUseUsageDescription</key>
 <string>我们需要通过您的地理位置信息获取您周边的相关数据</string>
 */

