//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFAppLink, NSDictionary, NSURL;

@interface BFURL : NSObject
{
    NSURL *_targetURL;
    NSDictionary *_targetQueryParameters;
    NSDictionary *_appLinkData;
    NSDictionary *_appLinkExtras;
    BFAppLink *_appLinkReferer;
    NSURL *_inputURL;
    NSDictionary *_inputQueryParameters;
}

+ (id)queryParametersForURL:(id)arg1;
+ (id)decodeURLString:(id)arg1;
+ (id)URLWithURL:(id)arg1;
@property(readonly) NSDictionary *inputQueryParameters; // @synthesize inputQueryParameters=_inputQueryParameters;
@property(readonly) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property(readonly) BFAppLink *appLinkReferer; // @synthesize appLinkReferer=_appLinkReferer;
@property(readonly) NSDictionary *appLinkExtras; // @synthesize appLinkExtras=_appLinkExtras;
@property(readonly) NSDictionary *appLinkData; // @synthesize appLinkData=_appLinkData;
@property(readonly) NSDictionary *targetQueryParameters; // @synthesize targetQueryParameters=_targetQueryParameters;
@property(readonly) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end
