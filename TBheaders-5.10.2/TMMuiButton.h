//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, TMMuiLabel, UIColor;

@interface TMMuiButton : UIButton
{
    _Bool _isNormalState;	// 8 = 0x8
    _Bool _useCustomLabel;	// 9 = 0x9
    UIColor *_normalBGColor;	// 16 = 0x10
    UIColor *_normalBorderColor;	// 24 = 0x18
    UIColor *_highLightBGColor;	// 32 = 0x20
    UIColor *_disableBGColor;	// 40 = 0x28
    UIColor *_highLightborderColor;	// 48 = 0x30
    UIColor *_disableBorderColor;	// 56 = 0x38
    double _highLightborderWidth;	// 64 = 0x40
    double _disableBorderWidth;	// 72 = 0x48
    double _normalBorderWidth;	// 80 = 0x50
    TMMuiLabel *_customLabel;	// 88 = 0x58
    CDUnknownBlockType _actionBlock;	// 96 = 0x60
    NSMutableDictionary *_textDic;	// 104 = 0x68
}

+ (id)muiButtonWithType:(long long)arg1 useCustomLabel:(_Bool)arg2;
+ (id)muiButtonWithType:(long long)arg1;
@property(nonatomic) _Bool useCustomLabel; // @synthesize useCustomLabel=_useCustomLabel;
@property(retain, nonatomic) NSMutableDictionary *textDic; // @synthesize textDic=_textDic;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) TMMuiLabel *customLabel; // @synthesize customLabel=_customLabel;
@property(nonatomic) double normalBorderWidth; // @synthesize normalBorderWidth=_normalBorderWidth;
@property(nonatomic) double disableBorderWidth; // @synthesize disableBorderWidth=_disableBorderWidth;
@property(nonatomic) double highLightborderWidth; // @synthesize highLightborderWidth=_highLightborderWidth;
@property(retain, nonatomic) UIColor *disableBorderColor; // @synthesize disableBorderColor=_disableBorderColor;
@property(retain, nonatomic) UIColor *highLightborderColor; // @synthesize highLightborderColor=_highLightborderColor;
@property(retain, nonatomic) UIColor *disableBGColor; // @synthesize disableBGColor=_disableBGColor;
@property(retain, nonatomic) UIColor *highLightBGColor; // @synthesize highLightBGColor=_highLightBGColor;
@property(retain, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor=_normalBorderColor;
@property(retain, nonatomic) UIColor *normalBGColor; // @synthesize normalBGColor=_normalBGColor;
@property(nonatomic) _Bool isNormalState; // @synthesize isNormalState=_isNormalState;
- (void).cxx_destruct;
- (id)keyForState:(unsigned long long)arg1;
- (void)callActionBlock:(id)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)muiButtonHandleControlEvent:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;

@end
