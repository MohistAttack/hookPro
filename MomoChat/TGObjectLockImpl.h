//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGObjectLockImpl : NSObject
{
    struct _opaque_pthread_mutex_t _TG_SYNCHRONIZED_objectLock;
}

- (void)tgFreeLock;
- (void)tgTakeLock;
- (id)init;

@end

