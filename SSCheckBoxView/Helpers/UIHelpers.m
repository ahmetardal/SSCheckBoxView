
/*
 Copyright 2011 Ahmet Ardal
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

//
//  UIHelpers.m
//  Trendle
//
//  Created by Ahmet Ardal on 6/25/10.
//  Copyright 2010 SpinningSphere Labs. All rights reserved.
//

#import "UIHelpers.h"

@implementation UIHelpers

#pragma mark -
#pragma mark UIAlertView showing Methods

+ (void) showAlertWithTitle:(NSString *)title
                        msg:(NSString *)msg
                buttonTitle:(NSString *)btnTitle
{
    UIAlertView *av = [[UIAlertView alloc] initWithTitle:title
                                                 message:msg
                                                delegate:nil
                                       cancelButtonTitle:btnTitle
                                       otherButtonTitles:nil];
    [av show];
    [av release];
}

+ (void) showAlertWithTitle:(NSString *)title
{
    [UIHelpers showAlertWithTitle:title
                              msg:nil
                      buttonTitle:NSLocalizedString(@"OK", @"ok")];
}

+ (void) showAlertWithTitle:(NSString *)title
                        msg:(NSString *)msg
{
    [UIHelpers showAlertWithTitle:title
                              msg:msg
                      buttonTitle:NSLocalizedString(@"OK", @"ok")];
}

@end
