//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBTakeoutCreateOrderModel : TBJSONModel
{
    NSString *_result;	// 8 = 0x8
    NSArray *_alipayOrderIds;	// 16 = 0x10
    NSArray *_orderIds;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *orderIds; // @synthesize orderIds=_orderIds;
@property(retain, nonatomic) NSArray *alipayOrderIds; // @synthesize alipayOrderIds=_alipayOrderIds;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end
