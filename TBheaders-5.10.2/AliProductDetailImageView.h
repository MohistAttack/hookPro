//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "TBDetailBigPhotoBrowserDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class NSString, TBDetailPhotoAnimationModel, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface AliProductDetailImageView : UIImageView <TBDetailBigPhotoBrowserDelegate, UIActionSheetDelegate>
{
    _Bool _isSuccessDownload;	// 8 = 0x8
    NSString *_imagePath;	// 16 = 0x10
    NSString *_eventToken;	// 24 = 0x18
    CDUnknownBlockType _trackBlock;	// 32 = 0x20
    UITapGestureRecognizer *_recognizer;	// 40 = 0x28
    UILongPressGestureRecognizer *_longTapRec;	// 48 = 0x30
    TBDetailPhotoAnimationModel *_defaultPhotoModel;	// 56 = 0x38
}

@property(nonatomic) _Bool isSuccessDownload; // @synthesize isSuccessDownload=_isSuccessDownload;
@property(retain, nonatomic) TBDetailPhotoAnimationModel *defaultPhotoModel; // @synthesize defaultPhotoModel=_defaultPhotoModel;
@property(retain, nonatomic) UILongPressGestureRecognizer *longTapRec; // @synthesize longTapRec=_longTapRec;
@property(retain, nonatomic) UITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(copy, nonatomic) CDUnknownBlockType trackBlock; // @synthesize trackBlock=_trackBlock;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (void).cxx_destruct;
- (void)photoBrowserWillDismiss:(id)arg1 imageInfo:(id)arg2;
- (id)photoBrowser:(id)arg1 photoModelAtIndex:(unsigned long long)arg2;
- (void)saveImage:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)savePhoto;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)longPressHandler:(id)arg1;
- (void)showBigImage:(id)arg1;
- (void)downLoadWithImagePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
