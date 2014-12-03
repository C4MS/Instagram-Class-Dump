//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGActionSheetDelegate.h"
#import "IGCameraNavigationControllerDelegate.h"
#import "IGTwitterProfilePictureDelegate.h"
#import "UIImagePickerControllerDelegate.h"

@class NSString, UIViewController;

@interface IGProfilePictureHelper : NSObject <IGCameraNavigationControllerDelegate, IGActionSheetDelegate, IGTwitterProfilePictureDelegate, UIImagePickerControllerDelegate>
{
    BOOL _showLocalOptionsOnly;
    BOOL _showTwitter;
    id <IGProfilePictureHelperDelegate> _delegate;
    UIViewController *_viewController;
    NSString *_twitterTokenString;
    NSString *_twitterUsername;
}

@property(nonatomic) BOOL showTwitter; // @synthesize showTwitter=_showTwitter;
@property(copy, nonatomic) NSString *twitterUsername; // @synthesize twitterUsername=_twitterUsername;
@property(copy, nonatomic) NSString *twitterTokenString; // @synthesize twitterTokenString=_twitterTokenString;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <IGProfilePictureHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)showActionSheet;
- (void)delegateDidFailDownloadingProfilePicture;
- (void)delegateDidFinishDownloadingProfilePicture:(id)arg1;
- (void)delegateWillStartDownloadingProfilePicture;
- (void)delegateRemovePictureButtonTapped;
- (void)delegateWillPerformAction:(int)arg1;
- (BOOL)delegateShouldShowRemoveCurrentPicture;
- (void)imageTicketDidFail;
- (void)imageTicketDidFinishWithData:(id)arg1;
- (void)twitterProfilePictureFailed;
- (void)twitterLoggedOut:(id)arg1;
- (void)removeTwitterObserver;
- (void)loadTwitterProfilePicture;
- (void)onTwitterLoginCompleted:(id)arg1;
- (void)twitterLoginCancelled;
- (void)presentTwitterLogin;
- (void)removeFacebookObserver;
- (void)facebookAuthDidFinish;
- (void)presentFacebookLogin;
- (void)loadFacebookProfilePicture;
- (void)cameraControllerDidFinishWithSelfie:(id)arg1;
- (void)cameraControllerDidCancel;
- (void)dismissCamera;
- (void)presentPhotoLibrary;
- (void)presentCamera;
- (id)initWithViewController:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

