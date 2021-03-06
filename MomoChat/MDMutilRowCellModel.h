//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDPersonalProfileCellModel.h"

@class NSArray, NSString;

@interface MDMutilRowCellModel : MDPersonalProfileCellModel
{
    NSArray *_itemList;
    long long _totalCount;
    NSString *_placeHolder;
}

+ (id)cellModelWithTitle:(id)arg1 itemList:(id)arg2 totalCount:(long long)arg3;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (id)initWithTitle:(id)arg1 itemList:(id)arg2 totalCount:(long long)arg3;
- (void)dealloc;

@end

