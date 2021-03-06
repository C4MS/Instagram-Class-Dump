//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGAnalyticsLogFileManager : NSObject
{
    NSString *_logFileDirectory;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSString *logFileDirectory; // @synthesize logFileDirectory=_logFileDirectory;
- (void).cxx_destruct;
- (BOOL)isBinaryFile:(id)arg1;
- (void)deleteLogFiles:(id)arg1 keepNewestFiles:(unsigned int)arg2;
- (void)deleteLogFile:(id)arg1;
- (void)createLogFileWithData:(id)arg1 binary:(BOOL)arg2;
- (id)allLogFiles;

@end

