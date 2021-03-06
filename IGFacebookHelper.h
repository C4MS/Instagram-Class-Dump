//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGServiceHelperProtocol.h"

@class NSString;

@interface IGFacebookHelper : NSObject <IGServiceHelperProtocol>
{
    BOOL _isAskingForAdditionalPermisons;
    BOOL _isRestoringSession;
    BOOL _isMigratingSession;
}

+ (id)sharedIGFacebookHelper;
- (void)hideHUD;
- (void)showHUDWithText:(id)arg1;
- (void)shareFeedItem:(id)arg1 fromViewController:(id)arg2;
- (BOOL)canShare;
- (void)fetchUserInfoWithFetchStrategy:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)currentUserInfo;
- (void)setPageName:(id)arg1;
- (id)pageName;
- (void)setPageAccessToken:(id)arg1;
- (id)pageAccessToken;
- (BOOL)hasAuthorizedManagePages;
- (BOOL)hasAuthorizedWallPost;
- (id)viewControllerForAdvancedOptions;
- (void)setIsAskingForAdditionalPermissions:(BOOL)arg1;
- (BOOL)takeIsAskingForAdditionalPermissions;
- (BOOL)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (BOOL)requiresLocationCoordinate;
- (BOOL)supportsMediaType:(int)arg1;
- (BOOL)isAvailableInCurrentLocale;
- (BOOL)isConfigurable;
- (void)fbDidNotLogin;
- (void)logoutAndUnlink;
- (void)logout;
- (id)sharingInfo;
- (BOOL)hasAdvancedOptions;
- (BOOL)isConfigured;
- (void)notifyAuthCompleted;
- (void)fbDidLogout;
- (void)fbSessionInvalidated;
- (void)fbDidExtendToken:(id)arg1 expiresAt:(id)arg2;
- (void)fbDidLogin;
- (void)sendCredentialsToServer;
- (void)onLoginSuccessful;
- (void)restoreSession;
- (void)migrateSession:(id)arg1 toUserPk:(id)arg2;
- (id)loadSessionWithUserPk:(id)arg1;
- (void)loginWithPermissions:(id)arg1;
- (void)loginWithStandardPermissions;
- (void)loginWithBasicPermissions;
- (void)sessionStateChanged:(id)arg1 state:(int)arg2 error:(id)arg3;
- (id)urlSchemeSuffix;
- (id)shortServiceName;
- (id)serviceName;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

