//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class GetSubOrderModel, JDButton, childOrderVoListItemModel;

@interface OrderFinishOnlyPayView : JDView
{
    childOrderVoListItemModel *_childOrderModelForPay;
    JDButton *_payButton;
    GetSubOrderModel *_mixOrderModel;
}

@property(retain, nonatomic) GetSubOrderModel *mixOrderModel; // @synthesize mixOrderModel=_mixOrderModel;
@property(retain, nonatomic) JDButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) childOrderVoListItemModel *childOrderModelForPay; // @synthesize childOrderModelForPay=_childOrderModelForPay;
- (void).cxx_destruct;
- (id)getMsgLabel;
- (id)getPayButton;
- (id)getLineView;
- (id)getStatusView:(id)arg1 withHeight:(long long)arg2;
- (id)getPriceLabel:(id)arg1 withHeight:(long long)arg2;
- (id)getPaymentTypeLabel:(id)arg1 withHeight:(long long)arg2;
- (id)getPaymentViewWithModel:(id)arg1;
- (void)setMixOrderWithOrderModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
