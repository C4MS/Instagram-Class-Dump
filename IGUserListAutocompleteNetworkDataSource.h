//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteNetworkDataSource.h"

@interface IGUserListAutocompleteNetworkDataSource : IGAutocompleteNetworkDataSource
{
    int _searchSet;
    int _searchScope;
}

@property(nonatomic) int searchScope; // @synthesize searchScope=_searchScope;
@property(nonatomic) int searchSet; // @synthesize searchSet=_searchSet;
- (id)parseServerResponse:(id)arg1;
- (id)requestForQueryString:(id)arg1 rankToken:(id)arg2;
- (id)localSuggestionsForQueryString:(id)arg1 numRequested:(int)arg2;

@end

