//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIScrollView;

@protocol IGExploreModernViewControllerProtocol <NSObject>
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrolling:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)showErrorLoadingMessage:(NSString *)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
@end

