//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface CellWithIndex : NSObject
{
    UITableViewCell *m_cell;
    long long m_index;
}

@property(nonatomic) long long m_index; // @synthesize m_index;
@property(retain, nonatomic) UITableViewCell *m_cell; // @synthesize m_cell;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCell:(id)arg1 andIndex:(long long)arg2;

@end
