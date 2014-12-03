//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedViewController.h"

#import "IGFeedPromotionBannerDelegate.h"

@class IGFeedPromotionAppInstallBannerView, IGFeedToggleView, IGHashtagModel, IGRaindropRankInfo, NSString;

@interface IGHashtagFeedViewController : IGFeedViewController <IGFeedPromotionBannerDelegate>
{
    IGHashtagModel *_hashtag;
    IGFeedToggleView *_toggleView;
    IGFeedPromotionAppInstallBannerView *_promotionalBanner;
}

@property(retain, nonatomic) IGFeedPromotionAppInstallBannerView *promotionalBanner; // @synthesize promotionalBanner=_promotionalBanner;
- (void).cxx_destruct;
- (id)rankTokenForFeedNetworkSource:(id)arg1;
- (void)gridView:(id)arg1 didTapOnFeedItem:(id)arg2 view:(id)arg3;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)onHashtagUpdated;
- (void)feedPromotionBannerDidTapDismiss:(id)arg1 withConfiguration:(id)arg2;
- (void)setHashtag:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithHashtag:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) IGRaindropRankInfo *currentRankInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
