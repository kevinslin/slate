//
//  JSWrapperUtils.h
//  Slate
//
//  Created by Jigish Patel on 1/22/13.
//  Copyright 2013 Jigish Patel. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see http://www.gnu.org/licenses

#import <Foundation/Foundation.h>

@class AccessibilityWrapper;
@class ScreenWrapper;

@interface JSWrapperUtils : NSObject

+ (NSDictionary *)screenAndWindowValues:(NSString *)screen aw:(AccessibilityWrapper *)aw sw:(ScreenWrapper *)sw;
+ (NSValue *)pointFromDict:(id)dict aw:(AccessibilityWrapper *)aw sw:(ScreenWrapper *)sw;
+ (NSValue *)sizeFromDict:(id)dict aw:(AccessibilityWrapper *)aw sw:(ScreenWrapper *)sw;
+ (NSValue *)rectFromDict:(id)dict aw:(AccessibilityWrapper *)aw sw:(ScreenWrapper *)sw;

@end
