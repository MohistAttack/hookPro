//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class JDImageView, TTTTabBarModel;

@interface TTTTabBarButton : UIButton
{
    TTTTabBarModel *_tabbarModel;
    unsigned long long _buttonIndex;
    JDImageView *_backImageView;
    JDImageView *_selectedImageView;
}

@property(retain, nonatomic) JDImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) JDImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) unsigned long long buttonIndex; // @synthesize buttonIndex=_buttonIndex;
@property(retain, nonatomic) TTTTabBarModel *tabbarModel; // @synthesize tabbarModel=_tabbarModel;
- (void).cxx_destruct;
- (void)shouldSelectButton:(_Bool)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
