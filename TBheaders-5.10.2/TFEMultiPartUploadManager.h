//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFEMultiPartUploadManager : NSObject
{
}

+ (void)blockComplete:(id)arg1;
+ (void)blockUpload:(id)arg1 blockSize:(unsigned long long)arg2;
+ (void)setCommonCallbackOfOperation:(id)arg1 session:(id)arg2 blockSize:(unsigned long long)arg3;
+ (void)setAuthInfosForRequest:(id)arg1 session:(id)arg2 error:(id *)arg3;
+ (void)blockInit:(id)arg1 blockSize:(unsigned long long)arg2;
+ (void)upload:(id)arg1;

@end
