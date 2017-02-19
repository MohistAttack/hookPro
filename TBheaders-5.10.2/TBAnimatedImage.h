//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSArray, NSData, NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface TBAnimatedImage : UIImage
{
    unsigned long long _loopCount;	// 8 = 0x8
    NSArray *_delayTimes;	// 16 = 0x10
    unsigned long long _frameCount;	// 24 = 0x18
    unsigned long long _frameCacheSizeMax;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    unsigned long long _mode;	// 48 = 0x30
    unsigned long long _frameCacheSizeOptimal;	// 56 = 0x38
    unsigned long long _frameCacheSizeMaxInternal;	// 64 = 0x40
    unsigned long long _requestedFrameIndex;	// 72 = 0x48
    NSMutableArray *_cachedFrames;	// 80 = 0x50
    NSMutableIndexSet *_cachedFrameIndexes;	// 88 = 0x58
    NSMutableIndexSet *_requestedFrameIndexes;	// 96 = 0x60
    NSIndexSet *_allFramesIndexSet;	// 104 = 0x68
    unsigned long long _memoryWarningCount;	// 112 = 0x70
    struct dispatch_queue_s *_serialQueue;	// 120 = 0x78
    struct CGImageSource *_imageSource;	// 128 = 0x80
    TBAnimatedImage *_weakProxy;	// 136 = 0x88
}

+ (id)predrawnImageFromImage:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithData:(id)arg1 mode:(unsigned long long)arg2 scale:(double)arg3;
+ (id)imageWithData:(id)arg1 mode:(unsigned long long)arg2;
+ (void)initialize;
@property(readonly, nonatomic) TBAnimatedImage *weakProxy; // @synthesize weakProxy=_weakProxy;
@property(readonly, nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(readonly, nonatomic) struct dispatch_queue_s *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) unsigned long long memoryWarningCount; // @synthesize memoryWarningCount=_memoryWarningCount;
@property(readonly, nonatomic) NSIndexSet *allFramesIndexSet; // @synthesize allFramesIndexSet=_allFramesIndexSet;
@property(readonly, nonatomic) NSMutableIndexSet *requestedFrameIndexes; // @synthesize requestedFrameIndexes=_requestedFrameIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *cachedFrameIndexes; // @synthesize cachedFrameIndexes=_cachedFrameIndexes;
@property(readonly, nonatomic) NSMutableArray *cachedFrames; // @synthesize cachedFrames=_cachedFrames;
@property(nonatomic) unsigned long long requestedFrameIndex; // @synthesize requestedFrameIndex=_requestedFrameIndex;
@property(nonatomic) unsigned long long frameCacheSizeMaxInternal; // @synthesize frameCacheSizeMaxInternal=_frameCacheSizeMaxInternal;
@property(readonly, nonatomic) unsigned long long frameCacheSizeOptimal; // @synthesize frameCacheSizeOptimal=_frameCacheSizeOptimal;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long frameCacheSizeMax; // @synthesize frameCacheSizeMax=_frameCacheSizeMax;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSArray *delayTimes; // @synthesize delayTimes=_delayTimes;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
- (void).cxx_destruct;
- (id)description;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)resetFrameCacheSizeMaxInternal;
- (void)growFrameCacheSizeAfterMemoryWarning:(id)arg1;
- (void)purgeFrameCacheIfNeeded;
- (id)frameIndexesToCache;
- (id)predrawnImageAtIndex:(unsigned long long)arg1;
- (void)addFrameIndexesToCache:(id)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)imageLazilyCachedAtIndex:(unsigned long long)arg1;
- (id)objectInFramesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfFrames;
- (double)duration;
- (id)images;
- (void)dealloc;
- (void)prepareAnimatedImageWithData:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithImageData:(id)arg1 mode:(unsigned long long)arg2 scale:(double)arg3;
- (id)initWithImageData:(id)arg1 scale:(double)arg2;
- (id)initWithImageData:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithImageData:(id)arg1;
@property(readonly, nonatomic) unsigned long long frameCacheSizeCurrent;

@end
