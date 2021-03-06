//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class MLRoomDecorationMSMainView, MLRoomDecorationMovableStickerBottomBarView, MLShowDetailHandler, NSSet, NSString, UIButton, UIView;

@interface MLRoomDecorationMovableStickerController : UIViewController <UIViewControllerTransitioningDelegate>
{
    MLShowDetailHandler *_detailHandler;
    CDUnknownBlockType _limitRespone;
    CDUnknownBlockType _didDismissMovableStickerChooseView;
    NSSet *_selectedIDSet;
    MLRoomDecorationMSMainView *_stickerChooseV;
    MLRoomDecorationMovableStickerBottomBarView *_bottomBarV;
    CDUnknownBlockType _didSelectMovableSticker;
    CDUnknownBlockType _didRemoveMovableSticker;
    UIView *_effectView;
    UIButton *_innerCloseBtn;
}

@property(retain, nonatomic) UIButton *innerCloseBtn; // @synthesize innerCloseBtn=_innerCloseBtn;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(copy, nonatomic) CDUnknownBlockType didRemoveMovableSticker; // @synthesize didRemoveMovableSticker=_didRemoveMovableSticker;
@property(copy, nonatomic) CDUnknownBlockType didSelectMovableSticker; // @synthesize didSelectMovableSticker=_didSelectMovableSticker;
@property(retain, nonatomic) MLRoomDecorationMovableStickerBottomBarView *bottomBarV; // @synthesize bottomBarV=_bottomBarV;
@property(retain, nonatomic) MLRoomDecorationMSMainView *stickerChooseV; // @synthesize stickerChooseV=_stickerChooseV;
@property(copy, nonatomic) NSSet *selectedIDSet; // @synthesize selectedIDSet=_selectedIDSet;
@property(copy, nonatomic) CDUnknownBlockType didDismissMovableStickerChooseView; // @synthesize didDismissMovableStickerChooseView=_didDismissMovableStickerChooseView;
@property(copy, nonatomic) CDUnknownBlockType limitRespone; // @synthesize limitRespone=_limitRespone;
@property(retain, nonatomic) MLShowDetailHandler *detailHandler; // @synthesize detailHandler=_detailHandler;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)updateSubviewFrames;
- (void)dataRequest;
- (void)setupSubviews;
- (void)setCloseButtonFrame:(struct CGRect)arg1 withImage:(id)arg2;
- (void)didSelectSticker:(CDUnknownBlockType)arg1 shouldRemoveSticker:(CDUnknownBlockType)arg2;
- (void)dismissSelf;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

