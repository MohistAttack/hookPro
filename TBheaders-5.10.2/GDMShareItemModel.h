//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GDMShareItemModel : NSObject
{
    NSString *_itemId;	// 8 = 0x8
    NSString *_price;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_pic;	// 32 = 0x20
    NSString *_skuDesc;	// 40 = 0x28
    NSString *_guide_status;	// 48 = 0x30
}

@property(copy, nonatomic) NSString *guide_status; // @synthesize guide_status=_guide_status;
@property(copy, nonatomic) NSString *skuDesc; // @synthesize skuDesc=_skuDesc;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

