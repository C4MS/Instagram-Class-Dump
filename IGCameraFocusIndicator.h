//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink;

@interface IGCameraFocusIndicator : UIView
{
    CADisplayLink *_reviewDisplayLink;
    int _frame;
    int _stopIn;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)completeAnimation;
- (void)stopAnimating;
- (void)startAnimatingAtPoint:(struct CGPoint)arg1;
- (void)stopRenderLoop;
- (void)startRenderLoop;
- (id)init;
- (void)dealloc;

@end

