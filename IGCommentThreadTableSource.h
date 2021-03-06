//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGActionSheetDelegate.h"
#import "IGCommentCellDelegate.h"
#import "IGRealtimeOperationDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGPost, IGRealtimeManager, NSArray, NSIndexPath, NSString, UINavigationController, UITableView;

@interface IGCommentThreadTableSource : NSObject <IGCommentCellDelegate, UITableViewDataSource, UITableViewDelegate, IGActionSheetDelegate, IGRealtimeOperationDelegate>
{
    NSIndexPath *_tappedIndexPath;
    BOOL _isFlaggingComment;
    BOOL _isDeletingComment;
    BOOL _isLoading;
    IGPost *_post;
    id <IGCommentThreadTableSourceDelegate> _controller;
    UITableView *_tableView;
    UINavigationController *_navigationController;
    IGRealtimeManager *_realtimeManager;
}

@property(retain, nonatomic) IGRealtimeManager *realtimeManager; // @synthesize realtimeManager=_realtimeManager;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <IGCommentThreadTableSourceDelegate> controller; // @synthesize controller=_controller;
@property(retain, nonatomic) IGPost *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (id)pkForRealtimeOperation:(id)arg1;
- (void)handleRealtimeRefreshRequest;
- (void)handleRealtimeOperation:(id)arg1;
- (void)removeCommentInCell:(id)arg1 delete:(BOOL)arg2 reportWithReason:(int)arg3;
- (void)showFlaggingActionSheet;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)commentDeletionFinished:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)showActionSheetForCommentCell:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)commentCellUserTapped:(id)arg1;
- (void)commentCellDeleteButtonTapped:(id)arg1;
- (void)commentCell:(id)arg1 didLongTapOnUser:(id)arg2;
- (void)commentCellReplyButtonTapped:(id)arg1;
- (void)replyToUser:(id)arg1 inCommentCell:(id)arg2;
- (void)commentCellDidShowActions:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)inlineLoadMoreRowForTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)feedItemCommentsRequestFailed:(id)arg1;
- (void)onPostUpdated:(id)arg1;
- (id)indexPathForCommentModel:(id)arg1;
- (id)commentModelAtIndexPath:(id)arg1;
- (int)commentIndexAtIndexPath:(id)arg1;
- (BOOL)shouldShowLoadMoreCellAtIndexPath:(id)arg1;
- (int)loadMoreCommentsCellIndex;
@property(readonly, nonatomic) __weak NSArray *comments;
@property(readonly, nonatomic) BOOL isEditing;
- (void)unsubscribeFromRealtime;
- (void)reloadAndMaybeSubscribeRealtime;
- (void)loadCommentsWithLoadMore:(BOOL)arg1;
- (void)postCommentWithText:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

