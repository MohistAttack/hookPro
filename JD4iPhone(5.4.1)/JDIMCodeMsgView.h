//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDIMCellView.h"

@class JDIMUINetImageView, UILabel;

@interface JDIMCodeMsgView : JDIMCellView
{
    UILabel *_titleLabel;
    JDIMUINetImageView *_codeImage;
}

@property(retain, nonatomic) JDIMUINetImageView *codeImage; // @synthesize codeImage=_codeImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)initUI;

@end
