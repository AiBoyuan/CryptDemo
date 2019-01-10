//
//  ViewController.m
//  CriptDemo
//
//  Created by Aibo on 2019/1/4.
//  Copyright © 2019 Aibo. All rights reserved.
//

#import "ViewController.h"
#import "NSString+AES.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *password = @"zy1047539560";
    
    NSString *encryptStr = [password AES128Encrypt];
    NSString *decryptStr = [encryptStr AES128Decrypt];
    
    NSLog(@"encryptStr:%@ \n decryptStr:%@",encryptStr,decryptStr);

    
    // Do any additional setup after loading the view, typically from a nib.
}


@end
