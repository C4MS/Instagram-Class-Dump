//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface IGSponsoredPostInfo : NSObject <NSCoding>
{
    BOOL _showIcon;
    BOOL _hideComments;
    BOOL _hideCommentButton;
    BOOL _isHoldout;
    NSString *_title;
    NSArray *_viewTags;
    NSString *_trackingToken;
    NSArray *_possibleHideAnswers;
}

@property(retain, nonatomic) NSArray *possibleHideAnswers; // @synthesize possibleHideAnswers=_possibleHideAnswers;
@property(copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(copy, nonatomic) NSArray *viewTags; // @synthesize viewTags=_viewTags;
@property(nonatomic) BOOL isHoldout; // @synthesize isHoldout=_isHoldout;
@property(nonatomic) BOOL hideCommentButton; // @synthesize hideCommentButton=_hideCommentButton;
@property(nonatomic) BOOL hideComments; // @synthesize hideComments=_hideComments;
@property(nonatomic) BOOL showIcon; // @synthesize showIcon=_showIcon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)preparePossibleHideAnswers:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

