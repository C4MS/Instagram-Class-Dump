//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIColor, UIImageView, UILabel, UIView;

@interface IGToolPickerCell : UICollectionViewCell
{
    UIImageView *_iconView;
    UILabel *_label;
    UIView *_line;
    UIColor *_pressedBackgroundColor;
    float _topPadding;
    float _bottomPadding;
    UIView *_highlightLine;
}

@property(retain, nonatomic) UIView *highlightLine; // @synthesize highlightLine=_highlightLine;
@property(nonatomic) float bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) float topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) UIColor *pressedBackgroundColor; // @synthesize pressedBackgroundColor=_pressedBackgroundColor;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(nonatomic) BOOL showsHighlightBar;
@property(retain, nonatomic) UIColor *highlightBarColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

