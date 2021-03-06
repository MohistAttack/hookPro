//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface TBTradeDetailRecommendLoadView : UIView
{
    UIActivityIndicatorView *_loadingView;	// 8 = 0x8
    UILabel *_tipsLabel;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIImageView *_defaultImageView;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)adjustTipsLabelPositionForLoadingStatus:(_Bool)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

