//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class IGRegistrationNavigationController, UIWindow;

@interface IGRootViewController : UIViewController
{
    BOOL _isVisible;
    BOOL _isManagingChildViewControllerAppearance;
    IGRegistrationNavigationController *_registrationController;
    int _loginState;
    UIWindow *_popoverWindow;
    UIViewController *_popoverViewController;
}

@property(nonatomic) BOOL isManagingChildViewControllerAppearance; // @synthesize isManagingChildViewControllerAppearance=_isManagingChildViewControllerAppearance;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) UIViewController *popoverViewController; // @synthesize popoverViewController=_popoverViewController;
@property(retain, nonatomic) UIWindow *popoverWindow; // @synthesize popoverWindow=_popoverWindow;
@property(nonatomic) int loginState; // @synthesize loginState=_loginState;
@property(retain, nonatomic) IGRegistrationNavigationController *registrationController; // @synthesize registrationController=_registrationController;
- (void).cxx_destruct;
- (void)showLoginControllerAnimated:(BOOL)arg1;
- (void)showMainAppControllerWithMainFeedSource:(id)arg1 animated:(BOOL)arg2;
- (void)moveToAppLoginState:(int)arg1 mainFeedSource:(id)arg2 animated:(BOOL)arg3;
- (void)dismissPopoverController;
- (void)presentPopoverController:(id)arg1;
- (void)moveAppToLoggedOutStateAnimated:(BOOL)arg1;
- (void)moveAppToLoggedInStateWithMainFeedSource:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UIViewController *topMostViewController;
- (id)viewControllerStack;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
@property(readonly, nonatomic) UIViewController *visibleViewController;
- (int)preferredStatusBarStyle;
- (id)init;

@end

