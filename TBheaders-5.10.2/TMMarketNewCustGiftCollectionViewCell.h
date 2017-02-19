//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, TMMarketNewCustGiftModel, UIButton, UICollectionView, UIImageView, UILabel;
@protocol TMMarketConfig;

@interface TMMarketNewCustGiftCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    TMMarketNewCustGiftModel *_gift;	// 16 = 0x10
    NSIndexPath *_indexPath;	// 24 = 0x18
    UICollectionView *_parent;	// 32 = 0x20
    id <TMMarketConfig> _config;	// 40 = 0x28
    UILabel *_amountLabel;	// 48 = 0x30
    UILabel *_shopLabel;	// 56 = 0x38
    UIButton *_drawButton;	// 64 = 0x40
    UIImageView *_soldOutImageView;	// 72 = 0x48
}

@property(retain, nonatomic) UIImageView *soldOutImageView; // @synthesize soldOutImageView=_soldOutImageView;
@property(retain, nonatomic) UIButton *drawButton; // @synthesize drawButton=_drawButton;
@property(retain, nonatomic) UILabel *shopLabel; // @synthesize shopLabel=_shopLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) id <TMMarketConfig> config; // @synthesize config=_config;
@property(nonatomic) __weak UICollectionView *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) TMMarketNewCustGiftModel *gift; // @synthesize gift=_gift;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)onDrawButtonTapped:(id)arg1;
- (struct CGSize)caculateImageViewWidthWithImageUrl:(id)arg1 imageViewMaxHeight:(double)arg2 imageViewMaxWidth:(double)arg3;
- (void)layoutDrawButton;
- (void)layoutSoldOutImageView;
- (void)layoutShopLabel;
- (void)layoutAmountLabel;
- (void)layoutImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
