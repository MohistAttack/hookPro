//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDDatabase.h"

@interface BrowseHistoryDao : JDDatabase
{
}

- (id)getHistoryForBHModels:(long long)arg1 pageNum:(long long)arg2 ordery:(id)arg3;
- (id)getHistoryForBHModels:(long long)arg1;
- (_Bool)deleteProductWithBHModels:(id)arg1;
- (id)getHistory:(long long)arg1 pageNum:(long long)arg2 ordery:(id)arg3;
- (id)getHistory:(long long)arg1;
- (_Bool)deleteProduct:(id)arg1;
- (id)getProductById:(id)arg1;
- (_Bool)saveProduct:(id)arg1;
- (_Bool)updateHistory:(id)arg1;
- (_Bool)addBrowseHistory:(id)arg1;
- (_Bool)deleteAllBrowseHistory;
- (_Bool)deleteProductWithSku:(id)arg1;
- (long long)getCount;
- (void)checkTable;

@end
