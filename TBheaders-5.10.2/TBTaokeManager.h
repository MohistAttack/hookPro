//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TBTaokeManager : NSObject
{
    _Bool _enableNavHooking;	// 8 = 0x8
    NSString *_globalE;	// 16 = 0x10
    NSDate *_expireDate;	// 24 = 0x18
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableNavHooking; // @synthesize enableNavHooking=_enableNavHooking;
@property(retain, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(retain, nonatomic) NSString *globalE; // @synthesize globalE=_globalE;
- (void).cxx_destruct;
- (void)appBecomeActive:(id)arg1;
- (void)handleURLNavigation:(id)arg1 query:(id)arg2;
- (id)taokeURLFromOriginURL:(id)arg1;

@end
