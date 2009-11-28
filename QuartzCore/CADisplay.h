/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface CADisplay : NSObject {
@private
	void* _impl;
}
@property(readonly, assign) CGRect bounds;
@property(readonly, assign) NSString* deviceName;
@property(readonly, assign) NSString* name;
+(id)displays;
+(id)mainDisplay;
+(id)TVOutDisplay;
-(id)_initWithDisplay:(Display*)display;
// inherited: -(id)description;
@end
