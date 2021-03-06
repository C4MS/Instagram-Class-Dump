//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "IGCommentActionViewDelegate.h"
#import "IGCommentContentViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGCommentActionView, IGCommentContentView, IGCommentModel, NSString, UIView;

@interface IGCommentCell : UITableViewCell <UIGestureRecognizerDelegate, IGCommentActionViewDelegate, IGCommentContentViewDelegate>
{
    IGCommentActionView *_actionsView;
    float _beginningX;
    BOOL _showActions;
    int _maxActionBarWidth;
    UIView *_separatorView;
    IGCommentModel *_comment;
    id <IGCommentCellDelegate> _delegate;
    IGCommentContentView *_commentView;
}

@property(retain, nonatomic) IGCommentContentView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) __weak id <IGCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGCommentModel *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)commentActionDeleteButtonTapped;
- (void)commentActionReplyButtonTapped;
- (void)locationTapped:(id)arg1;
- (void)replyToUser:(id)arg1;
- (void)reply;
- (void)commentUserTapped:(id)arg1;
@property(readonly, nonatomic) BOOL isShowingEditActions;
- (void)showActions:(BOOL)arg1 duration:(float)arg2;
- (void)showActions:(BOOL)arg1 velocity:(float)arg2;
- (void)showActions:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationController:(id)arg1;
- (void)cellPanned:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

