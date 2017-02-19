//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDRankActivities, JDRankNumView, NSIndexPath, NSString, UIImageView, UILabel;

@interface JDRankActivitiesCell : UITableViewCell
{
    NSString *_testtype;
    NSString *_fromname;
    NSIndexPath *_indexPath;
    id <JDRankActivitiesCellDelegate> _delegate;
    UILabel *_catename;
    UILabel *_activitiesname;
    UIImageView *_line;
    JDRankNumView *_rankingView;
    UILabel *_isjd;
    UIImageView *_picture1;
    UIImageView *_picture2;
    UIImageView *_picture3;
    UILabel *_follownum;
    UIImageView *_point;
    UILabel *_note;
    UILabel *_note1;
    UILabel *_note2;
    UILabel *_note3;
    UILabel *_endtimemin;
    UILabel *_endtimehour;
    UIImageView *_topbannerview;
    UIImageView *_contentView0;
    UIImageView *_contentView1;
    UILabel *_updatePrompt;
    UIImageView *_updatePromptview;
    JDRankActivities *_activitymodel;
}

@property(retain, nonatomic) JDRankActivities *activitymodel; // @synthesize activitymodel=_activitymodel;
@property(retain, nonatomic) UIImageView *updatePromptview; // @synthesize updatePromptview=_updatePromptview;
@property(retain, nonatomic) UILabel *updatePrompt; // @synthesize updatePrompt=_updatePrompt;
@property(retain, nonatomic) UIImageView *contentView1; // @synthesize contentView1=_contentView1;
@property(retain, nonatomic) UIImageView *contentView0; // @synthesize contentView0=_contentView0;
@property(retain, nonatomic) UIImageView *topbannerview; // @synthesize topbannerview=_topbannerview;
@property(retain, nonatomic) UILabel *endtimehour; // @synthesize endtimehour=_endtimehour;
@property(retain, nonatomic) UILabel *endtimemin; // @synthesize endtimemin=_endtimemin;
@property(retain, nonatomic) UILabel *note3; // @synthesize note3=_note3;
@property(retain, nonatomic) UILabel *note2; // @synthesize note2=_note2;
@property(retain, nonatomic) UILabel *note1; // @synthesize note1=_note1;
@property(retain, nonatomic) UILabel *note; // @synthesize note=_note;
@property(retain, nonatomic) UIImageView *point; // @synthesize point=_point;
@property(retain, nonatomic) UILabel *follownum; // @synthesize follownum=_follownum;
@property(retain, nonatomic) UIImageView *picture3; // @synthesize picture3=_picture3;
@property(retain, nonatomic) UIImageView *picture2; // @synthesize picture2=_picture2;
@property(retain, nonatomic) UIImageView *picture1; // @synthesize picture1=_picture1;
@property(retain, nonatomic) UILabel *isjd; // @synthesize isjd=_isjd;
@property(retain, nonatomic) JDRankNumView *rankingView; // @synthesize rankingView=_rankingView;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *activitiesname; // @synthesize activitiesname=_activitiesname;
@property(retain, nonatomic) UILabel *catename; // @synthesize catename=_catename;
@property(nonatomic) id <JDRankActivitiesCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSString *fromname; // @synthesize fromname=_fromname;
@property(retain, nonatomic) NSString *testtype; // @synthesize testtype=_testtype;
- (void)dealloc;
- (void)turntoactivityVC:(id)arg1;
- (void)setdata:(id)arg1 upDatePrompt:(id)arg2;
- (void)setData:(id)arg1;
- (double)getpicturesize;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
