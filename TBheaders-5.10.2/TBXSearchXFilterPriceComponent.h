//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchXFilterBaseComponent.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, TBXSearchXFilterPriceModel, UITextField, UIView;

@interface TBXSearchXFilterPriceComponent : TBXSearchXFilterBaseComponent <UITextFieldDelegate>
{
    TBXSearchXFilterPriceModel *_model;	// 8 = 0x8
    UIView *_priInputBackgroundView;	// 16 = 0x10
    UITextField *_startPriceTextField;	// 24 = 0x18
    UITextField *_endPriceTextField;	// 32 = 0x20
    UIView *_midSplitLineView;	// 40 = 0x28
    NSMutableArray *_priceRangeButtonArray;	// 48 = 0x30
    UIView *_keyboardAttachView;	// 56 = 0x38
}

@property(retain, nonatomic) UIView *keyboardAttachView; // @synthesize keyboardAttachView=_keyboardAttachView;
@property(retain, nonatomic) NSMutableArray *priceRangeButtonArray; // @synthesize priceRangeButtonArray=_priceRangeButtonArray;
@property(retain, nonatomic) UIView *midSplitLineView; // @synthesize midSplitLineView=_midSplitLineView;
@property(retain, nonatomic) UITextField *endPriceTextField; // @synthesize endPriceTextField=_endPriceTextField;
@property(retain, nonatomic) UITextField *startPriceTextField; // @synthesize startPriceTextField=_startPriceTextField;
@property(retain, nonatomic) UIView *priInputBackgroundView; // @synthesize priInputBackgroundView=_priInputBackgroundView;
@property(retain, nonatomic) TBXSearchXFilterPriceModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)ishighlight;
- (void)searchWithStartPrice:(id)arg1 endPrice:(id)arg2;
- (void)doneWithNumberPad:(id)arg1;
- (void)priceRangeButtonClicked:(id)arg1;
- (void)renderPriceRange;
- (void)renderPriInput;
- (void)renderUI;
- (void)reset;
- (void)componentInitWithService:(id)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
