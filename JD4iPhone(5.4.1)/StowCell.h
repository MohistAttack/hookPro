//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDIcon, JDImageView, JDPriceLabel, MyStowPromotionView, NSString, ProductModel, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface StowCell : UITableViewCell
{
    JDImageView *_productImageView;
    UILabel *_titleLabel;
    JDPriceLabel *_priceLabel;
    MyStowPromotionView *reducePriceView_;
    UIImageView *remainSeveralBgView;
    UILabel *remainSeveralLable;
    UIView *functionView;
    UIButton *m_reduceNotiBtn;
    UIButton *arrivalNoticeBtn;
    UIButton *similarGoods;
    UIImageView *soldOutBg;
    UILabel *soldOutLable;
    UIView *m_bottomLine;
    int m_notiSwitch;
    int recomConfig;
    int similarConfig;
    int storeNotifyConfig;
    int addToCartConfig;
    UIButton *m_showMoreBtn;
    long long m_stockStateId;
    UIImageView *noStockImageView;
    UIView *diffPriceView;
    UIImageView *diffPriceDownArrow;
    UILabel *diffPriceLable;
    JDIcon *mobilePriceImageView;
    double initialTouchPositionX;
    _Bool isSoldOut;
    _Bool isPresell;
    _Bool isRemainSeveral;
    _Bool isHideAddingCartButton;
    UIButton *addingCartButton;
    UIImageView *signImage;
    UITapGestureRecognizer *tapGesture;
    _Bool isPriceDown;
    _Bool isLastCell;
    _Bool _isEditCancleStowSeveral;
    _Bool _contextMenuHidden;
    _Bool _shouldDisplayContextMenuView;
    _Bool _editSelected;
    id <StowCellDelegate> _delegate;
    UIView *_contextMenuView;
    UIView *_actualContentView;
    ProductModel *model_;
    double cellHeight;
    NSString *_followingButtonTitle;
    double _menuOptionButtonTitlePadding;
    double _menuOptionsAnimationDuration;
    double _bounceValue;
    UIButton *_followingButton;
}

+ (_Bool)isPromotionWith:(id)arg1;
@property(nonatomic) _Bool editSelected; // @synthesize editSelected=_editSelected;
@property(nonatomic) _Bool shouldDisplayContextMenuView; // @synthesize shouldDisplayContextMenuView=_shouldDisplayContextMenuView;
@property(nonatomic, getter=isContextMenuHidden) _Bool contextMenuHidden; // @synthesize contextMenuHidden=_contextMenuHidden;
@property(retain, nonatomic) UIButton *followingButton; // @synthesize followingButton=_followingButton;
@property(nonatomic) _Bool isEditCancleStowSeveral; // @synthesize isEditCancleStowSeveral=_isEditCancleStowSeveral;
@property(nonatomic) double bounceValue; // @synthesize bounceValue=_bounceValue;
@property(nonatomic) double menuOptionsAnimationDuration; // @synthesize menuOptionsAnimationDuration=_menuOptionsAnimationDuration;
@property(nonatomic) double menuOptionButtonTitlePadding; // @synthesize menuOptionButtonTitlePadding=_menuOptionButtonTitlePadding;
@property(copy, nonatomic) NSString *followingButtonTitle; // @synthesize followingButtonTitle=_followingButtonTitle;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell;
@property(nonatomic) _Bool isPriceDown; // @synthesize isPriceDown;
@property(nonatomic) double initialTouchPositionX; // @synthesize initialTouchPositionX;
@property(nonatomic) double cellHeight; // @synthesize cellHeight;
@property(retain, nonatomic) ProductModel *model; // @synthesize model=model_;
@property(retain, nonatomic) UIView *actualContentView; // @synthesize actualContentView=_actualContentView;
@property(retain, nonatomic) UIView *contextMenuView; // @synthesize contextMenuView=_contextMenuView;
@property(retain, nonatomic) MyStowPromotionView *m_reducePriceView; // @synthesize m_reducePriceView=reducePriceView_;
@property(retain, nonatomic) JDPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(nonatomic) __weak id <StowCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)similarGoodsClicked:(id)arg1;
- (void)arrivalNoticeBtnClicked:(id)arg1;
- (void)stowBtnClicked:(id)arg1;
- (void)moreBtnClicked:(id)arg1;
- (void)addingCartTapped;
- (void)followingButtonTapped;
- (void)removeTempStowPromotionView;
- (void)setListMenuOptionsViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handlePan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)contextMenuWidth;
- (void)tapGestureHandler:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setWithModel:(id)arg1 andConfig:(id)arg2 cellHeight:(double)arg3;
- (void)setupSubViews:(struct CGRect)arg1;
- (void)setUp:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellHeight:(float)arg3;
- (void)dealloc;

@end
