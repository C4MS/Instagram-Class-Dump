//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@interface UIDevice (Hardware)
- (int)deviceMultiplier;
- (BOOL)isFastestDevice;
- (BOOL)isSlowerDevice;
- (BOOL)isMulticore;
- (id)macaddress;
- (int)deviceFamily;
- (BOOL)hasRetinaDisplay;
- (id)platformString;
- (unsigned int)platformType;
- (unsigned long long)freeDiskSpace;
- (unsigned int)maxSocketBufferSize;
- (unsigned int)userMemory;
- (unsigned int)totalMemory;
- (unsigned int)cpuCount;
- (unsigned int)busFrequency;
- (unsigned int)cpuFrequency;
- (unsigned int)getSysInfo:(unsigned int)arg1;
- (id)hwmodel;
- (id)platform;
- (id)getSysInfoByName:(char *)arg1;
@end

