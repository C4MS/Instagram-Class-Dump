//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGVideoBufferWriter : NSObject
{
}

+ (id)savePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 devicePosition:(int)arg3;
+ (id)savePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 devicePosition:(int)arg3 generated:(BOOL)arg4;
+ (id)videoBufferURLForPixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 devicePosition:(int)arg3 generated:(BOOL)arg4;

@end
