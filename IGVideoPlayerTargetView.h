//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, IGKVOHandle, NSObject<OS_dispatch_queue>;

@interface IGVideoPlayerTargetView : UIView
{
    NSObject<OS_dispatch_queue> *_workingQueue;
    id <IGVideoPlayerTargetViewDelegate> _delegate;
    IGKVOHandle *_readyToDisplayObserver;
    IGKVOHandle *_playerRateObserver;
    id _playerPlaybackObserver;
}

+ (Class)layerClass;
@property(retain, nonatomic) id playerPlaybackObserver; // @synthesize playerPlaybackObserver=_playerPlaybackObserver;
@property(retain, nonatomic) IGKVOHandle *playerRateObserver; // @synthesize playerRateObserver=_playerRateObserver;
@property(retain, nonatomic) IGKVOHandle *readyToDisplayObserver; // @synthesize readyToDisplayObserver=_readyToDisplayObserver;
@property(nonatomic) __weak id <IGVideoPlayerTargetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayer *player;
- (id)initWithFrame:(struct CGRect)arg1 workingQueue:(id)arg2;
- (void)dealloc;

@end

