//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CleanFields)
+ (id)emailRegex;
+ (id)hashtagRegexCharacterSetWithPrefixAllowed:(BOOL)arg1;
+ (id)usernameRegexCharacterSetWithPrefixAllowed:(BOOL)arg1;
- (id)emailUsername;
- (BOOL)isValidEmail;
- (BOOL)containsOnlyValidEmailCharacters;
- (id)stringByRemovingCharactersMatchingRegexCharacterSet:(id)arg1;
- (BOOL)validateWithRegexCharacterSet:(id)arg1;
- (id)stringByRemovingInvalidHashtagCharactersPrefixAllowed:(BOOL)arg1;
- (BOOL)validateHashagWithPrefixAllowed:(BOOL)arg1;
- (id)stringByTransformingInvalidUsernameCharacters;
- (id)stringByRemovingInvalidUsernameCharactersPrefixAllowed:(BOOL)arg1;
- (BOOL)validateUsernameWithPrefixAllowed:(BOOL)arg1;
@end

