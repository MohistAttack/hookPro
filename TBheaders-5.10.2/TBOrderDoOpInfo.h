//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSString;

@interface TBOrderDoOpInfo : TBOrderObject
{
    _Bool _needReload;	// 8 = 0x8
    NSString *_msg;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
}

@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
