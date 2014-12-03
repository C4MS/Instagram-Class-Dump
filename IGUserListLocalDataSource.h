//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAbstractDataSource.h"

@class NSDictionary, NSMutableDictionary;

@interface IGUserListLocalDataSource : IGAutocompleteAbstractDataSource
{
    NSMutableDictionary *_additionalUsers;
    NSDictionary *_additionalUserSearchStrings;
    BOOL _excludesCurrentUser;
    BOOL _shouldSortByShareFrequency;
}

@property(nonatomic) BOOL shouldSortByShareFrequency; // @synthesize shouldSortByShareFrequency=_shouldSortByShareFrequency;
@property(nonatomic) BOOL excludesCurrentUser; // @synthesize excludesCurrentUser=_excludesCurrentUser;
- (void).cxx_destruct;
- (void)setFilteredResults:(id)arg1;
- (void)filterUsersInSet:(int)arg1 scope:(int)arg2 query:(id)arg3;
- (id)usersForPKs:(id)arg1 fromSet:(int)arg2;
- (id)searchStringsForCharacter:(id)arg1;
- (CDUnknownBlockType)fullComparator:(id)arg1;
- (CDUnknownBlockType)usernameComparator;
- (void)addUsersForFeedItem:(id)arg1;
- (void)addUsers:(id)arg1;
- (id)init;

@end

