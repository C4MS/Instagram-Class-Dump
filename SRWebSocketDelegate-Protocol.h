//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SRWebSocket;

@protocol SRWebSocketDelegate <NSObject>
- (void)webSocket:(SRWebSocket *)arg1 didReceiveMessage:(id)arg2;

@optional
- (void)webSocketDidReceivePing:(SRWebSocket *)arg1;
- (void)webSocket:(SRWebSocket *)arg1 didCloseWithCode:(int)arg2 reason:(NSString *)arg3 wasClean:(BOOL)arg4;
- (void)webSocket:(SRWebSocket *)arg1 didFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(SRWebSocket *)arg1;
@end

