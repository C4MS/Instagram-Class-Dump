//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDictionary, NSString;

@protocol IGExploreSearchHelper <NSObject>
@property(retain, nonatomic) NSDictionary *analyticsInfo;
@property(nonatomic) BOOL responseWasFoundInCache;
@property(copy, nonatomic) NSString *responseRankToken;
@property(copy, nonatomic) NSString *responseQueryText;
@property(readonly, nonatomic) BOOL isSearching;
@property(readonly, nonatomic) __weak id <IGSearchDataSource> resultDataSource;
@property(nonatomic) int currentDataSourceType;
@property(copy, nonatomic) NSString *requestedHashtagQuery;
@property(copy, nonatomic) NSString *requestedUserQuery;
@property(nonatomic) __weak id <IGExploreSearchHelperDelegate> delegate;
- (void)reset;
- (void)filterHashtagsFromQuery:(NSString *)arg1 rankToken:(NSString *)arg2 analyticsInfo:(NSDictionary *)arg3;
- (void)filterUsersInSearchSet:(int)arg1 searchScope:(int)arg2 query:(NSString *)arg3 rankToken:(NSString *)arg4 analyticsInfo:(NSDictionary *)arg5;
- (void)fetchVenuesNearLocation:(CLLocation *)arg1 query:(NSString *)arg2;
- (void)clearNearbyLocations;
- (void)invalidateResults;
- (void)clearSearchHistory;
- (void)logUserSearchQuery:(NSString *)arg1;
- (BOOL)isLocationSearching;
- (BOOL)isLocal;
- (BOOL)supportsManualSearch;
- (int)numberOfLocalResults;
- (BOOL)isLocalResult:(id)arg1;

@optional
- (void)fetchHashtagsFromQuery:(NSString *)arg1 rankToken:(NSString *)arg2;
- (void)fetchUsersFromQuery:(NSString *)arg1 rankToken:(NSString *)arg2;
@end

