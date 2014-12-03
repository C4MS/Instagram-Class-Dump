//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAutocompleteControllerDelegate.h"
#import "IGCameraViewControllerProtocol.h"
#import "IGCaptionCellDelegate.h"
#import "IGShareManagerDelegate.h"

@class IGAutocompleteController, IGCameraNavigationController, IGCaptionCell, IGKVOHandle, IGMediaMetadata, IGShareButton, IGShareToggle, IGVideoComposition, NSString, UIView, UIViewController<IGShareManager>;

@interface IGShareViewController : IGViewController <IGCaptionCellDelegate, IGAutocompleteControllerDelegate, IGShareManagerDelegate, IGCameraViewControllerProtocol>
{
    IGKVOHandle *_readyToShareObserver;
    IGKVOHandle *_scrollViewObserver;
    BOOL _isInMode;
    BOOL _overlayIsOpaque;
    BOOL _overlayHasDropShadow;
    BOOL _renderInProgress;
    id <IGShareViewControllerDelegate> _delegate;
    IGVideoComposition *_video;
    IGMediaMetadata *_mediaMetadata;
    UIViewController<IGShareManager> *_shareManager;
    int _shareMode;
    IGShareToggle *_toggleView;
    IGCaptionCell *_captionCell;
    IGAutocompleteController *_autocompleteController;
    UIView *_headerView;
    IGShareButton *_shareButton;
    UIView *_overlayView;
    CDUnknownBlockType _modeCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType modeCompletionHandler; // @synthesize modeCompletionHandler=_modeCompletionHandler;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) IGShareButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IGAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(retain, nonatomic) IGCaptionCell *captionCell; // @synthesize captionCell=_captionCell;
@property(retain, nonatomic) IGShareToggle *toggleView; // @synthesize toggleView=_toggleView;
@property(nonatomic) int shareMode; // @synthesize shareMode=_shareMode;
@property(retain, nonatomic) UIViewController<IGShareManager> *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(nonatomic) BOOL renderInProgress; // @synthesize renderInProgress=_renderInProgress;
@property(retain, nonatomic) IGVideoComposition *video; // @synthesize video=_video;
@property(nonatomic) __weak id <IGShareViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL overlayHasDropShadow; // @synthesize overlayHasDropShadow=_overlayHasDropShadow;
@property(nonatomic) BOOL overlayIsOpaque; // @synthesize overlayIsOpaque=_overlayIsOpaque;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGCameraNavigationController *navController;
- (void)stopProgressHUDIfSlowDevice;
- (void)startProgressHUDIfSlowDevice;
- (void)share;
- (void)autocompleteController:(id)arg1 willHideTableView:(id)arg2;
- (void)autocompleteController:(id)arg1 willShowTableView:(id)arg2;
- (void)autocompleteControllerDidAutocomplete:(id)arg1;
- (void)onDoneEditingButtonTapped;
- (void)onOverlayViewTapped:(id)arg1;
- (void)updateNavigationItemWithModeTitle:(id)arg1 animated:(BOOL)arg2;
- (void)exitMode;
- (void)enterModeWithTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareManagerWantsModeExit;
- (void)shareManagerWantsModeWithTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exitCaptionMode;
- (void)enterCaptionMode;
- (void)captionTextViewWantsMediaDisplay;
- (void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2;
- (void)captionTextViewDidChange:(id)arg1;
- (BOOL)captionTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)captionTextViewWillBeginEditing:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)onShareButtonTapped;
- (void)onTitleTapped;
- (void)onBackButtonTapped;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateCaptionOffset;
- (void)updateShareButton;
- (void)bringToggleViewAboveNavbar:(BOOL)arg1;
- (BOOL)prefersToolbarHidden;
- (BOOL)prefersNavigationBarHidden;
- (BOOL)prefersStatusBarHidden;
- (id)ig_keyViewControllers;
- (id)initWithMediaMetadata:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

