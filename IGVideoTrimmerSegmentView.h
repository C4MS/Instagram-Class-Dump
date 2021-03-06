//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGPaddedImageView, UIImage;

@interface IGVideoTrimmerSegmentView : UIView
{
    UIImage *_selectedSegmentImageWithHandle;
    UIImage *_selectedSegmentImageWithoutHandle;
    BOOL _selected;
    id <IGVideoTrimmerSegmentViewDelegate> _delegate;
    IGPaddedImageView *_selectedHandle;
    IGPaddedImageView *_deselectedHandle;
}

@property(retain, nonatomic) IGPaddedImageView *deselectedHandle; // @synthesize deselectedHandle=_deselectedHandle;
@property(retain, nonatomic) IGPaddedImageView *selectedHandle; // @synthesize selectedHandle=_selectedHandle;
@property(nonatomic) __weak id <IGVideoTrimmerSegmentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onTap;
- (void)onPan:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

@end

