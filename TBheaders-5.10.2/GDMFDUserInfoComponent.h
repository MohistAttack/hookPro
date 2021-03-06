//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMFDComponent.h"

@class NSString;

@interface GDMFDUserInfoComponent : GDMFDComponent
{
    NSString *_accoundId;	// 8 = 0x8
    _Bool _isFollowed;	// 16 = 0x10
    NSString *_accountJumpUrl;	// 24 = 0x18
}

- (void).cxx_destruct;
- (void)loadFollowInfoWithId:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)onFollowButtonCallBack:(id)arg1;
- (void)onChangeFollowState;
- (void)onFollowAfterLogin;
- (void)setUnfollow:(id)arg1;
- (void)setFollow:(id)arg1;
- (void)updateButtonState;
- (_Bool)profileLoginWithBlock:(CDUnknownBlockType)arg1;
- (void)onHeadImageCallBack:(id)arg1;
- (void)configComponentViewWithModel:(id)arg1 componentView:(id)arg2;
- (void)configComponentViewWithModelAfterLayout:(id)arg1 componentView:(id)arg2;
- (id)rangerFileName;

@end

