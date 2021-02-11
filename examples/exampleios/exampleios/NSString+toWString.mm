//
//  NSString+toWString.cpp
//  exampleios
//
//  Created by Kazuhiro Yamada on 2021/02/10.
//

#import <Foundation/Foundation.h>
#import "NSString+toWString.h"

#include <string>
#include <cstring>

@implementation NSString(etuberidemobile)
- (std::wstring)toWString {
    NSStringEncoding wcharEncoding = CFStringConvertEncodingToNSStringEncoding(kCFStringEncodingUTF32LE);
    NSData* data = [self dataUsingEncoding:wcharEncoding];
    return std::wstring((wchar_t*)[data bytes], [data length] / sizeof(wchar_t));
}
@end
