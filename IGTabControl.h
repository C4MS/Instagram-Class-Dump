//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface IGTabControl : UIView
{
    NSArray *_buttons;
    int _selectedIndex;
    id <IGTabControlDelegate> _delegate;
    NSArray *_separators;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(nonatomic) __weak id <IGTabControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onSegmentTapped:(id)arg1;
- (void)setSelectedIndex:(int)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)setSelectedIndex:(int)arg1 animated:(BOOL)arg2;
- (void)setTitles:(id)arg1;
- (id)vendSeparatorView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
