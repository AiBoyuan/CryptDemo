//
//  NSString+DES.h
//  CriptDemo
//
//  Created by Aibo on 2019/1/10.
//  Copyright © 2019 Aibo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (DES)

// DES 加密
+ (NSString *)encryptWithText:(NSString *)sText;
// DES 解密
+ (NSString *)decryptWithText:(NSString *)sText;
    
@end

NS_ASSUME_NONNULL_END
