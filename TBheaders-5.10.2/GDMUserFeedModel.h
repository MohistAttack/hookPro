//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface GDMUserFeedModel : NSObject
{
    long long _total;	// 8 = 0x8
    NSArray *_feedList;	// 16 = 0x10
    NSString *_timestamp;	// 24 = 0x18
}

+ (id)modelFromDictionary:(id)arg1 type:(long long)arg2;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSArray *feedList; // @synthesize feedList=_feedList;
@property(nonatomic) long long total; // @synthesize total=_total;
- (void).cxx_destruct;

@end
