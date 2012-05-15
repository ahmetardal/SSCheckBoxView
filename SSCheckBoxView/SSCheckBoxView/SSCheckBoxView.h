
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
//  SSCheckBoxView.h
//  SSCheckBoxView
//
//  Created by Ahmet Ardal on 12/6/11.
//  Copyright 2011 SpinningSphere Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum SSCheckBoxViewStyle_ {
    kSSCheckBoxViewStyleBox = 0,
    kSSCheckBoxViewStyleDark,
    kSSCheckBoxViewStyleGlossy,
    kSSCheckBoxViewStyleGreen,
    kSSCheckBoxViewStyleMono,

    kSSCheckBoxViewStylesCount
} SSCheckBoxViewStyle;

@interface SSCheckBoxView: UIView
{
    SSCheckBoxViewStyle style;
    BOOL checked;
    BOOL enabled;

    UIImageView *checkBoxImageView;
    UILabel *textLabel;

    /* called when check box changes state */
    // this method would be in the following form:
    // - (void) checkBoxViewChangedState:(SSCheckBoxView *)cbv;
    SEL stateChangedSelector;
    id<NSObject> delegate;

    void (^stateChangedBlock)(SSCheckBoxView *cbv);
}

@property (nonatomic, readonly) SSCheckBoxViewStyle style;
@property (nonatomic, readonly) BOOL checked;
@property (nonatomic, getter=enabled, setter=setEnabled:) BOOL enabled;
@property (nonatomic, copy) void (^stateChangedBlock)(SSCheckBoxView *cbv);

- (id) initWithFrame:(CGRect)frame
               style:(SSCheckBoxViewStyle)aStyle
             checked:(BOOL)aChecked;

- (void) setText:(NSString *)text;

- (void) setChecked:(BOOL)isChecked;

- (void) setStateChangedTarget:(id<NSObject>)target
                      selector:(SEL)selector;

@end
