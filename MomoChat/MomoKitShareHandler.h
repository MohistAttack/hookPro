//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDWebShareHandlerDelegate.h"

@class MBProgressHUD, MDWebShareHandler, MKWebView, NSArray, NSString;

@interface MomoKitShareHandler : NSObject <MDWebShareHandlerDelegate>
{
    MKWebView *_webView;
    MDWebShareHandler *_shareHandler;
    MBProgressHUD *_hud;
    NSArray *_availabelShareTypes;
}

@property(retain, nonatomic) NSArray *availabelShareTypes; // @synthesize availabelShareTypes=_availabelShareTypes;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) MDWebShareHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) MKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)shouldChangeCanShareStateToValue:(_Bool)arg1;
- (void)handleDirectlyShareWithDictionary:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)handleShareActionWithInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
