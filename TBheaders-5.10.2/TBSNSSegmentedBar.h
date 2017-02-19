//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol TBSNSSegmentedBarDelegate;

@interface TBSNSSegmentedBar : UIView
{
    int _segmentSelectedIndex;	// 8 = 0x8
    id <TBSNSSegmentedBarDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _segmentBlock;	// 24 = 0x18
    UIImageView *_leftImageView;	// 32 = 0x20
    UIImageView *_rightImageView;	// 40 = 0x28
    UILabel *_leftLabel;	// 48 = 0x30
    UILabel *_rightLabel;	// 56 = 0x38
    UIButton *_leftButton;	// 64 = 0x40
    UIButton *_rightButton;	// 72 = 0x48
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(copy, nonatomic) CDUnknownBlockType segmentBlock; // @synthesize segmentBlock=_segmentBlock;
@property(nonatomic) __weak id <TBSNSSegmentedBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int segmentSelectedIndex; // @synthesize segmentSelectedIndex=_segmentSelectedIndex;
- (void).cxx_destruct;
- (void)clickSegmentBar:(id)arg1;
- (void)segmentDidSelectedWithBlock:(CDUnknownBlockType)arg1;
- (void)rightSegmentSelected;
- (void)leftSegmentSelected;
- (void)setLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)setLeftImage:(id)arg1 rightImage:(id)arg2;
- (id)initWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithLeftImage:(id)arg1 rightImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
