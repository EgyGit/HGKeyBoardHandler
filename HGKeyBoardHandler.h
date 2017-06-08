//
//  HGKeyBoardHandler.h
//  KeyBoradTestDemo
//
//  Created by HotelGGmin on 16/9/26.
//  Copyright © 2016年 Yang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HGKeyBoardHandler : NSObject

- (void)resignFirstResponder;
- (void)addKeyBoardObserver;
- (void)removeKeyBoardObserver;

@end
