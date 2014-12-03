//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IGMediaUploadManager : NSObject
{
    NSMutableDictionary *_activeUploads;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)endConfigureBackgroundTaskForUpload:(id)arg1;
- (void)endUploadBackgroundTaskForUpload:(id)arg1;
- (void)startConfigureBackgroundTaskForUpload:(id)arg1;
- (void)startUploadBackgroundTaskForUpload:(id)arg1;
- (void)mediaMetadataReady:(id)arg1;
- (void)manuallyCacheLocalImageData:(id)arg1 forPost:(id)arg2;
- (void)postFinishedWithServerResponse:(id)arg1 forUpload:(id)arg2;
- (BOOL)validateServerResponse:(id)arg1 forUpload:(id)arg2;
- (void)configureUploadForStartTime:(id)arg1;
- (id)configureUrlFromUpload:(id)arg1;
- (void)uploadVideoDataForUpload:(id)arg1;
- (void)uploadVideoCoverPhotoForStartTime:(id)arg1;
- (void)uploadVideoForStartTime:(id)arg1;
- (void)uploadPhotoForStartTime:(id)arg1;
- (id)validUploadsDirectedUploads;
- (id)validUploadsBroadcastUploads;
- (id)validUploadsForDirectedSharing:(BOOL)arg1;
- (BOOL)hasMediaUploadWithStartTime:(id)arg1;
- (id)uploadForStartTime:(id)arg1;
- (void)cancelAllUploads;
- (void)removeUploadsForKeys:(id)arg1;
- (void)retryMediaUploadWithStartTime:(id)arg1;
- (void)removeMediaUploadWithStartTime:(id)arg1;
- (void)initializeUploadWithDataType:(int)arg1 startTime:(id)arg2;
- (id)initializeUploadForType:(int)arg1;
- (void)unarchiveUploads;
- (void)archiveUploadsWithAppEnteringBackground:(BOOL)arg1;
- (void)checkSavedUploads;
- (void)onAppWillResume:(id)arg1;
- (void)onAppWillBackground:(id)arg1;
- (void)onAppWillTerminate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

