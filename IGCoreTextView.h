//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGStyledString, UIColor;

@interface IGCoreTextView : UIView
{
    UIColor *_shadowColor;
    float _shadowOffset;
    BOOL _heightIsValid;
    struct CGPoint _touchPoint;
    BOOL _longTapHandled;
    IGStyledString *_styledString;
    id <IGCoreTextLinkHandler> _linkHandler;
}

@property(nonatomic) id <IGCoreTextLinkHandler> linkHandler; // @synthesize linkHandler=_linkHandler;
@property(retain, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)handleTapAtIndex:(int)arg1 forTouchEvent:(unsigned int)arg2 fromLongTap:(BOOL)arg3;
- (BOOL)handleTapAtIndex:(int)arg1 forTouchEvent:(unsigned int)arg2;
- (BOOL)handleTapAtPoint:(struct CGPoint)arg1 forTouchEvent:(unsigned int)arg2 fromLongTap:(BOOL)arg3;
- (BOOL)handleTapAtPoint:(struct CGPoint)arg1 forTouchEvent:(unsigned int)arg2;
- (void)handleLongTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (float)height;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithWidth:(float)arg1;

@end
