//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGUsernameHelper : NSObject
{
}

+ (void)checkUsernameForString:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
+ (void)checkUsernameFromEmail;
+ (void)startOrRestartUsernameFromEmailCheckTimerWithEmail:(id)arg1;
+ (id)pendingEmailToCheck;
+ (BOOL)isChecking;
+ (id)lastCheckedResult;

@end

