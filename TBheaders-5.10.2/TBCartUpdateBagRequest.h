//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCartBaseRequest.h"

@class NSArray;

@interface TBCartUpdateBagRequest : TBCartBaseRequest
{
    unsigned long long _queryType;	// 8 = 0x8
    NSArray *_editComponents;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *editComponents; // @synthesize editComponents=_editComponents;
@property(nonatomic) unsigned long long queryType; // @synthesize queryType=_queryType;
- (void).cxx_destruct;
- (id)nextCommandId;
- (id)submitData;

@end

