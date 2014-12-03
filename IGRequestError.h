//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class NSString, NSURL;

@interface IGRequestError : NSError
{
}

+ (id)errorWithError:(id)arg1 statusCode:(int)arg2;
+ (id)errorWithStatusCode:(int)arg1 message:(id)arg2 helpURL:(id)arg3 isSpam:(BOOL)arg4 feedbackRequired:(BOOL)arg5 extraUserInfo:(id)arg6;
@property(readonly, nonatomic) int statusCode;
@property(readonly, nonatomic) BOOL isFeedbackRequired;
@property(readonly, nonatomic) BOOL isSpam;
@property(readonly, nonatomic) NSURL *helpURL;
@property(readonly, nonatomic) NSString *message;

@end

