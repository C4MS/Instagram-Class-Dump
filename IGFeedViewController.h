//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedNetworkSourceDelegate.h"
#import "IGFeedStatusViewDynamicHeightProtocol.h"
#import "IGFeedToggleViewDelegate.h"
#import "IGFeedViewDelegate.h"
#import "IGGridViewDelegate.h"
#import "IGPullToRefreshProtocol.h"

@class IGFeedItemVisibilityTracker, IGFeedNetworkSource, IGFeedStatusView, IGPullToRefreshViewManager, IGRaindropRankInfo, NSMutableSet, NSObject<IGFeedViewProtocol>, NSString, UIBarButtonItem, UIView;

@interface IGFeedViewController : IGViewController <IGFeedViewDelegate, IGFeedToggleViewDelegate, IGFeedNetworkSourceDelegate, IGGridViewDelegate, IGPullToRefreshProtocol, IGFeedStatusViewDynamicHeightProtocol>
{
    NSMutableSet *_observerSbscriptions;
    BOOL _showRefreshButton;
    BOOL _disableRefreshButtonUpdateOnLoadMore;
    BOOL _pinSectionHeaders;
    BOOL _disablePullToRefresh;
    BOOL _shouldShowFollowButton;
    BOOL _showAttribution;
    IGFeedNetworkSource *_feedSource;
    int _defaultMode;
    int _currentMode;
    NSObject<IGFeedViewProtocol> *_viewManager;
    UIView *_headerView;
    IGFeedStatusView *_feedStatusView;
    IGPullToRefreshViewManager *_pullToRefreshViewManager;
    IGRaindropRankInfo *_currentRankInfo;
    int _previousScrollingOffsetY;
    UIBarButtonItem *_refreshButton;
    IGFeedItemVisibilityTracker *_feedItemVisibility;
}

@property(retain, nonatomic) IGFeedItemVisibilityTracker *feedItemVisibility; // @synthesize feedItemVisibility=_feedItemVisibility;
@property(retain, nonatomic) UIBarButtonItem *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(nonatomic) int previousScrollingOffsetY; // @synthesize previousScrollingOffsetY=_previousScrollingOffsetY;
@property(retain, nonatomic) IGRaindropRankInfo *currentRankInfo; // @synthesize currentRankInfo=_currentRankInfo;
@property(nonatomic) BOOL showAttribution; // @synthesize showAttribution=_showAttribution;
@property(nonatomic) BOOL shouldShowFollowButton; // @synthesize shouldShowFollowButton=_shouldShowFollowButton;
@property(nonatomic) BOOL disablePullToRefresh; // @synthesize disablePullToRefresh=_disablePullToRefresh;
@property(retain, nonatomic) IGPullToRefreshViewManager *pullToRefreshViewManager; // @synthesize pullToRefreshViewManager=_pullToRefreshViewManager;
@property(nonatomic) BOOL pinSectionHeaders; // @synthesize pinSectionHeaders=_pinSectionHeaders;
@property(nonatomic) BOOL disableRefreshButtonUpdateOnLoadMore; // @synthesize disableRefreshButtonUpdateOnLoadMore=_disableRefreshButtonUpdateOnLoadMore;
@property(nonatomic) BOOL showRefreshButton; // @synthesize showRefreshButton=_showRefreshButton;
@property(retain, nonatomic) IGFeedStatusView *feedStatusView; // @synthesize feedStatusView=_feedStatusView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSObject<IGFeedViewProtocol> *viewManager; // @synthesize viewManager=_viewManager;
@property(nonatomic) int currentMode; // @synthesize currentMode=_currentMode;
@property(nonatomic) int defaultMode; // @synthesize defaultMode=_defaultMode;
@property(retain, nonatomic) IGFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
- (void).cxx_destruct;
- (void)onFeedItem:(id)arg1 liked:(BOOL)arg2 actionInfo:(id)arg3;
- (void)feedStatusView:(id)arg1 wantsChangeToHeight:(float)arg2;
- (float)visibleContentHeight;
- (void)feedView:(id)arg1 didViewFeedItem:(id)arg2;
- (void)feedView:(id)arg1 didUpdateVisibleFeedItems:(id)arg2;
- (double)feedViewVideoAutoplayDelayAmount:(id)arg1;
- (void)feedViewDidEndDragging:(id)arg1;
- (void)feedViewDidEndScrolling:(id)arg1;
- (void)feedViewDidScroll:(id)arg1;
- (void)feedViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)reloadDataFromPullToRefresh;
- (id)currentActiveScrollView;
- (void)gridView:(id)arg1 didTapOnFeedItem:(id)arg2 view:(id)arg3;
- (void)handleTabBarTapped;
- (void)reloadDataFromServer;
- (void)onRefreshTapped:(id)arg1;
- (void)showErrorLoadMessageIfPossible;
- (void)updateFeedStatusView;
- (void)feedNetworkSource:(id)arg1 willAddObjects:(id)arg2 updateObjects:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2;
- (void)viewWillLayoutSubviews;
- (void)updateScrollViewContentInsets;
- (void)updateDataSourceForCurrentViewManager;
- (void)reloadViewManagerForCurrentMode;
- (void)feedToggle:(id)arg1 selectedButton:(int)arg2;
- (void)scrollToOffset:(int)arg1 animated:(BOOL)arg2;
- (float)headerViewOffset;
- (void)endFeedItemVisibilityTracking;
- (void)beginFeedItemVisibilityTracking;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (void)tabBarTapped:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) BOOL allowShowingFailedToLoadError;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

