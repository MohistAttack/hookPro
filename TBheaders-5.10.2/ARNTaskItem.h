//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ARNTaskItem : NSObject
{
    CDUnknownBlockType _excuteBlock;	// 8 = 0x8
}

+ (id)taskItemWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType excuteBlock; // @synthesize excuteBlock=_excuteBlock;
- (void).cxx_destruct;
- (void)executeWithResult:(CDUnknownBlockType)arg1;

@end

