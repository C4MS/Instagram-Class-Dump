//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class IGCameraLibraryButton, IGSimpleButton, NSString, UIButton, UIScrollView;

@interface IGCameraShutterBar : UIView <UIScrollViewDelegate>
{
    BOOL _shouldChangeModeAfterDeceleration;
    BOOL _isDirectShare;
    BOOL _videoRecordingEnabled;
    BOOL _cameraInteractionEnabled;
    UIButton *_videoCaptureButton;
    UIButton *_videoBackButton;
    id <IGCameraShutterBarDelegate> _delegate;
    int _cameraMode;
    UIScrollView *_scrollView;
    UIButton *_leftBlockerView;
    UIButton *_rightBlockerView;
    UIButton *_photoCaptureButton;
    IGCameraLibraryButton *_photoLibraryButton;
    IGCameraLibraryButton *_videoLibraryButton;
    IGSimpleButton *_modeHandle;
}

@property(retain, nonatomic) IGSimpleButton *modeHandle; // @synthesize modeHandle=_modeHandle;
@property(retain, nonatomic) IGCameraLibraryButton *videoLibraryButton; // @synthesize videoLibraryButton=_videoLibraryButton;
@property(retain, nonatomic) IGCameraLibraryButton *photoLibraryButton; // @synthesize photoLibraryButton=_photoLibraryButton;
@property(retain, nonatomic) UIButton *photoCaptureButton; // @synthesize photoCaptureButton=_photoCaptureButton;
@property(retain, nonatomic) UIButton *rightBlockerView; // @synthesize rightBlockerView=_rightBlockerView;
@property(retain, nonatomic) UIButton *leftBlockerView; // @synthesize leftBlockerView=_leftBlockerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) __weak id <IGCameraShutterBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *videoBackButton; // @synthesize videoBackButton=_videoBackButton;
@property(retain, nonatomic) UIButton *videoCaptureButton; // @synthesize videoCaptureButton=_videoCaptureButton;
@property(nonatomic) BOOL cameraInteractionEnabled; // @synthesize cameraInteractionEnabled=_cameraInteractionEnabled;
@property(nonatomic) BOOL videoRecordingEnabled; // @synthesize videoRecordingEnabled=_videoRecordingEnabled;
- (void).cxx_destruct;
- (void)onOrientationChange;
- (void)onVideoLibraryButtonTapped;
- (void)onVideoBackButtonLongPressed:(id)arg1;
- (void)onVideoBackButtonTapped;
- (void)onVideoCaptureButtonTouchCancelled;
- (void)onVideoCaptureButtonTouchedUpOutside;
- (void)onVideoCaptureButtonDraggedOutside;
- (void)onVideoCaptureButtonTouchedUpInside;
- (void)onVideoCaptureButtonTouchedDown;
- (void)onPhotoLibraryButtonTapped;
- (void)onPhotoCaptureButtonTapped;
- (void)updateModeFromScrollPosition;
- (void)scrollToCurrentMode;
- (void)updateModeIndicator;
- (void)onModeHandleTapped;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setVideoBackButtonSelected:(BOOL)arg1;
- (void)showVideoBackButton:(BOOL)arg1;
- (void)setCameraInteractionEnabled:(BOOL)arg1 scrollEnabled:(BOOL)arg2;
@property(nonatomic) BOOL libraryImportEnabled;
- (id)init;
- (id)initWithType:(int)arg1 isDirectShare:(BOOL)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
