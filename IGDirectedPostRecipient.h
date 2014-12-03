//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGUser;

@interface IGDirectedPostRecipient : NSObject <NSCoding>
{
    BOOL _hasRead;
    BOOL _hasLiked;
    BOOL _hasCommented;
    IGUser *_user;
}

@property BOOL hasCommented; // @synthesize hasCommented=_hasCommented;
@property BOOL hasLiked; // @synthesize hasLiked=_hasLiked;
@property(readonly) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateProperty:(id)arg1 withValue:(id)arg2;
@property BOOL hasRead; // @synthesize hasRead=_hasRead;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

