//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDStoreNetwork, NSArray, NSDictionary, NSString, UIImage, UIImageView, UILabel, UIScrollView, UITableView, UIView;

@interface JDMNewCinemaAndMovieViewController : JDViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool isGuanzhuYES;
    JDStoreNetwork *m_network;
    long long m_seletedDateIndex;
    long long m_selectedMovieIndex;
    _Bool reloadingMovie;
    NSDictionary *m_movieDic;
    NSDictionary *m_cinemaDic;
    UILabel *m_cinemaName;
    UILabel *m_cinemaAddress;
    UIImageView *m_guanzhuImg;
    UITableView *m_movieScrollView;
    NSArray *m_movieArray;
    UILabel *m_movieName;
    UIScrollView *m_contentView;
    NSString *m_movieId;
    NSString *m_cinemaId;
    NSArray *m_moviePlanShowList;
    UITableView *m_moviePlanShowTable;
    UIView *m_planListView;
    NSDictionary *m_moviePlanShowDic;
    NSArray *m_couponArray;
    UIView *m_couponView;
    NSArray *m_playListArray;
    NSDictionary *m_selectedPlanDic;
    UIView *m_movieNameView;
    UIView *m_movieNameSepLine;
    UIView *m_moviePlanlistSepLine;
    UIImageView *m_headerView;
    UIImageView *m_blurImgView;
    UIImage *m_blurImage;
    UILabel *m_scoreLabel;
    NSString *m_latitude;
    NSString *m_longitude;
    UIView *_tipContainer;
}

@property(retain, nonatomic) UIView *tipContainer; // @synthesize tipContainer=_tipContainer;
@property(retain, nonatomic) NSString *m_longitude; // @synthesize m_longitude;
@property(retain, nonatomic) NSString *m_latitude; // @synthesize m_latitude;
@property(retain, nonatomic) UILabel *m_scoreLabel; // @synthesize m_scoreLabel;
@property(retain, nonatomic) UIImage *m_blurImage; // @synthesize m_blurImage;
@property(retain, nonatomic) UIImageView *m_blurImgView; // @synthesize m_blurImgView;
@property(retain, nonatomic) UIImageView *m_headerView; // @synthesize m_headerView;
@property(retain, nonatomic) UIView *m_moviePlanlistSepLine; // @synthesize m_moviePlanlistSepLine;
@property(retain, nonatomic) UIView *m_movieNameSepLine; // @synthesize m_movieNameSepLine;
@property(retain, nonatomic) UIView *m_movieNameView; // @synthesize m_movieNameView;
@property(retain, nonatomic) NSDictionary *m_selectedPlanDic; // @synthesize m_selectedPlanDic;
@property(retain, nonatomic) NSArray *m_playListArray; // @synthesize m_playListArray;
@property(retain, nonatomic) UIView *m_couponView; // @synthesize m_couponView;
@property(retain, nonatomic) NSArray *m_couponArray; // @synthesize m_couponArray;
@property(retain, nonatomic) NSDictionary *m_moviePlanShowDic; // @synthesize m_moviePlanShowDic;
@property(retain, nonatomic) UIView *m_planListView; // @synthesize m_planListView;
@property(retain, nonatomic) UITableView *m_moviePlanShowTable; // @synthesize m_moviePlanShowTable;
@property(retain, nonatomic) NSArray *m_moviePlanShowList; // @synthesize m_moviePlanShowList;
@property(retain, nonatomic) NSString *m_cinemaId; // @synthesize m_cinemaId;
@property(retain, nonatomic) NSString *m_movieId; // @synthesize m_movieId;
@property(retain, nonatomic) UIScrollView *m_contentView; // @synthesize m_contentView;
@property(retain, nonatomic) UILabel *m_movieName; // @synthesize m_movieName;
@property(retain, nonatomic) NSArray *m_movieArray; // @synthesize m_movieArray;
@property(retain, nonatomic) UITableView *m_movieScrollView; // @synthesize m_movieScrollView;
@property(retain, nonatomic) UIImageView *m_guanzhuImg; // @synthesize m_guanzhuImg;
@property(retain, nonatomic) UILabel *m_cinemaAddress; // @synthesize m_cinemaAddress;
@property(retain, nonatomic) UILabel *m_cinemaName; // @synthesize m_cinemaName;
@property(retain, nonatomic) NSDictionary *m_cinemaDic; // @synthesize m_cinemaDic;
@property(retain, nonatomic) NSDictionary *m_movieDic; // @synthesize m_movieDic;
- (void)removeReloadView;
- (void)showReloadView;
- (void)reconnect;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)doSelectMovie:(id)arg1;
- (void)doSelectDate:(id)arg1;
- (void)setPlanListView:(id)arg1;
- (void)gotoSeatChoose:(id)arg1;
- (void)scrollToRightMovie:(id)arg1;
- (void)jump2Coupon:(id)arg1;
- (void)setupCouponView;
- (void)countContentSize;
- (void)fetchCouponData;
- (void)showOnlyCoupon;
- (void)fetchMovieData;
- (void)fetchMoviePlayListData;
- (void)fetchCinemaInfoData;
- (void)setCinemaInfo;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)guanzhuClick;
- (void)setChangquProperty:(long long)arg1;
- (void)doTapOnNameMaskView;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
