//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeSelectModel.h"

@class TBTradeShipDatePickerModel;

@interface TBTradeDeliveryMethodModel : TBTradeSelectModel
{
    TBTradeShipDatePickerModel *_shipDatePickerModel;	// 8 = 0x8
}

@property(retain, nonatomic) TBTradeShipDatePickerModel *shipDatePickerModel; // @synthesize shipDatePickerModel=_shipDatePickerModel;
- (void).cxx_destruct;
- (void)setEngine:(id)arg1;
- (void)setSelectedId:(id)arg1;
- (void)loadOptionArray:(id)arg1;

@end
