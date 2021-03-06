//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGGridLayoutDataSource.h"
#import "IGGridLayoutDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGRecommendedUserInfo, IGUserCell, NSString, UITableView;

@interface IGRecommendedUserView : UIView <IGGridLayoutDataSource, IGGridLayoutDelegate, UITableViewDataSource, UITableViewDelegate>
{
    IGRecommendedUserInfo *_userInfo;
    unsigned int _pageIndex;
    IGUserCell *_header;
    UITableView *_imagesTable;
}

@property(retain, nonatomic) UITableView *imagesTable; // @synthesize imagesTable=_imagesTable;
@property(retain, nonatomic) IGUserCell *header; // @synthesize header=_header;
@property(nonatomic) unsigned int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) IGRecommendedUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)gridLayoutView:(id)arg1 viewLaidOut:(id)arg2 atIndex:(unsigned int)arg3;
- (struct CGSize)gridLayoutView:(id)arg1 sizeForViewAtIndex:(unsigned int)arg2;
- (int)highResIndexForGridAtIndex:(int)arg1;
- (id)gridLayoutView:(id)arg1 viewForCellAtIndex:(unsigned int)arg2;
- (struct CGSize)sizeForGridLayoutView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

