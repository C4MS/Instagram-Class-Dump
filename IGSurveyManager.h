//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBrandLiftSurvey, IGSurveyQuestion, NSTimer;

@interface IGSurveyManager : NSObject
{
    IGSurveyQuestion *_pendingSurveyQuestion;
    IGBrandLiftSurvey *_pendingBrandLiftSurvey;
    NSTimer *_activeSurveyTimer;
    double _timeAtStartup;
}

- (void).cxx_destruct;
- (void)scheduleSurveyDisplayIfNeeded;
- (void)showPendingSurvey;
- (void)feedEndedInteracting:(id)arg1;
- (void)invalidateTimerIfActive;
- (void)feedStartedInteracting:(id)arg1;
- (void)showBrandLiftSurveyWhenAppropriate:(id)arg1;
- (void)showSurveyWhenAppropriate:(id)arg1;
- (void)mainFeedDidAppear:(id)arg1;
- (void)appBackgrounded:(id)arg1;
- (void)appForegrounded:(id)arg1;
- (void)appLaunched:(id)arg1;
- (id)init;
- (void)dealloc;

@end

