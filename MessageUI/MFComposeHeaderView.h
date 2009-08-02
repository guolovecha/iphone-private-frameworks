/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIView.h>

@class HeaderLabelView, NSString;

@interface MFComposeHeaderView : UIView {
	NSString* _label;
	HeaderLabelView* _labelView;
	id _delegate;
	UIView* _separator;
}
+(float)defaultHeight;
-(CGColorRef)labelColor;
-(id)initWithFrame:(CGRect)frame;
-(void)setLabel:(id)label;
-(void)setLabelHighlighted:(BOOL)highlighted;
-(float)maxLabelX;
-(BOOL)_canBecomeFirstResponder;
-(void)handleTouchesEnded;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)mouseUp:(GSEventRef)up;
-(void)setDelegate:(id)delegate;
-(void)setFrame:(CGRect)frame;
-(void)layoutSubviews;
-(void)dealloc;
@end

@interface MFComposeHeaderView (SyntheticEvents)
-(id)_automationID;
@end
