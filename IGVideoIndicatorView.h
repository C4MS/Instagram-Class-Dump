//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGAudioIndicatorButton, IGSimpleButton, IGVideoGlyphView, UIImageView;

@interface IGVideoIndicatorView : UIView
{
    UIView *_glyphView;
    IGSimpleButton *_playGlyph;
    IGSimpleButton *_pauseGlyph;
    IGSimpleButton *_errorGlyph;
    IGVideoGlyphView *_cameraGlyph;
    IGVideoGlyphView *_progressView;
    UIImageView *_noAudioGlyph;
    BOOL _hideGlyph;
    int _indicatorState;
    float _progress;
    IGAudioIndicatorButton *_audioButton;
}

@property(retain, nonatomic) IGAudioIndicatorButton *audioButton; // @synthesize audioButton=_audioButton;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) int indicatorState; // @synthesize indicatorState=_indicatorState;
- (void).cxx_destruct;
- (void)showGlyph:(BOOL)arg1 animated:(BOOL)arg2 duration:(float)arg3 delay:(float)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

