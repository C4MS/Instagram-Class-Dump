//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotation.h"

@protocol MKOverlay <MKAnnotation>
@property(readonly, nonatomic) CDStruct_feeb6407 boundingMapRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;

@optional
- (BOOL)canReplaceMapContent;
- (BOOL)intersectsMapRect:(CDStruct_feeb6407)arg1;
@end

