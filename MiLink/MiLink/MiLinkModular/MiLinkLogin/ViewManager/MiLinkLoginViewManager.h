//
//  MiLinkLoginViewManager.h
//  MiLink
//
//  Created by Cain on 25/7/16.
//  Copyright © 2016年 Cain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MiLinkLoginViewManager : NSObject

- (instancetype)initLoginViewManagerWithController:(UIViewController *)controller;

- (void)reloadLoginView:(BOOL)isLogin;

@end
