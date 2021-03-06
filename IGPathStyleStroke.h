//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPathStyle.h"

@class UIColor;

@interface IGPathStyleStroke : IGPathStyle
{
    int _type;
    float _width;
    UIColor *_color;
}

+ (id)strokeWithWidth:(float)arg1 color:(id)arg2;
+ (id)strokeWithType:(int)arg1 width:(float)arg2 color:(id)arg3;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)applyToPath:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithType:(int)arg1 width:(float)arg2 color:(id)arg3;

@end

