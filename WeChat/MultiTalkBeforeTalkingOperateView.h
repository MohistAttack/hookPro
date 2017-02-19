//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface MultiTalkBeforeTalkingOperateView : UIView
{
    UILabel *_m_titleLabel;
    UILabel *_m_descriptionLabel;
    UILabel *_m_memberDescLabel;
    UIButton *_m_hangupButton;
    UIButton *_m_enterCallButton;
    id <MultiTalkBeforeTalkingOperateViewDelegate> _m_delegate;
}

@property(nonatomic) __weak id <MultiTalkBeforeTalkingOperateViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIButton *m_enterCallButton; // @synthesize m_enterCallButton=_m_enterCallButton;
@property(retain, nonatomic) UIButton *m_hangupButton; // @synthesize m_hangupButton=_m_hangupButton;
@property(retain, nonatomic) UILabel *m_memberDescLabel; // @synthesize m_memberDescLabel=_m_memberDescLabel;
@property(retain, nonatomic) UILabel *m_descriptionLabel; // @synthesize m_descriptionLabel=_m_descriptionLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onEnterButtonClick;
- (void)onHangupButtonClick;
- (void)initEnterCallButton;
- (void)initHangupButton;
- (void)initMemberDescLabel;
- (void)initDecLabel;
- (void)initTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateDelegate:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)showOperateView;
- (void)hideOperateView;

@end
