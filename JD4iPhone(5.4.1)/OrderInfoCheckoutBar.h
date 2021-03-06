//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIButton, UILabel;

@interface OrderInfoCheckoutBar : UIImageView
{
    UIButton *checkoutBt_;
    UILabel *price_;
    UILabel *iousPayLabel_;
    id <OrderInfoCheckoutBarDelegate> _delegate;
}

@property(nonatomic) __weak id <OrderInfoCheckoutBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *checkoutBt; // @synthesize checkoutBt=checkoutBt_;
- (void).cxx_destruct;
- (void)setSubmitButtonTitle:(id)arg1 state:(unsigned long long)arg2;
- (void)checkoutAction;
- (void)setCheckoutActualPayment:(id)arg1 localWritePricEexplain:(_Bool)arg2;
- (void)setCheckoutActualPayment:(id)arg1 iousPay:(id)arg2 localWritePricEexplain:(_Bool)arg3;
- (id)initUI;

@end

