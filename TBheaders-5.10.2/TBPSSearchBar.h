//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;
@protocol TBPSSearchBarDelegate;

@interface TBPSSearchBar : UIView <UITextFieldDelegate>
{
    UILabel *_placeholderIcon;	// 8 = 0x8
    UILabel *_placeholderText;	// 16 = 0x10
    NSString *_category;	// 24 = 0x18
    UITextField *_textField;	// 32 = 0x20
    UILabel *_leftView;	// 40 = 0x28
    UIView *_lineView;	// 48 = 0x30
    id <TBPSSearchBarDelegate> _delegate;	// 56 = 0x38
}

@property(nonatomic) __weak id <TBPSSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *keyWord;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (void)refresh;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

