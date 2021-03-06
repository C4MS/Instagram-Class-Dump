//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class IGFeedMessage, IGImageView, UIImageView, UILabel, UIView;

@interface IGFeedMessageCell : IGPlainTableViewCell
{
    UIView *_overlayView;
    IGImageView *_thumbnailView;
    UIImageView *_badgeImageView;
    UILabel *_badgeLabel;
    UILabel *_topLabel;
    UILabel *_subLabel;
    IGFeedMessage *_feedMessage;
}

+ (id)labelForBottomLinePhotoMapsPromo:(id)arg1;
+ (id)labelForTopLinePhotoMapsPromo:(id)arg1;
+ (float)heightForFeedMessage:(id)arg1;
@property(retain, nonatomic) IGFeedMessage *feedMessage; // @synthesize feedMessage=_feedMessage;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)buildThumbnail;
- (void)buildBackground;
- (id)initWithReuseIdentifier:(id)arg1;

@end

