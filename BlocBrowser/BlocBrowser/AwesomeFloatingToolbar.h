//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Keivon Hobeheidar on 9/3/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;


@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

-(void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;

@end

@interface AwesomeFloatingToolbar : UIView

-(instancetype) initWithFourTitles: (NSArray *)titles;

-(void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id<AwesomeFloatingToolbarDelegate> delegate;

@end