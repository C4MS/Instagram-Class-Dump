//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGFeedNetworkSource, NSSet, UIScrollView;

@protocol IGFeedViewDelegate <NSObject>
@property(retain, nonatomic) IGFeedNetworkSource *feedSource;
- (void)feedViewDidEndDragging:(UIScrollView *)arg1;
- (void)feedViewDidEndScrolling:(UIScrollView *)arg1;
- (void)feedViewDidScroll:(UIScrollView *)arg1;
- (void)feedViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

@optional
- (void)feedView:(UIScrollView *)arg1 didUpdateVisibleFeedItems:(NSSet *)arg2;
- (void)feedView:(UIScrollView *)arg1 didViewFeedItem:(IGFeedItem *)arg2;
- (void)feedViewScrollToTopAnimated:(BOOL)arg1;
- (double)feedViewVideoAutoplayDelayAmount:(UIScrollView *)arg1;
- (BOOL)feedViewManuallyScrollToTop:(UIScrollView *)arg1 animated:(BOOL)arg2;
- (void)feedView:(UIScrollView *)arg1 willDisplayTopBannerOfHeight:(float)arg2;
@end
