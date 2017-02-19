//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDAPICached;

@interface MDMomentApi : NSObject
{
    MDAPICached *_apiCache;
}

@property(retain, nonatomic) MDAPICached *apiCache; // @synthesize apiCache=_apiCache;
- (void).cxx_destruct;
- (void)cancelRecommendResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)filterUserMomentsResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)setToExpireResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)setToPublicResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)deleteAMomentCommentResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)sendAMomentCommentResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)momentCommentListResponseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)sendMomentGiftMessage:(id)arg1 MomentId:(id)arg2 TradeNo:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (void)momentListFromRecommendResponseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)momentTopicListWithTopicID:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)momentListFromTopicResponseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)momentLikeResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)expressionsListResponseCallback:(CDUnknownBlockType)arg1;
- (void)publishMoment:(id)arg1 withPreviewImage:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 failSelector:(SEL)arg5 errSelector:(SEL)arg6;
- (void)checkMomentBeforePublish:(id)arg1 withResponseCallback:(CDUnknownBlockType)arg2;
- (void)aMomentInfoResonseCallback:(CDUnknownBlockType)arg1 andMomentId:(id)arg2;
- (void)momentThemeResonseCallback:(CDUnknownBlockType)arg1 andThemeId:(id)arg2;
- (void)momentListFromOperationResonseCallback:(CDUnknownBlockType)arg1 andThemeId:(id)arg2;
- (void)sendGiftResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)recordMomentPlayResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)userListFromNearbyResonseCallback:(CDUnknownBlockType)arg1 andMomoid:(id)arg2;
- (void)momentPlayListResonseCallback:(CDUnknownBlockType)arg1 andParam:(id)arg2;
- (void)deleteMomentID:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)oldMomentNeedCache:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)myMomentNeedCache:(_Bool)arg1 index:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)momentListNeedCache:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;

@end
