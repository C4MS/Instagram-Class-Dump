//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFAppLinkResolving.h"

@class NSMutableDictionary, NSString;

@interface FBAppLinkResolver : NSObject <BFAppLinkResolving>
{
    NSMutableDictionary *_cachedLinks;
    int _userInterfaceIdiom;
}

+ (id)resolver;
@property(nonatomic) int userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(retain, nonatomic) NSMutableDictionary *cachedLinks; // @synthesize cachedLinks=_cachedLinks;
- (id)appLinkFromURLInBackground:(id)arg1;
- (id)appLinksFromURLsInBackground:(id)arg1;
- (void)dealloc;
- (id)initWithUserInterfaceIdiom:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

