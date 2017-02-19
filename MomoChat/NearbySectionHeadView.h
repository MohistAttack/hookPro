//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface NearbySectionHeadView : UIView
{
    UIImageView *iconImageView;
    UIButton *backgroundBtn;
    UILabel *titleLabel;
    UILabel *distanceLabel;
    int _section;
    id <NearbySectionHeadViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NearbySectionHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int section; // @synthesize section=_section;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)setRightLabelText:(id)arg1;
- (void)setLeftLabelText:(id)arg1;
- (void)buttonPressed;
- (void)setFoldEnabled:(_Bool)arg1;
- (void)setFolded:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end
