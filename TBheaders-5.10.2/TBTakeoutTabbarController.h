//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTabbarController.h"

@class TBTakeoutHomeViewController, TBTakeoutMeViewController, TBTakeoutOrderViewController;

@interface TBTakeoutTabbarController : TBTabbarController
{
    TBTakeoutHomeViewController *_homeViewController;	// 16 = 0x10
    TBTakeoutOrderViewController *_orderViewController;	// 24 = 0x18
    TBTakeoutMeViewController *_meViewController;	// 32 = 0x20
}

+ (_Bool)tbNeedNavibar;
@property(retain, nonatomic) TBTakeoutMeViewController *meViewController; // @synthesize meViewController=_meViewController;
@property(retain, nonatomic) TBTakeoutOrderViewController *orderViewController; // @synthesize orderViewController=_orderViewController;
@property(retain, nonatomic) TBTakeoutHomeViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
- (void).cxx_destruct;
- (void)updateTabbarItems:(id)arg1;
- (void)tbTabbar:(id)arg1 didSelectItem:(id)arg2;
- (void)setupTabbars;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
