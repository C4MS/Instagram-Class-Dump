//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectedPostViewController;

@protocol IGDirectedPostViewControllerDelegate <NSObject>
- (void)postViewControllerDidDetectCorruptPost:(IGDirectedPostViewController *)arg1;
- (void)postViewControllerDidIgnoreSender:(IGDirectedPostViewController *)arg1;
- (void)postViewControllerDidReportInAppropriate:(IGDirectedPostViewController *)arg1;
- (void)postViewControllerDidTapClose:(IGDirectedPostViewController *)arg1;
- (void)postViewControllerDidTapHide:(IGDirectedPostViewController *)arg1;
- (void)postViewControllerDidTapDelete:(IGDirectedPostViewController *)arg1;
@end
