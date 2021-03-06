//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIScrollView;

@interface IGCropView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    float _cropAngle;
}

@property(nonatomic) float cropAngle; // @synthesize cropAngle=_cropAngle;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGSize)largestOutputSizeWithNoUpscaling;
- (struct IGCropInfo)cropInfo;
- (void)resetCropRectAnimated:(BOOL)arg1;
- (struct CGRect)cropRect;
- (void)setCropRect:(struct CGRect)arg1;
@property(nonatomic) float cropZoom;
- (float)straightenScaleForAngle:(float)arg1;
@property(nonatomic) struct CGPoint cropCenter;
- (void)setCropCenter:(struct CGPoint)arg1 animated:(BOOL)arg2;
@property(nonatomic) float maximumZoom;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property(retain, nonatomic) UIView *contentView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

