//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class UIView;

@interface IGCollectionView : UICollectionView
{
    BOOL _pinsHeaderView;
    BOOL _isBatchUpdating;
    UIView *_headerView;
}

@property(nonatomic) BOOL isBatchUpdating; // @synthesize isBatchUpdating=_isBatchUpdating;
@property(nonatomic) BOOL pinsHeaderView; // @synthesize pinsHeaderView=_pinsHeaderView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

