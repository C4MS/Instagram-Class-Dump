//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGMediaThumbnailView, IGProfilePictureImageView, UIImageView, UILabel, UIView;

@interface IGDirectShareInboxCell : UITableViewCell
{
    IGProfilePictureImageView *_userImageView;
    IGMediaThumbnailView *_previewImageView;
    UILabel *_userLabel;
    UILabel *_postStatusLabel;
    UIImageView *_statusImageView;
    UIImageView *_openChevronView;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *openChevronView; // @synthesize openChevronView=_openChevronView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UILabel *postStatusLabel; // @synthesize postStatusLabel=_postStatusLabel;
@property(retain, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) IGMediaThumbnailView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) IGProfilePictureImageView *userImageView; // @synthesize userImageView=_userImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
