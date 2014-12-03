//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGShareListManager;

@interface IGShareListDataSource : NSObject
{
    IGShareListManager *_shareListManager;
}

+ (void)configureShowAllCell:(id)arg1;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
- (void).cxx_destruct;
- (BOOL)allowShortList;
- (id)indexPathsForItemsToExpandWithSection:(int)arg1;
- (int)indexForShowAllCell;
- (int)numberOfItems;
- (void)configureShareCell:(id)arg1 index:(int)arg2;
- (id)initWithShareListManager:(id)arg1;

@end

