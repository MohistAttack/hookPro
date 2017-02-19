//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WopcBasicApiService : NSObject
{
    _Bool _needAsync;	// 8 = 0x8
    NSString *_tidaApiName;	// 16 = 0x10
    NSString *_appkey;	// 24 = 0x18
    NSString *_sellerNick;	// 32 = 0x20
    NSString *_accesstoken;	// 40 = 0x28
    NSString *_domain;	// 48 = 0x30
    id _methodParam;	// 56 = 0x38
    NSDictionary *_extraParam;	// 64 = 0x40
    NSString *_eventName;	// 72 = 0x48
    CDUnknownBlockType _apiCallback;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType apiCallback; // @synthesize apiCallback=_apiCallback;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(nonatomic) _Bool needAsync; // @synthesize needAsync=_needAsync;
@property(retain, nonatomic) NSDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(retain, nonatomic) id methodParam; // @synthesize methodParam=_methodParam;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *accesstoken; // @synthesize accesstoken=_accesstoken;
@property(retain, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSString *tidaApiName; // @synthesize tidaApiName=_tidaApiName;
- (void).cxx_destruct;
- (void)executeWithView:(id)arg1 withViewController:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)initWithTidaApi:(id)arg1 needAsync:(_Bool)arg2;
- (id)initWithTidaApi:(id)arg1;

@end
