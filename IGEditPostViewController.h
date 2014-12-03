//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGActionSheetDelegate.h"
#import "IGAutocompleteControllerDelegate.h"
#import "IGEditPostTextViewControllerDelegate.h"
#import "IGFeedItemHeaderDelegate.h"
#import "IGLocationPickerDelegate.h"
#import "IGUserInTaggingViewControllerDelegate.h"

@class IGAutocompleteController, IGEditPostTextViewController, IGEditedPost, IGFeedItem, IGFeedItemHeader, IGNavigationBar, IGTagPeopleView, NSString, UIBarButtonItem, UIImageView, UIScrollView, UITapGestureRecognizer, UIView, UIView<IGCellEmbededMediaItemView>;

@interface IGEditPostViewController : IGViewController <IGEditPostTextViewControllerDelegate, IGFeedItemHeaderDelegate, IGAutocompleteControllerDelegate, IGActionSheetDelegate, IGLocationPickerDelegate, IGUserInTaggingViewControllerDelegate>
{
    BOOL _navigationBarWasHidden;
    BOOL _autocompleteShown;
    BOOL _appearing;
    BOOL _disappearing;
    BOOL _committingText;
    UIView *_backgroundView;
    UIView *_backgroundTabBarView;
    IGFeedItem *_feedItem;
    id <IGEditPostViewControllerDelegate> _delegate;
    IGAutocompleteController *_autocompleteController;
    UIView *_autocompleteDivider;
    UIView<IGCellEmbededMediaItemView> *_mediaView;
    UITapGestureRecognizer *_mediaViewTapRecognizer;
    IGFeedItemHeader *_headerView;
    IGEditPostTextViewController *_textViewController;
    IGTagPeopleView *_tagPeopleView;
    UIScrollView *_scrollView;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    UIImageView *_bubbleIcon;
    IGEditedPost *_editedPost;
    UIView *_aboveHeaderView;
    UIView *_blueStatusBar;
    int _keyboardAnimationCurve;
    double _keyboardAnimationDuration;
    struct CGRect _headerFrame;
    struct CGRect _mediaFrame;
    struct CGRect _backgroundViewFrame;
    struct CGRect _keyboardFrame;
}

@property(nonatomic, getter=isCommittingText) BOOL committingText; // @synthesize committingText=_committingText;
@property(nonatomic) double keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
@property(nonatomic) int keyboardAnimationCurve; // @synthesize keyboardAnimationCurve=_keyboardAnimationCurve;
@property(nonatomic, getter=isDisappearing) BOOL disappearing; // @synthesize disappearing=_disappearing;
@property(nonatomic, getter=isAppearing) BOOL appearing; // @synthesize appearing=_appearing;
@property(retain, nonatomic) UIView *blueStatusBar; // @synthesize blueStatusBar=_blueStatusBar;
@property(retain, nonatomic) UIView *aboveHeaderView; // @synthesize aboveHeaderView=_aboveHeaderView;
@property(retain, nonatomic) IGEditedPost *editedPost; // @synthesize editedPost=_editedPost;
@property(retain, nonatomic) UIImageView *bubbleIcon; // @synthesize bubbleIcon=_bubbleIcon;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) BOOL autocompleteShown; // @synthesize autocompleteShown=_autocompleteShown;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) IGTagPeopleView *tagPeopleView; // @synthesize tagPeopleView=_tagPeopleView;
@property(retain, nonatomic) IGEditPostTextViewController *textViewController; // @synthesize textViewController=_textViewController;
@property(retain, nonatomic) IGFeedItemHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITapGestureRecognizer *mediaViewTapRecognizer; // @synthesize mediaViewTapRecognizer=_mediaViewTapRecognizer;
@property(retain, nonatomic) UIView<IGCellEmbededMediaItemView> *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UIView *autocompleteDivider; // @synthesize autocompleteDivider=_autocompleteDivider;
@property(retain, nonatomic) IGAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(nonatomic) __weak id <IGEditPostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(nonatomic) struct CGRect backgroundViewFrame; // @synthesize backgroundViewFrame=_backgroundViewFrame;
@property(nonatomic) struct CGRect mediaFrame; // @synthesize mediaFrame=_mediaFrame;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(retain, nonatomic) UIView *backgroundTabBarView; // @synthesize backgroundTabBarView=_backgroundTabBarView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL navigationBarWasHidden; // @synthesize navigationBarWasHidden=_navigationBarWasHidden;
- (void).cxx_destruct;
- (void)adjustAutocompleteFrame;
- (void)autocompleteController:(id)arg1 willHideTableView:(id)arg2;
- (void)scrollToCaretAnimated:(BOOL)arg1;
- (void)autocompleteController:(id)arg1 willShowTableView:(id)arg2;
- (BOOL)textViewController:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewController:(id)arg1 textViewDidChangeSelection:(id)arg2;
- (void)textViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2;
- (void)dismissPresentedController:(id)arg1 finished:(BOOL)arg2;
- (void)userInTaggingViewController:(id)arg1 didFinish:(BOOL)arg2;
- (void)launchUserTaggingView;
- (void)tagPeopleTapped:(id)arg1;
- (int)tagCount;
- (void)locationPickerViewController:(id)arg1 didFinish:(BOOL)arg2 withLocation:(id)arg3;
- (void)launchLocationPicker;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)feedItemHeaderDidTapAddLocation:(id)arg1;
@property(readonly, nonatomic, getter=isVideo) BOOL video;
@property(readonly, nonatomic, getter=isPhoto) BOOL photo;
@property(readonly, nonatomic) float navBarHeight;
@property(readonly, nonatomic) IGNavigationBar *navigationBar;
- (float)contentOffsetYAtCaret;
- (float)contentOffsetYTouchingCaption;
- (struct CGSize)contentSizeWithCaptionHeight:(float)arg1;
- (struct UIEdgeInsets)contentInsets;
- (void)scrollViewTapped:(id)arg1;
- (void)mediaViewTapped:(id)arg1;
- (void)onCancelEditing;
- (void)onDoneEditing;
- (void)setAlphaOnNavBarItems:(float)arg1;
@property(readonly, nonatomic, getter=isKeyboardShowing) BOOL keyboardShowing;
- (void)keyboardWillHide:(id)arg1;
- (void)disappearWithCurve:(int)arg1 duration:(double)arg2;
- (void)dismiss;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
