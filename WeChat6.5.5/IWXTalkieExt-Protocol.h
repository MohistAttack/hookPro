//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol IWXTalkieExt

@optional
- (void)onRemoteControlCheckShouldStop;
- (void)onRemoteControlCheckShouldPlay;
- (void)OnSomeOneCloseMode:(NSString *)arg1;
- (void)OnSomeOneOpenMode:(NSString *)arg1;
- (void)OnRestart;
- (void)OnPause;
- (void)OnReConnecting;
- (void)OnForceStopWXTalk;
- (void)onKickOutFromWXTalkRoom:(NSString *)arg1;
- (void)OnMyselfCloseMode:(NSString *)arg1;
- (void)OnNobodyTalking;
- (void)OnForceStopRecord;
- (void)OnError:(NSString *)arg1 ErrNo:(int)arg2;
- (void)OnRoomMemberChange:(NSArray *)arg1;
- (void)OnSomeoneTalking:(NSString *)arg1;
- (void)OnGetMicrophoneResult:(int)arg1;
- (void)OnOpenWXTalkModeOK:(NSArray *)arg1;
@end
