//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray;

@interface MDEmotionShop : NSObject
{
    int _currentType;
    NSMutableArray *_latestEmotions;
    NSMutableArray *_hotestEmotions;
    NSMutableArray *_freeEmotions;
    long long latestUsedIndex;
    long long hotestUsedIndex;
    long long freeUsedIndex;
    _Bool noLatestEmotions;
    _Bool noHotestEmotions;
    _Bool noFreeEmotions;
    _Bool latestEmotionLoading;
    _Bool hotestEmotionLoading;
    _Bool freeEmotionLoading;
    NSDate *latestEmotionLastUpdateTime;
    NSDate *hotestEmotionLastUpdateTime;
    NSDate *freeEmotionLastUpdateTime;
    id <MDEmotionShopDelegate> delegate;
    NSMutableArray *currentArray;
    _Bool hasMoreEmotions;
    _Bool isLoading;
    int currentType;
    NSDate *lastUpdateTime;
}

@property(retain, nonatomic) NSMutableArray *freeEmotions; // @synthesize freeEmotions=_freeEmotions;
@property(retain, nonatomic) NSMutableArray *latestEmotions; // @synthesize latestEmotions=_latestEmotions;
@property(retain, nonatomic) NSMutableArray *hotestEmotions; // @synthesize hotestEmotions=_hotestEmotions;
@property(retain, nonatomic) NSDate *freeEmotionLastUpdateTime; // @synthesize freeEmotionLastUpdateTime;
@property(retain, nonatomic) NSDate *latestEmotionLastUpdateTime; // @synthesize latestEmotionLastUpdateTime;
@property(retain, nonatomic) NSDate *hotestEmotionLastUpdateTime; // @synthesize hotestEmotionLastUpdateTime;
@property(nonatomic) id <MDEmotionShopDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableArray *currentArray; // @synthesize currentArray;
- (void)requestDataFailed:(id)arg1;
- (void)requestDataErrored:(id)arg1;
- (void)requestDataSuccessed:(id)arg1;
- (void)resetLoadingFlagWithType:(int)arg1;
- (void)reloadEmotions;
- (void)loadMoreEmotions;
- (void)requestEmotionPactsDataWithIndex:(long long)arg1 pageStep:(long long)arg2;
@property(nonatomic) int currentType; // @synthesize currentType;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading;
@property(readonly, nonatomic) _Bool hasMoreEmotions; // @synthesize hasMoreEmotions;
@property(readonly, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end
