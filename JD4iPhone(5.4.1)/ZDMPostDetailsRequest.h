//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZDMRequest.h"

@class NSString, ZDMPost;

@interface ZDMPostDetailsRequest : ZDMRequest
{
    NSString *_postIdentifier;
    ZDMPost *_postDetails;
    NSString *_titleImagePath;
    NSString *_endingImagePath;
}

@property(retain, nonatomic) NSString *endingImagePath; // @synthesize endingImagePath=_endingImagePath;
@property(retain, nonatomic) NSString *titleImagePath; // @synthesize titleImagePath=_titleImagePath;
@property(retain, nonatomic) ZDMPost *postDetails; // @synthesize postDetails=_postDetails;
@property(readonly, nonatomic) NSString *postIdentifier; // @synthesize postIdentifier=_postIdentifier;
- (void).cxx_destruct;
- (void)responsePostDetails:(CDUnknownBlockType)arg1;
- (id)initWithPostIdentifer:(id)arg1;

@end
