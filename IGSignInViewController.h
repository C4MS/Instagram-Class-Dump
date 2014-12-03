//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGSignInFormViewDelegate.h"

@class IGSignInFormView, NSString, UIBarButtonItem, UIScrollView;

@interface IGSignInViewController : IGViewController <IGSignInFormViewDelegate>
{
    BOOL _didAppearOnce;
    UIBarButtonItem *_nextButtonItem;
    UIScrollView *_scrollView;
    IGSignInFormView *_signInFormView;
}

@property(retain, nonatomic) IGSignInFormView *signInFormView; // @synthesize signInFormView=_signInFormView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIBarButtonItem *nextButtonItem; // @synthesize nextButtonItem=_nextButtonItem;
- (void).cxx_destruct;
- (void)signInFormView:(id)arg1 didFailWithServerError:(id)arg2;
- (void)signInFormViewDidSignIn;
- (void)signInFormViewDidFailSignIn;
- (void)signInFormViewDidStartSignIn;
- (void)signInFormViewDidReturnFromPasswordField:(id)arg1;
- (void)signInFormViewDidDismissForHelpWithUsername:(id)arg1;
- (void)doSignInFromReg:(BOOL)arg1;
- (void)doSignIn;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

