//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAutocompleteControllerDelegate.h"
#import "IGCommentThreadTableSourceDelegate.h"
#import "IGGrowingTextViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class IGAutocompleteController, IGBulkMediaRequestManager, IGButton, IGCommentModel, IGCommentThreadTableSource, IGFeedItem, IGGrowingTextView, IGPlainTableView, NSString, UIView;

@interface IGCommentThreadViewController : IGViewController <UIGestureRecognizerDelegate, IGCommentThreadTableSourceDelegate, IGAutocompleteControllerDelegate, IGGrowingTextViewDelegate, UITextFieldDelegate>
{
    IGButton *_sendButton;
    UIView *_textViewContainer;
    BOOL _keyboardIsAnimating;
    BOOL _appearing;
    BOOL _pushPerformed;
    UIView *_tableViewContainer;
    BOOL _shouldPanToBottom;
    float _bottomCellOffsetBeforeReload;
    IGCommentModel *_bottomCommentBeforeReload;
    float _contentOffsetYBeforeReload;
    IGCommentThreadTableSource *_dataSource;
    IGAutocompleteController *_autocompleteController;
    UIView *_keyboard;
    UIView *_keyboardAccessoryView;
    int _originalTextViewY;
    int _originalLocation;
    IGBulkMediaRequestManager *_requestManager;
    BOOL _navBarWasHidden;
    BOOL _keyboardShowing;
    IGFeedItem *_feedItem;
    IGGrowingTextView *_growingTextView;
    IGPlainTableView *_tableView;
}

@property(readonly, nonatomic) BOOL keyboardShowing; // @synthesize keyboardShowing=_keyboardShowing;
@property(nonatomic) BOOL navBarWasHidden; // @synthesize navBarWasHidden=_navBarWasHidden;
@property(retain, nonatomic) IGPlainTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) IGGrowingTextView *growingTextView; // @synthesize growingTextView=_growingTextView;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)updateScrollPositionUsingSavedScrollPosition;
- (void)saveScrollPosition;
- (void)commentThreadDataSource:(id)arg1 didAddNewCommentAtIndexPath:(id)arg2;
- (void)commentThreadDataSourceDidFailToDeleteComment:(id)arg1;
- (void)commentThreadDataSourceDeletedComment:(id)arg1 didReportAsSpam:(BOOL)arg2;
- (void)commentThreadDataSource:(id)arg1 didTapReplyToUser:(id)arg2 inCommentCell:(id)arg3;
- (void)commentThreadDataSourceDidFailLoading:(id)arg1;
- (void)commentThreadDataSourceDidFinishLoading:(id)arg1;
- (void)commentThreadDataSourceDidStartLoading:(id)arg1 isLoadingMore:(BOOL)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (BOOL)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)postComment;
- (BOOL)growingTextViewShouldBeginEditing:(id)arg1;
- (void)animateKeyboardReturnToOriginalPositionWithDuration:(float)arg1;
- (void)animateKeyboardOffscreenWithDuration:(float)arg1;
- (void)finishKeyboardAnimationWithGestureRecognizer:(id)arg1;
- (void)moveKeyboardWithGestureRecognizer:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)scrollToBottomAndAnimate:(BOOL)arg1;
- (BOOL)tableViewIsAtBottom;
- (void)reloadData;
- (float)textViewHeight;
- (BOOL)disableNavigationGesture;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)textView;
- (id)textViewContainer;
- (id)sendButton;
- (id)init;
- (void)replyToUsername:(id)arg1;
- (void)prefillWithText:(id)arg1;
- (BOOL)prefersTabBarHidden;
- (id)initWithKeyboardShowing:(BOOL)arg1;
- (void)dealloc;
- (void)commentThreadDataSourceTableDidEndDragging:(id)arg1;
- (void)commentThreadDataSourceTableWillEndDragging:(id)arg1 withVelocity:(float)arg2;
- (void)commentThreadDataSourceTableDidDrag:(id)arg1;
- (void)commentThreadDataSourceTableWillDrag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

