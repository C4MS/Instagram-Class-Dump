//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGSimpleTableViewCell.h"

#import "IGActionSheetDelegate.h"

@class IGButton, IGFeedItem, IGTimelineViewManager, NSString;

@interface IGFeedItemActionCell : IGSimpleTableViewCell <IGActionSheetDelegate>
{
    BOOL _sponsoredPostAllowed;
    IGFeedItem *_feedItem;
    IGButton *_likeButton;
    IGButton *_commentButton;
    IGButton *_moreButton;
    IGTimelineViewManager *_dataSource;
}

+ (float)height;
@property(nonatomic) BOOL sponsoredPostAllowed; // @synthesize sponsoredPostAllowed=_sponsoredPostAllowed;
@property(nonatomic) __weak IGTimelineViewManager *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) IGButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) IGButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) IGButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)accessibleElements;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)onMoreButtonPressed:(id)arg1;
- (void)onCommentButtonPressed:(id)arg1;
- (void)onLikeButtonPressed:(id)arg1;
- (void)showFlagConfirmation;
- (void)pushComments;
- (void)updateLikeButton;
- (id)navigationController;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

