//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedStatusViewDynamicHeightProtocol.h"
#import "IGSearchBarDelegate.h"
#import "IGUserListNetworkDataSourceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGFeedStatusView, IGPlainTableView, IGUserListNetworkDataSource, NSMutableIndexSet, NSString;

@interface IGUserListViewController : IGViewController <IGSearchBarDelegate, UITableViewDataSource, IGUserListNetworkDataSourceDelegate, UITableViewDelegate, IGFeedStatusViewDynamicHeightProtocol>
{
    IGUserListNetworkDataSource *_networkDataSource;
    IGPlainTableView *_tableView;
    int _userCellAccessory;
    int _userListType;
    NSString *_listContextPK;
    NSMutableIndexSet *_expandedIndices;
    IGFeedStatusView *_feedStatusView;
}

@property(retain, nonatomic) IGFeedStatusView *feedStatusView; // @synthesize feedStatusView=_feedStatusView;
@property(retain, nonatomic) NSMutableIndexSet *expandedIndices; // @synthesize expandedIndices=_expandedIndices;
@property(copy, nonatomic) NSString *listContextPK; // @synthesize listContextPK=_listContextPK;
@property(nonatomic) int userListType; // @synthesize userListType=_userListType;
@property(nonatomic) int userCellAccessory; // @synthesize userCellAccessory=_userCellAccessory;
@property(retain, nonatomic) IGPlainTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IGUserListNetworkDataSource *networkDataSource; // @synthesize networkDataSource=_networkDataSource;
- (void).cxx_destruct;
- (void)feedStatusView:(id)arg1 wantsChangeToHeight:(float)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)presentSimilarAccountsViewForCellAtIndexPath:(id)arg1 expand:(BOOL)arg2;
- (BOOL)isShowingSimilarAccountsViewForCellAtIndexPath:(id)arg1;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)loadMoreUsers;
- (id)indexPathForUser:(id)arg1;
- (void)reloadData;
- (void)followAllFriends;
- (void)onFollowAllButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)userCellForIndexPath:(id)arg1;
- (id)statusCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)removeUserFromList:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

