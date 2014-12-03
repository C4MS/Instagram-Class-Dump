//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface IGAnalyticsEvent : NSObject
{
    NSString *_name;
    NSString *_module;
    NSMutableDictionary *_extra;
    double _time;
    BOOL _lowLatency;
}

+ (void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3;
+ (void)recordEvent:(id)arg1 forTimer:(id)arg2;
+ (void)recordAverage:(id)arg1 value:(double)arg2;
+ (void)startTimer:(id)arg1 uuid:(id)arg2;
+ (void)startTimer:(id)arg1;
+ (void)incrementCounter:(id)arg1 byAmount:(int)arg2;
+ (void)incrementCounter:(id)arg1;
+ (id)scheduleEvent:(id)arg1 module:(id)arg2 lowLatency:(BOOL)arg3;
+ (id)scheduleEvent:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)description;
- (void)log;
- (void)setValue:(id)arg1 forExtraKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithName:(id)arg1 module:(id)arg2 lowLatency:(BOOL)arg3;
- (void)dealloc;

@end

