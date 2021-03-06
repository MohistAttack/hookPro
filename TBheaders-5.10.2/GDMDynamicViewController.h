//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMViewController.h"

#import "GDMGoodPriceViewDelegate-Protocol.h"

@class GDMDynamicView, NSString, NSURL;

@interface GDMDynamicViewController : GDMViewController <GDMGoodPriceViewDelegate>
{
    GDMDynamicView *_dynamicView;	// 16 = 0x10
    NSURL *_sharedUrl;	// 24 = 0x18
}

@property(retain, nonatomic) NSURL *sharedUrl; // @synthesize sharedUrl=_sharedUrl;
- (void).cxx_destruct;
- (id)utPageName;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)onReloadErrorCallBack;
- (void)GDMDynamicViewShouldHideErrorView:(id)arg1;
- (void)GDMDynamicViewShouldShowErrorView:(id)arg1 error:(id)arg2;
- (void)addFriendFavor;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

