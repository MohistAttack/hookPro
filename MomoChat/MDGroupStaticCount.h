//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@interface MDGroupStaticCount : EtaModel
{
    long long _femaleCount;
    long long _yes_activeCount;
    long long _yes_msgCount;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(nonatomic) long long yes_msgCount; // @synthesize yes_msgCount=_yes_msgCount;
@property(nonatomic) long long yes_activeCount; // @synthesize yes_activeCount=_yes_activeCount;
@property(nonatomic) long long femaleCount; // @synthesize femaleCount=_femaleCount;

@end
