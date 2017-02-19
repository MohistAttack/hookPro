//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDSegmentViewController.h"

#import "MDGameDetailViewControllerDelegate.h"

@class NSString;

@interface MDGameEntranceController : MDSegmentViewController <MDGameDetailViewControllerDelegate>
{
    _Bool _viewAppeared;
    _Bool _segmentAnimated;
    _Bool _profileLoaded;
    NSString *_currentGameID;
}

@property(nonatomic, getter=isProfileLoaded) _Bool profileLoaded; // @synthesize profileLoaded=_profileLoaded;
@property(nonatomic, getter=isSegmentAnimated) _Bool segmentAnimated; // @synthesize segmentAnimated=_segmentAnimated;
@property(nonatomic, getter=isViewAppeared) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(copy, nonatomic) NSString *currentGameID; // @synthesize currentGameID=_currentGameID;
- (void)gameProfileDidFinishLoading:(id)arg1;
- (void)currentGameProfileDidFinishLoading:(id)arg1;
- (void)doSegmentControlUpAnimation;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)segmentControl;
- (void)dealloc;
- (id)initWithGameID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
