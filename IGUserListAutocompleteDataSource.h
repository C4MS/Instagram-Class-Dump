//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAutocompleteNetworkDataSourceDelegate.h"
#import "IGSearchDataSource.h"

@class IGUserListAutocompleteNetworkDataSource, NSArray, NSDictionary, NSString;

@interface IGUserListAutocompleteDataSource : NSObject <IGAutocompleteNetworkDataSourceDelegate, IGSearchDataSource>
{
    BOOL _searching;
    BOOL _emptyQuery;
    BOOL _responseWasFoundInQueryCache;
    id <IGUserListAutocompleteDataSourceDelegate> _delegate;
    IGUserListAutocompleteNetworkDataSource *_dataSource;
    NSArray *_currentResults;
    NSString *_responseQueryText;
    NSString *_responseRankToken;
    NSDictionary *_analyticsInfo;
}

@property(nonatomic) BOOL responseWasFoundInQueryCache; // @synthesize responseWasFoundInQueryCache=_responseWasFoundInQueryCache;
@property(retain, nonatomic) NSDictionary *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(copy, nonatomic) NSString *responseRankToken; // @synthesize responseRankToken=_responseRankToken;
@property(copy, nonatomic) NSString *responseQueryText; // @synthesize responseQueryText=_responseQueryText;
@property(nonatomic, getter=isEmptyQuery) BOOL emptyQuery; // @synthesize emptyQuery=_emptyQuery;
@property(retain, nonatomic) NSArray *currentResults; // @synthesize currentResults=_currentResults;
@property(retain, nonatomic) IGUserListAutocompleteNetworkDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isSearching) BOOL searching; // @synthesize searching=_searching;
@property(nonatomic) __weak id <IGUserListAutocompleteDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)numberOfLocalUsers;
- (BOOL)isLocalUser:(id)arg1;
- (void)autocompleteNetworkDataSource:(id)arg1 didFailUpdateWithError:(id)arg2 forQuery:(id)arg3 rankToken:(id)arg4 analyticsInfo:(id)arg5;
- (void)autocompleteNetworkDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 forQuery:(id)arg3 foundInQueryCache:(BOOL)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 isLoading:(BOOL)arg7;
- (void)clearResults;
- (id)noResultsMessage;
- (id)resultForRow:(int)arg1;
- (id)allResults;
- (int)numberOfResults;
- (void)reset;
- (void)beginFilteringUsersInSet:(int)arg1 scope:(int)arg2 query:(id)arg3 rankToken:(id)arg4 analyticsInfo:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

