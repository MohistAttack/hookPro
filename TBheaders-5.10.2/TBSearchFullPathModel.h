//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSearchFullPathModel : TBJSONModel
{
    NSString *_guide;	// 8 = 0x8
    NSString *_param;	// 16 = 0x10
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSString *param; // @synthesize param=_param;
@property(retain, nonatomic) NSString *guide; // @synthesize guide=_guide;
- (void).cxx_destruct;

@end
