//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAbstractDataSource.h"

@interface IGHashtagListLocalDataSource : IGAutocompleteAbstractDataSource
{
    BOOL _showsDisclosureIndicators;
}

@property(nonatomic) BOOL showsDisclosureIndicators; // @synthesize showsDisclosureIndicators=_showsDisclosureIndicators;
- (id)resultForRow:(int)arg1;
- (void)filterHashtags:(id)arg1;

@end

