//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, TBSDKMTOPServer;

@interface TBPersonnalDetailModel : NSObject
{
    _Bool _isLoading;	// 8 = 0x8
    NSDictionary *_resultDic;	// 16 = 0x10
    TBSDKMTOPServer *_server;	// 24 = 0x18
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBSDKMTOPServer *server; // @synthesize server=_server;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSDictionary *resultDic; // @synthesize resultDic=_resultDic;
- (void).cxx_destruct;
- (void)loadPersonnalInfomationWithCompletion:(CDUnknownBlockType)arg1;

@end
