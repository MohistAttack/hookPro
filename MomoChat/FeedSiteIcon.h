//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface FeedSiteIcon : NSObject <NSCoding>
{
    NSString *iconId;
    NSString *name;
    NSMutableArray *urlArray;
}

@property(retain, nonatomic) NSMutableArray *urlArray; // @synthesize urlArray;
@property(copy, nonatomic) NSString *iconId; // @synthesize iconId;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)urlAtIndex:(unsigned int)arg1;
- (void)addUrl:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
