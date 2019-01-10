//
//  NSString+AES.h
//  CriptDemo
//
//  Created by Aibo on 2019/1/4.
//  Copyright © 2019 Aibo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (AES)


/**
 *  计算AES 128加密结果
 *
 *  @return AES/ECB加密字符串
 */
- (NSString*) AES128Encrypt;

/**
 *  计算AES 128解密结果
 *
 *  @return AES/ECB解密字符串
 */
- (NSString*) AES128Decrypt;



@end

NS_ASSUME_NONNULL_END
