//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MSOAServiceIdMap, NSCache;

@interface MSOALocalServiceRouter : NSObject
{
    MSOAServiceIdMap *_serviceIdMap;	// 8 = 0x8
    NSCache *_serviceImpModelPool;	// 16 = 0x10
}

@property(retain, nonatomic) NSCache *serviceImpModelPool; // @synthesize serviceImpModelPool=_serviceImpModelPool;
@property(retain, nonatomic) MSOAServiceIdMap *serviceIdMap; // @synthesize serviceIdMap=_serviceIdMap;
- (void).cxx_destruct;
- (id)loadContentFromBundlePath:(id)arg1;
- (id)_getServiceImpConfig:(id)arg1;
- (void)clearCache;
- (id)serviceProxyForServiceId:(id)arg1;
- (id)init;

@end
