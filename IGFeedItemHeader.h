//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "IGProfilePictureImageViewDelegate.h"

@class IGFollowButton, IGKVOHandle, IGLabel, IGProfilePictureImageView, IGStringStyle, NSObject<IGFeedItemHeaderDelegate>, NSObject<IGHeaderFeedItem>, NSString, UIButton, UIImageView, UILabel, UINavigationController;

@interface IGFeedItemHeader : UITableViewHeaderFooterView <IGProfilePictureImageViewDelegate>
{
    BOOL _opaqueBackground;
    BOOL _sponsoredPostAllowed;
    BOOL _showFollowButton;
    BOOL _editing;
    NSObject<IGHeaderFeedItem> *_feedItem;
    UINavigationController *_navigationController;
    NSObject<IGFeedItemHeaderDelegate> *_delegate;
    IGProfilePictureImageView *_profilePic;
    IGLabel *_usernameLabel;
    UIImageView *_placemarkImageView;
    IGLabel *_locationLabel;
    UIImageView *_labelIconView;
    UILabel *_timestamp;
    IGLabel *_sponsoredPostLabel;
    UIButton *_accessibilityButton;
    IGFollowButton *_followButton;
    IGKVOHandle *_followButtonFrameObserver;
    IGStringStyle *_boldLinkStyle;
    IGStringStyle *_boldAlternateLinkStyle;
    IGStringStyle *_boldGrayStyle;
}

+ (int)height;
@property(retain, nonatomic) IGStringStyle *boldGrayStyle; // @synthesize boldGrayStyle=_boldGrayStyle;
@property(retain, nonatomic) IGStringStyle *boldAlternateLinkStyle; // @synthesize boldAlternateLinkStyle=_boldAlternateLinkStyle;
@property(retain, nonatomic) IGStringStyle *boldLinkStyle; // @synthesize boldLinkStyle=_boldLinkStyle;
@property(retain, nonatomic) IGKVOHandle *followButtonFrameObserver; // @synthesize followButtonFrameObserver=_followButtonFrameObserver;
@property(retain, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *accessibilityButton; // @synthesize accessibilityButton=_accessibilityButton;
@property(retain, nonatomic) IGLabel *sponsoredPostLabel; // @synthesize sponsoredPostLabel=_sponsoredPostLabel;
@property(retain, nonatomic) UILabel *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) UIImageView *labelIconView; // @synthesize labelIconView=_labelIconView;
@property(retain, nonatomic) IGLabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIImageView *placemarkImageView; // @synthesize placemarkImageView=_placemarkImageView;
@property(retain, nonatomic) IGLabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
@property(nonatomic) __weak NSObject<IGFeedItemHeaderDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) BOOL showFollowButton; // @synthesize showFollowButton=_showFollowButton;
@property(nonatomic) BOOL sponsoredPostAllowed; // @synthesize sponsoredPostAllowed=_sponsoredPostAllowed;
@property(nonatomic) BOOL opaqueBackground; // @synthesize opaqueBackground=_opaqueBackground;
@property(retain, nonatomic) NSObject<IGHeaderFeedItem> *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (void)onLocationTapped;
- (void)onUsernameTapped;
- (void)onSponsoredPostLabelTapped;
- (void)profilePictureTapped:(id)arg1;
- (void)onPostUpdated;
- (void)onUserInfoChanged;
@property(readonly, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) NSString *primaryName;
@property(readonly, nonatomic) NSString *longDate;
@property(readonly, nonatomic) NSString *shortDate;
@property(readonly, nonatomic) BOOL hasUserLocation;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL sponsoredPost;
- (void)updateAppearance;
- (void)updateDateLabel;
- (void)layoutDateLabel;
- (void)layoutFollowButton;
- (void)layoutFeedItem;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

