//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGProfilePictureHelperDelegate.h"
#import "IGRegistrationProfilePicHeaderViewDelegate.h"
#import "IGSuggestedUsernamesViewControllerDelegate.h"
#import "IGTextFieldDelegate.h"
#import "IGUsernameViewControllerProtocol.h"

@class IGButton, IGRegistrationProfilePicHeaderView, IGRequest, IGTextField, NSArray, NSDictionary, NSString, NSTimer, UIBarButtonItem, UIColor, UITextField, UIView;

@interface IGUsernameViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGRegistrationProfilePicHeaderViewDelegate, IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGSuggestedUsernamesViewControllerDelegate, IGUsernameViewControllerProtocol>
{
    IGTextField *_usernameField;
    IGTextField *_passwordField;
    IGTextField *_emailField;
    IGButton *_suggestUsernamesButton;
    IGRegistrationProfilePicHeaderView *_profileHeaderView;
    UIBarButtonItem *_nextButton;
    NSArray *_textFields;
    UIView *_registrationNotesView;
    BOOL _isEmailConfirmed;
    BOOL _downloadingProfilePicture;
    BOOL _connectingWithFacebook;
    BOOL _connectedWithFacebook;
    BOOL _submitting;
    BOOL _shouldAutofillUsernameWithEmail;
    BOOL _proactivelyCheckUsername;
    NSTimer *_usernameCheckTimer;
    UITextField *_currentField;
    UIColor *_defaultTextFieldTextColor;
    NSTimer *_endEmailInputDetectionTimer;
    NSString *_userDisplayName;
    BOOL _showsSuggestUsernames;
    unsigned int _mode;
    NSDictionary *_facebookUserInfo;
    id <IGUsernameViewControllerDelegate> _delegate;
    NSString *_email;
    IGRequest *_accountCreationRequest;
    NSArray *_currentUsernameSuggestions;
}

@property(copy, nonatomic) NSArray *currentUsernameSuggestions; // @synthesize currentUsernameSuggestions=_currentUsernameSuggestions;
@property(nonatomic) BOOL showsSuggestUsernames; // @synthesize showsSuggestUsernames=_showsSuggestUsernames;
@property(nonatomic) __weak IGRequest *accountCreationRequest; // @synthesize accountCreationRequest=_accountCreationRequest;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) __weak id <IGUsernameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSDictionary *facebookUserInfo; // @synthesize facebookUserInfo=_facebookUserInfo;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)profileCelldidTapNotMe:(id)arg1;
- (void)switchToEmailFlowClearFields:(BOOL)arg1;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)logoutAndUnlinkFacebook;
- (void)submit;
- (void)validateAndSubmit;
- (BOOL)validateField:(id)arg1 withAlert:(BOOL)arg2;
- (id)dictionaryRepresentation;
- (void)profilePictureHelperRemovePictureButtonTapped:(id)arg1;
- (void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2;
- (void)profilePictureHelperWillStartDownloadingProfilePicture:(id)arg1;
- (BOOL)profilePictureHelperShouldShowRemovePicture:(id)arg1;
- (void)onSuggestUsernames;
- (void)checkUsername;
- (void)startOrRestartUsernameCheckTimer;
- (void)autoFillUsernameWithEmailUsername;
- (void)suggestedUsernamesViewControllerDidCancel:(id)arg1;
- (void)suggestedUsernamesViewController:(id)arg1 didPickUsername:(id)arg2 index:(unsigned int)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setCurrentField:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)pasteFacebookUserInfo;
- (void)getFacebookUserInfo;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configureRequiredCell:(id)arg1 forRow:(int)arg2;
- (id)makeSuggestionButtonCellWithTextField:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)registrationNotesView;
- (void)onAppBecameActive;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

