//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIScrollViewDelegate.h"

@class AVAsset, IGFilmStripView, IGTimeRulerView, IGTrimView, NSString, UIScrollView, UIView;

@interface IGVideoTrimView : UIControl <UIScrollViewDelegate>
{
    BOOL _scrubbing;
    BOOL _scrubbingFrames;
    AVAsset *_asset;
    IGTrimView *_trimView;
    IGFilmStripView *_filmStrip;
    IGTimeRulerView *_rulerView;
    UIScrollView *_scrollView;
    float _currentAssetDuration;
    float _pixelsPerSecond;
    UIView *_trackheadView;
    CDStruct_1b6d18a9 _scrubTime;
    CDStruct_1b6d18a9 _playbackTime;
}

@property(nonatomic) BOOL scrubbingFrames; // @synthesize scrubbingFrames=_scrubbingFrames;
@property(retain, nonatomic) UIView *trackheadView; // @synthesize trackheadView=_trackheadView;
@property(nonatomic) float pixelsPerSecond; // @synthesize pixelsPerSecond=_pixelsPerSecond;
@property(nonatomic) float currentAssetDuration; // @synthesize currentAssetDuration=_currentAssetDuration;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) IGTimeRulerView *rulerView; // @synthesize rulerView=_rulerView;
@property(retain, nonatomic) IGFilmStripView *filmStrip; // @synthesize filmStrip=_filmStrip;
@property(retain, nonatomic) IGTrimView *trimView; // @synthesize trimView=_trimView;
@property(nonatomic) CDStruct_1b6d18a9 playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) CDStruct_1b6d18a9 scrubTime; // @synthesize scrubTime=_scrubTime;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)setPlaybackTime:(CDStruct_1b6d18a9)arg1 forceUpdate:(BOOL)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 endTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime;
@property(readonly, nonatomic) unsigned int draggingMode;
- (void)postEditDidEnd;
- (void)postEditDidBegin;
- (void)trimRangeChanged:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

