//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBSCAccountFeedItem : TBJSONModel
{
    _Bool _favourStatus;	// 8 = 0x8
    _Bool _noLikeStatus;	// 9 = 0x9
    long long _commentCount;	// 16 = 0x10
    long long _favourCount;	// 24 = 0x18
    long long _noLikeCount;	// 32 = 0x20
    unsigned long long _targetId;	// 40 = 0x28
}

@property(nonatomic) unsigned long long targetId; // @synthesize targetId=_targetId;
@property(nonatomic) _Bool noLikeStatus; // @synthesize noLikeStatus=_noLikeStatus;
@property(nonatomic) long long noLikeCount; // @synthesize noLikeCount=_noLikeCount;
@property(nonatomic) _Bool favourStatus; // @synthesize favourStatus=_favourStatus;
@property(nonatomic) long long favourCount; // @synthesize favourCount=_favourCount;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
