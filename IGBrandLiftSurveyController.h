//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGBrandLiftQuestionViewDelegate.h"
#import "IGBrandLiftThankYouViewDelegate.h"

@class IGBrandLiftPrimerView, IGBrandLiftSurvey, IGBrandLiftThankYouView, NSArray, NSString;

@interface IGBrandLiftSurveyController : IGViewController <IGBrandLiftQuestionViewDelegate, IGBrandLiftThankYouViewDelegate>
{
    IGBrandLiftSurvey *_survey;
    IGBrandLiftPrimerView *_primerView;
    NSArray *_questionViews;
    int _currentQuestionIndex;
    IGBrandLiftThankYouView *_thankYouView;
    unsigned int _currentViewType;
}

+ (float)popoverWidth;
@property(nonatomic) unsigned int currentViewType; // @synthesize currentViewType=_currentViewType;
@property(retain, nonatomic) IGBrandLiftThankYouView *thankYouView; // @synthesize thankYouView=_thankYouView;
@property(nonatomic) int currentQuestionIndex; // @synthesize currentQuestionIndex=_currentQuestionIndex;
@property(retain, nonatomic) NSArray *questionViews; // @synthesize questionViews=_questionViews;
@property(retain, nonatomic) IGBrandLiftPrimerView *primerView; // @synthesize primerView=_primerView;
@property(retain, nonatomic) IGBrandLiftSurvey *survey; // @synthesize survey=_survey;
- (void).cxx_destruct;
- (void)logUserSentimentSurveyWillAppear;
- (void)logPrimerViewResponse:(BOOL)arg1;
- (void)logQuestion:(id)arg1 withAnswers:(id)arg2;
- (void)logDismiss;
- (void)thankYouViewDidSelectShowResults:(id)arg1;
- (void)thankYouViewDidSelectDone:(id)arg1;
- (void)questionView:(id)arg1 didSelectAnswers:(id)arg2 forQuestion:(id)arg3;
- (void)primerViewDidTapNext;
- (void)dismissPopover;
- (void)showResultsView;
- (void)showNextQuestionWithPreviousQuestionView:(id)arg1;
- (void)showPrimerView;
- (void)viewDidLoad;
- (id)initWithSurvey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

