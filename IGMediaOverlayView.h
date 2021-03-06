//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGVideoPlaybackViewDelegate.h"

@class IGVideoComposition, IGVideoPlaybackView, NSString, UIImage, UIImageView;

@interface IGMediaOverlayView : UIView <IGVideoPlaybackViewDelegate>
{
    UIImage *_image;
    IGVideoComposition *_video;
    UIImageView *_backgroundView;
    UIView *_contentView;
    UIImageView *_imageView;
    IGVideoPlaybackView *_videoPlayerView;
    CDUnknownBlockType _resetBlock;
    struct CGRect _sourceRect;
}

@property(copy, nonatomic) CDUnknownBlockType resetBlock; // @synthesize resetBlock=_resetBlock;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) IGVideoPlaybackView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGVideoComposition *video; // @synthesize video=_video;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)filterPlayerViewDidFinishPlaying;
- (void)dismiss;
- (void)onTap;
- (void)scaleFromRect:(struct CGRect)arg1 resetBlock:(CDUnknownBlockType)arg2;
- (id)initWithImage:(id)arg1 video:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

