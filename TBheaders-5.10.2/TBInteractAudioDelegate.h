//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBInteractAudioDelegate : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    id _audioManager;	// 16 = 0x10
}

+ (void)audioRecordFromViewController:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) id audioManager; // @synthesize audioManager=_audioManager;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)recordCancelled;
- (void)finishRecordFail:(id)arg1;
- (void)finishRecordSuccess:(id)arg1 withTime:(long long)arg2 isStoppedManually:(_Bool)arg3;
- (void)recordDidStart;
- (id)init;

@end
