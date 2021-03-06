//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableArray;

@interface WareBRecommendSegmentView : UIView
{
    NSMutableArray *_mutableArray;
    long long _currentBtnIndex;
    id <DidTapSegmentBtnDelegate> _delegate;
    NSDictionary *_segmentBtnDictionary;
}

@property(retain, nonatomic) NSDictionary *segmentBtnDictionary; // @synthesize segmentBtnDictionary=_segmentBtnDictionary;
@property(nonatomic) __weak id <DidTapSegmentBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentBtnIndex; // @synthesize currentBtnIndex=_currentBtnIndex;
@property(copy, nonatomic) NSMutableArray *mutableArray; // @synthesize mutableArray=_mutableArray;
- (void).cxx_destruct;
- (id)creatButton;
- (void)didTapped:(id)arg1;
- (id)addBtnToSegmentView;
- (void)updateSegmentBtn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

