//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTask;

@interface FBTaskCompletionSource : NSObject
{
    FBTask *_task;
}

+ (id)taskCompletionSource;
@property(retain, nonatomic) FBTask *task; // @synthesize task=_task;
- (BOOL)trySetCancelled;
- (BOOL)trySetException:(id)arg1;
- (BOOL)trySetError:(id)arg1;
- (BOOL)trySetResult:(id)arg1;
- (void)cancel;
- (void)setException:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (void)dealloc;
- (id)init;

@end

