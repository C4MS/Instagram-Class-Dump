//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class IGFavoriteButton, IGFollowButton, IGKVOHandle, IGProfilePictureImageView, IGUser, UIButton, UIView;

@interface IGUserCell : IGPlainTableViewCell
{
    IGUser *_user;
    int _userCellAccessoryType;
    IGProfilePictureImageView *_profilePicture;
    IGFollowButton *_followButton;
    CDUnknownBlockType _followActionBlock;
    int _layoutOption;
    id <IGUserCellDelegate> _delegate;
    IGFavoriteButton *_favoriteButton;
    UIButton *_dismissButton;
    IGKVOHandle *_followButtonWidthListener;
    IGKVOHandle *_favoriteButtonWidthListener;
    UIView *_topLineSeperator;
}

+ (struct UIEdgeInsets)defaultCellSeparatorInsets;
+ (struct UIEdgeInsets)defaultCellEdgeInsets;
+ (float)defaultCellHeight;
@property(retain, nonatomic) UIView *topLineSeperator; // @synthesize topLineSeperator=_topLineSeperator;
@property(retain, nonatomic) IGKVOHandle *favoriteButtonWidthListener; // @synthesize favoriteButtonWidthListener=_favoriteButtonWidthListener;
@property(retain, nonatomic) IGKVOHandle *followButtonWidthListener; // @synthesize followButtonWidthListener=_followButtonWidthListener;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) IGFavoriteButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(nonatomic) __weak id <IGUserCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int layoutOption; // @synthesize layoutOption=_layoutOption;
@property(copy, nonatomic) CDUnknownBlockType followActionBlock; // @synthesize followActionBlock=_followActionBlock;
@property(retain, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) IGProfilePictureImageView *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(nonatomic) int userCellAccessoryType; // @synthesize userCellAccessoryType=_userCellAccessoryType;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)onFollowButtonTapped:(id)arg1;
- (void)onDismissButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setShowDismissButton:(BOOL)arg1;
- (void)setUpFavoriteButton;
- (void)setUpFollowButton;
- (void)setShowTopSeperator:(BOOL)arg1 withEdgeInsets:(struct UIEdgeInsets)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

