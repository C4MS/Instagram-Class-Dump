//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGNavigationControllerDelegate.h"
#import "IGToastViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGNavigationController, IGNewsViewController, IGTabBarButton, IGToastData, IGToastViewPopup, NSArray, NSString, UIView;

@interface IGTabBarController : UIViewController <IGNavigationControllerDelegate, IGToastViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_tabBar;
    IGTabBarButton *_homeButton;
    IGTabBarButton *_popularButton;
    IGTabBarButton *_cameraButton;
    IGTabBarButton *_newsButton;
    IGTabBarButton *_profileButton;
    BOOL _isPerformingTabBarAction;
    NSArray *_viewControllers;
    int _selectedTabBarItem;
    IGToastViewPopup *_toastView;
    int _cameraButtonMode;
    IGToastData *_suppressedToastData;
}

@property(retain, nonatomic) IGToastData *suppressedToastData; // @synthesize suppressedToastData=_suppressedToastData;
@property(nonatomic) int cameraButtonMode; // @synthesize cameraButtonMode=_cameraButtonMode;
@property(retain, nonatomic) IGToastViewPopup *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) BOOL isPerformingTabBarAction; // @synthesize isPerformingTabBarAction=_isPerformingTabBarAction;
@property(readonly, nonatomic) int selectedTabBarItem; // @synthesize selectedTabBarItem=_selectedTabBarItem;
- (void).cxx_destruct;
- (id)navigationControllerForTabBarItem:(int)arg1;
- (void)prefetchAndFocusInboxInNewsTab;
- (void)openURLInNewsTab:(id)arg1;
- (void)toastCountsReceived:(id)arg1;
@property(readonly, nonatomic) BOOL shouldDelayToastPopup;
- (void)moveDownTabBarToOffset:(float)arg1;
- (void)displaySuppressedToastWhenApporiate;
- (void)inboxCountDidUpdate:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotate;
- (void)toastViewTapped:(id)arg1;
- (void)hideToastAnimated:(BOOL)arg1;
- (void)displayToastWithToastData:(id)arg1;
- (void)layoutToast;
@property(readonly, nonatomic) UIViewController *selectedViewController;
@property(readonly, nonatomic) UIView *tabBar;
@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(readonly, nonatomic) BOOL isTabBarVisible;
- (BOOL)itemNeedsAttention:(int)arg1;
- (void)setNeedsAttention:(BOOL)arg1 forItem:(int)arg2;
- (void)setNeedsAttentionItem:(int)arg1;
- (void)setSelectedTabBarItem:(int)arg1 animated:(BOOL)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)logNavigationEventForClickPoint:(id)arg1;
- (void)profileButtonPressed;
- (void)newsButtonPressed;
- (void)cameraButtonLongPressed:(id)arg1;
- (void)directShareCameraButtonLongPressed:(id)arg1;
- (void)directShareCameraButtonPressed;
- (void)cameraButtonPressed;
- (void)popularButtonPressed;
- (void)homeButtonPressed;
@property(readonly, nonatomic) IGNewsViewController *newsViewController;
@property(readonly, nonatomic) IGNavigationController *newsNavigationController;
- (void)initializeViewControllersWithMainFeedSource:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

