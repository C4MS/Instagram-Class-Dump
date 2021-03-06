//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSignInFormView, NSError, NSString;

@protocol IGSignInFormViewDelegate <NSObject>
- (void)signInFormView:(IGSignInFormView *)arg1 didFailWithServerError:(NSError *)arg2;
- (void)signInFormViewDidDismissForHelpWithUsername:(NSString *)arg1;
- (void)signInFormViewDidReturnFromPasswordField:(IGSignInFormView *)arg1;
- (void)signInFormViewDidSignIn;
- (void)signInFormViewDidFailSignIn;
- (void)signInFormViewDidStartSignIn;
@end

