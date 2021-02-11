//
//  NSString+toWString.h
//  exampleios
//
//  Created by Kazuhiro Yamada on 2021/02/10.
//

#ifndef NSString_toWString_h
#define NSString_toWString_h

#import <Foundation/Foundation.h>
#include <string>

@interface NSString(etuberidemobile)
- (std::wstring) toWString;
@end

#endif /* NSString_toWString_h */
