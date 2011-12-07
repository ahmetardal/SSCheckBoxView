
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
//  UIHelpers.h
//  Trendle
//
//  Created by Ahmet Ardal on 6/25/10.
//  Copyright 2010 SpinningSphere Labs. All rights reserved.
//

#import <Foundation/Foundation.h>


#pragma mark -
#pragma mark Common Macro Definitions

#define RgbHex2UIColor(r, g, b)                 [UIColor colorWithRed:((r) / 256.0) green:((g) / 256.0) blue:((b) / 256.0) alpha:1.0]
#define RgbHex2UIColorWithAlpha(r, g, b, a)     [UIColor colorWithRed:((r) / 256.0) green:((g) / 256.0) blue:((b) / 256.0) alpha:(a)]
#define CArrayLength(arr)                       (sizeof(arr) / sizeof(*(arr)))
#define GetStringFromCArraySafely(arr, idx)     (((idx) >= 0) && (((idx) < CArrayLength(arr))) ? (arr)[idx] : @"")
#define GetNumberFromCArraySafely(arr, idx)     (((idx) >= 0) && (((idx) < CArrayLength(arr))) ? (arr)[idx] : 0)
#define NSNumWithInt(i)                         ([NSNumber numberWithInt:(i)])
#define NSNumWithFloat(f)                       ([NSNumber numberWithFloat:(f)])
#define NSNumWithBool(b)                        ([NSNumber numberWithBool:(b)])
#define IntFromNSNum(n)                         ([(n) intValue])
#define FloatFromNSNum(n)                       ([(n) floatValue])
#define BoolFromNSNum(n)                        ([(n) boolValue])
#define ToString(o)                             [NSString stringWithFormat:@"%@", (o)]
// ------
#define ContinueIf(expr)            if ((expr))  { continue;     }
#define BreakIf(expr)               if ((expr))  { break;        }
#define ReturnIf(expr)              if ((expr))  { return;       }
#define ReturnValIf(expr, val)      if ((expr))  { return (val); }
#define ContinueIfNot(expr)         if (!(expr)) { continue;     }
#define BreakIfNot(expr)            if (!(expr)) { break;        }
#define ReturnIfNot(expr)           if (!(expr)) { return;       }
#define ReturnValIfNot(expr, val)   if (!(expr)) { return (val); }
// ------

@interface UIHelpers: NSObject
{
}

+ (void) showAlertWithTitle:(NSString *)title;
+ (void) showAlertWithTitle:(NSString *)title
                        msg:(NSString *)msg;
+ (void) showAlertWithTitle:(NSString *)title
                        msg:(NSString *)msg
                buttonTitle:(NSString *)btnTitle;

@end
