//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface JDReactNativeUploadExceptionModule : NSObject <RCTBridgeModule>
{
    NSMutableDictionary *_tasksByRequestID;
}

+ (id)__rct_export__470;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)uploadException:(id)arg1 successCB:(CDUnknownBlockType)arg2 errorCB:(CDUnknownBlockType)arg3;
- (void)uploadExceptionError:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end
