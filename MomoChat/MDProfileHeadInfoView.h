//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDGroupProfileSiteBanner, UIImageView, UILabel;

@interface MDProfileHeadInfoView : UIView
{
    UIImageView *_imgView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MDGroupProfileSiteBanner *_locationDesView;
    CDUnknownBlockType _addressViewBlock;
}

@property(copy, nonatomic) CDUnknownBlockType addressViewBlock; // @synthesize addressViewBlock=_addressViewBlock;
@property(retain, nonatomic) MDGroupProfileSiteBanner *locationDesView; // @synthesize locationDesView=_locationDesView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (struct CGRect)subContentFrame;
- (id)subContent;
- (void)updateNoImgViewWithModel:(id)arg1;
- (void)updateHasImgViewWithModel:(id)arg1;
- (void)setClickAddressViewBlock:(CDUnknownBlockType)arg1;
- (void)updateViewWithModel:(id)arg1;

@end
