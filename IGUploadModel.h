//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGAnalyticsWaterfall, IGRequest, NSArray, NSData, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURL, UIImage;

@interface IGUploadModel : NSObject <NSCoding>
{
    UIImage *_image;
    NSData *_imageData;
    BOOL _isDirectShare;
    int _uploadDataType;
    NSDate *_uploadStartTime;
    int _postStatus;
    IGRequest *_request;
    NSMutableDictionary *_postDict;
    float _uploadProgress;
    unsigned int _uploadTaskIdentifier;
    unsigned int _configureTaskIdentifier;
    NSData *_videoData;
    NSURL *_videoDataFileURL;
    NSArray *_videoUploadURLs;
    unsigned int _currentVideoUploadURLIndex;
    NSString *_transcodeVideoID;
    NSString *_sessionID;
    int _numberOfFailedConfigures;
    int _numberOfFailedUploads;
    unsigned int _autoRetryResumeUploadCount;
    NSMutableArray *_currentRangesUploadedAlready;
    IGAnalyticsWaterfall *_waterfall;
    NSDate *_videoStartUploadTime;
    float _videoUploadSpeed;
}

@property(nonatomic) float videoUploadSpeed; // @synthesize videoUploadSpeed=_videoUploadSpeed;
@property(copy, nonatomic) NSDate *videoStartUploadTime; // @synthesize videoStartUploadTime=_videoStartUploadTime;
@property(retain, nonatomic) IGAnalyticsWaterfall *waterfall; // @synthesize waterfall=_waterfall;
@property(copy, nonatomic) NSMutableArray *currentRangesUploadedAlready; // @synthesize currentRangesUploadedAlready=_currentRangesUploadedAlready;
@property(nonatomic) unsigned int autoRetryResumeUploadCount; // @synthesize autoRetryResumeUploadCount=_autoRetryResumeUploadCount;
@property(nonatomic) int numberOfFailedUploads; // @synthesize numberOfFailedUploads=_numberOfFailedUploads;
@property(nonatomic) int numberOfFailedConfigures; // @synthesize numberOfFailedConfigures=_numberOfFailedConfigures;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *transcodeVideoID; // @synthesize transcodeVideoID=_transcodeVideoID;
@property(nonatomic) unsigned int currentVideoUploadURLIndex; // @synthesize currentVideoUploadURLIndex=_currentVideoUploadURLIndex;
@property(retain, nonatomic) NSArray *videoUploadURLs; // @synthesize videoUploadURLs=_videoUploadURLs;
@property(copy, nonatomic) NSURL *videoDataFileURL; // @synthesize videoDataFileURL=_videoDataFileURL;
@property(retain, nonatomic) NSData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) BOOL isDirectShare; // @synthesize isDirectShare=_isDirectShare;
@property(nonatomic) unsigned int configureTaskIdentifier; // @synthesize configureTaskIdentifier=_configureTaskIdentifier;
@property(nonatomic) unsigned int uploadTaskIdentifier; // @synthesize uploadTaskIdentifier=_uploadTaskIdentifier;
@property(nonatomic) float uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) NSMutableDictionary *postDict; // @synthesize postDict=_postDict;
@property(nonatomic) __weak IGRequest *request; // @synthesize request=_request;
@property(nonatomic) int postStatus; // @synthesize postStatus=_postStatus;
@property(retain, nonatomic) NSDate *uploadStartTime; // @synthesize uploadStartTime=_uploadStartTime;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) int uploadDataType; // @synthesize uploadDataType=_uploadDataType;
- (void).cxx_destruct;
- (void)logStatusUpdate;
- (id)logWaterfallEvent:(id)arg1;
- (void)resetUploadSpeed;
- (void)updateVideoUploadSpeedWithTotalBytesSent:(long long)arg1;
- (void)updateUploadProgress:(float)arg1;
- (float)imageRatio;
- (BOOL)isURLExpired:(id)arg1;
- (id)advanceToNextNotExpiredVideoUploadURL;
- (id)currentNotExpiredVideoUploadURL;
- (void)updateUploadRangesInfo:(id)arg1;
- (struct _NSRange)getNextUploadRange;
- (BOOL)hasDoneUploadWithAllRanges;
@property(readonly, nonatomic) unsigned int suggestedChunkSize;
@property(readonly, nonatomic) unsigned int totalVideoBytesUploaded;
@property(readonly, nonatomic) unsigned int totalVideoBytesExpectToUpload;
@property(readonly, nonatomic) BOOL hasVideo;
@property(retain, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
