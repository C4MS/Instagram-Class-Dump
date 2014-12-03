//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class IGTapButton, IGUsertag, NSString, UIControl, UIImageView, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer;

@interface IGUsertagView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_expandedView;
    UIImageView *_leftBGView;
    UIImageView *_rightBGView;
    float _caretPosition;
    BOOL _shouldRemoveAfterAnimation;
    UIPanGestureRecognizer *_panRecognizer;
    UILabel *_tagLabel;
    struct CGPoint _panGestureInitialCenter;
    struct CGPoint _panGestureInitialLocation;
    BOOL _expanded;
    BOOL _isMoving;
    BOOL _flipped;
    BOOL _isEditable;
    BOOL _isActive;
    IGUsertag *_usertag;
    id <IGUsertagViewDelegate> _delegate;
    UIControl *_contentView;
    UILongPressGestureRecognizer *_pressRecognizer;
    IGTapButton *_removeButton;
    float _proposedCaretPosition;
    struct CGPoint _position;
}

@property(nonatomic) float proposedCaretPosition; // @synthesize proposedCaretPosition=_proposedCaretPosition;
@property(nonatomic) float caretPosition; // @synthesize caretPosition=_caretPosition;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) BOOL flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) BOOL isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) IGTapButton *removeButton; // @synthesize removeButton=_removeButton;
@property(readonly, nonatomic) UILongPressGestureRecognizer *pressRecognizer; // @synthesize pressRecognizer=_pressRecognizer;
@property(readonly, nonatomic) UIControl *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <IGUsertagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) IGUsertag *usertag; // @synthesize usertag=_usertag;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)repositionWithCaretAtPosition:(float)arg1;
- (void)shrink:(BOOL)arg1 animated:(BOOL)arg2;
- (void)show:(BOOL)arg1 withAnimation:(int)arg2;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateBackgroundImages;
- (void)onDragExit;
- (void)onTouchDown;
- (void)onTap;
- (void)onRemove;
- (void)removeAndNotifyDelegate:(BOOL)arg1;
- (void)remove;
- (float)currentWidth;
- (void)hideAndRemove;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)scaleUp;
- (struct CGPoint)caretPointWithCenter:(struct CGPoint)arg1;
- (void)handlePanFromRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didMoveToSuperview;
- (void)reposition;
- (struct CGRect)proposedFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

