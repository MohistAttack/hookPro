//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UICollectionView, UICollectionViewLayout;

@protocol JHSUICollectionSectionFactory <NSObject>
@property(nonatomic) _Bool hiddenFooter;
@property(nonatomic) _Bool hiddenHeader;
@property(nonatomic) struct CGSize footerSize;
@property(nonatomic) struct CGSize headerSize;
@property(nonatomic) long long index;
@property(copy, nonatomic) NSString *footerIdentifier;
@property(copy, nonatomic) NSString *headerIdentifier;
@property(nonatomic) Class footerClass;
@property(nonatomic) Class headerClass;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
@end

