//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBHTHomeEntryModel : TBJSONModel
{
    NSString *_title;	// 8 = 0x8
    NSString *_sub_title;	// 16 = 0x10
    NSString *_icon_url;	// 24 = 0x18
    NSString *_linkto;	// 32 = 0x20
    NSString *_auth;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *auth; // @synthesize auth=_auth;
@property(copy, nonatomic) NSString *linkto; // @synthesize linkto=_linkto;
@property(copy, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(copy, nonatomic) NSString *sub_title; // @synthesize sub_title=_sub_title;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
