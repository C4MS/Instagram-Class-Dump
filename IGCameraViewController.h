//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBaseCameraViewController.h"

#import "IGAudioSampleBufferDelegate.h"
#import "IGCameraShutterBarDelegate.h"
#import "IGCaptureManagerDelegate.h"
#import "IGVideoSampleBufferDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGCameraFocusIndicator, IGCameraGuideView, IGCameraShutterBar, IGCaptureManager, IGDeviceAngleSampler, IGDirectedNUXView, IGMediaMetadata, IGSampleBuffer, IGStabilizationSampler, IGSurfaceView, IGTapButton, IGVideoInfo, IGVideoProgressView, IGVideoRecorder, NSObject<OS_dispatch_queue>, NSString, UIBarButtonItem, UIView;

@interface IGCameraViewController : IGBaseCameraViewController <IGCaptureManagerDelegate, IGVideoSampleBufferDelegate, IGAudioSampleBufferDelegate, IGCameraShutterBarDelegate, UIGestureRecognizerDelegate>
{
    IGSampleBuffer *_imageBufferData;
    BOOL _backgrounded;
    BOOL _shouldCaptureFrames;
    BOOL _isChangingModes;
    int _cameraType;
    IGCameraShutterBar *_shutterBar;
    IGVideoProgressView *_videoProgressView;
    IGMediaMetadata *_mediaMetadata;
    IGVideoInfo *_videoInfo;
    int _cameraMode;
    id <IGCameraViewControllerDelegate> _delegate;
    IGCaptureManager *_captureManager;
    IGVideoRecorder *_videoRecorder;
    NSObject<OS_dispatch_queue> *_imageBufferQueue;
    UIView *_captureView;
    UIView *_gestureView;
    UIView *_disabledOverlayView;
    IGCameraGuideView *_guideView;
    IGCameraFocusIndicator *_focusIndicator;
    IGTapButton *_gridButton;
    IGTapButton *_flashButton;
    IGTapButton *_switchCamerasButton;
    UIBarButtonItem *_videoNextButtonItem;
    IGSurfaceView *_previewView;
    IGStabilizationSampler *_stabilizer;
    IGDirectedNUXView *_NUXView;
    IGDeviceAngleSampler *_deviceAngleSampler;
    int _photoDeviceOrientation;
    float _photoDeviceAngle;
}

@property(nonatomic) float photoDeviceAngle; // @synthesize photoDeviceAngle=_photoDeviceAngle;
@property(nonatomic) int photoDeviceOrientation; // @synthesize photoDeviceOrientation=_photoDeviceOrientation;
@property(retain, nonatomic) IGDeviceAngleSampler *deviceAngleSampler; // @synthesize deviceAngleSampler=_deviceAngleSampler;
@property(retain, nonatomic) IGDirectedNUXView *NUXView; // @synthesize NUXView=_NUXView;
@property(retain, nonatomic) IGStabilizationSampler *stabilizer; // @synthesize stabilizer=_stabilizer;
@property(retain, nonatomic) IGSurfaceView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIBarButtonItem *videoNextButtonItem; // @synthesize videoNextButtonItem=_videoNextButtonItem;
@property(retain, nonatomic) IGTapButton *switchCamerasButton; // @synthesize switchCamerasButton=_switchCamerasButton;
@property(retain, nonatomic) IGTapButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) IGTapButton *gridButton; // @synthesize gridButton=_gridButton;
@property(retain, nonatomic) IGCameraFocusIndicator *focusIndicator; // @synthesize focusIndicator=_focusIndicator;
@property(retain, nonatomic) IGCameraGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIView *disabledOverlayView; // @synthesize disabledOverlayView=_disabledOverlayView;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) UIView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageBufferQueue; // @synthesize imageBufferQueue=_imageBufferQueue;
@property(retain, nonatomic) IGVideoRecorder *videoRecorder; // @synthesize videoRecorder=_videoRecorder;
@property(retain, nonatomic) IGCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(nonatomic) __weak id <IGCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int cameraMode; // @synthesize cameraMode=_cameraMode;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(retain, nonatomic) IGVideoProgressView *videoProgressView; // @synthesize videoProgressView=_videoProgressView;
@property(retain, nonatomic) IGCameraShutterBar *shutterBar; // @synthesize shutterBar=_shutterBar;
@property(nonatomic) int cameraType; // @synthesize cameraType=_cameraType;
- (void).cxx_destruct;
- (void)updateUIToDeviceOrientationAnimated:(BOOL)arg1;
- (void)onOrientationChange;
- (void)hideNUX;
- (void)showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)showVideoNextNUX;
- (void)showVideoTooShortNUX;
- (void)showHoldToRecordNUX;
- (void)captureSessionWillTakePhoto;
- (void)captureDeviceDidSatisfyFocusRequest;
- (void)captureSessionWasInterrupted;
- (void)captureSessionDidCaptureAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureSessionDidCaptureVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureSessionDidDropAudioBuffer;
- (void)captureSessionDidDropVideoBuffer;
- (BOOL)cameraIsReady;
- (BOOL)canImportFromLibrary;
- (BOOL)canCaptureAnotherClip;
- (void)continueWithVideoClips;
- (void)updateVideoSize;
- (void)showOrHideDisabledOverlayView;
- (void)updateVideoState;
- (void)onClipRemoved;
- (void)onClipAdded:(id)arg1;
- (void)stopRecording;
- (void)stopRecordingOnCaptureQueue:(BOOL)arg1;
- (void)startRecording;
- (float)radianOffsetForCurrentOrientation;
- (void)takePhoto;
- (void)updateStabilizationSampler;
- (BOOL)shouldSaveToLibrary;
- (void)cameraShutterBarDidEndRecording;
- (void)cameraShutterBarDidBeginRecording;
- (void)cameraShutterBarDidTakePicture;
- (void)cameraShutterBarDidAskForVideoLibrary;
- (void)cameraShutterBarDidAskForPhotoLibrary;
- (void)cameraShutterBarVideoBackButtonLongPressed;
- (void)cameraShutterBarVideoBackButtonTapped;
- (void)cameraShutterBarDidFinishMoving;
- (void)cameraShutterBarDidChangeCameraMode:(int)arg1;
- (void)cameraShutterBarDidMoveToPosition:(float)arg1;
- (void)cameraShutterBarDidStartMoving;
- (void)onCancelButtonTapped;
- (void)onVideoNextButtonTapped;
- (void)onSwitchCamerasButtonTapped;
- (void)onFlashButtonTapped;
- (void)onGridButtonTapped;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)panned:(id)arg1;
- (void)longTapped:(id)arg1;
- (void)tapped:(id)arg1;
- (struct CGPoint)scaledPointAtTapLocation:(struct CGPoint)arg1;
- (id)toolbarItems;
- (void)placeToolbarItemsInNavigationItem;
- (BOOL)shouldShowSwitchCamerasButton;
- (BOOL)shouldShowFlashButton;
- (BOOL)shouldShowGridButton;
- (BOOL)buttonsOnTop;
- (void)setFlashMode:(int)arg1;
- (void)onAppForegrounded;
- (void)onAppWillBackground;
- (void)moveShutterBarOffscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showPermissionsNUXWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isAudioAndVideoAuthorized;
- (void)enterCameraPermissionDeniedState;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithCameraType:(int)arg1 captureManager:(id)arg2 delegate:(id)arg3 mediaMetadata:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

