//
//  SSCheckBoxViewAppDelegate.h
//  SSCheckBoxView
//
//  Created by Ahmet Ardal on 12/6/11.
//  Copyright 2011 SpinningSphere Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SSCheckBoxViewViewController;

@interface SSCheckBoxViewAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet SSCheckBoxViewViewController *viewController;

@end
