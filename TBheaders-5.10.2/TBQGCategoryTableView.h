//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBQGGoodsTableView.h"

@class NSString;

@interface TBQGCategoryTableView : TBQGGoodsTableView
{
    long long _pageCount;	// 240 = 0xf0
    NSString *_childCategoryId;	// 248 = 0xf8
    long long _totalCount;	// 256 = 0x100
    long long _numberOfPages;	// 264 = 0x108
    long long _currentPage;	// 272 = 0x110
    CDUnknownBlockType _loadMorePageWithActionHandler;	// 280 = 0x118
}

@property(copy, nonatomic) CDUnknownBlockType loadMorePageWithActionHandler; // @synthesize loadMorePageWithActionHandler=_loadMorePageWithActionHandler;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSString *childCategoryId; // @synthesize childCategoryId=_childCategoryId;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
- (void).cxx_destruct;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

@end
