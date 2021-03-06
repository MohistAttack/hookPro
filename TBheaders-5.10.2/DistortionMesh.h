//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Distortion;

@interface DistortionMesh : NSObject
{
    unsigned int _vertexArrayID;	// 8 = 0x8
    unsigned int _arrayBufferID;	// 12 = 0xc
    unsigned int _elementBufferID;	// 16 = 0x10
    int _indices;	// 20 = 0x14
    Distortion *_distortion;	// 24 = 0x18
}

@property(retain) Distortion *distortion; // @synthesize distortion=_distortion;
@property int indices; // @synthesize indices=_indices;
@property unsigned int elementBufferID; // @synthesize elementBufferID=_elementBufferID;
@property unsigned int arrayBufferID; // @synthesize arrayBufferID=_arrayBufferID;
@property unsigned int vertexArrayID; // @synthesize vertexArrayID=_vertexArrayID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)testMeshWithRect;
- (void)distortionMeshSreenWidth:(float)arg1 screenHeight:(float)arg2 xEyeOffsetScreen:(float)arg3 yEyeOffsetScreen:(float)arg4 textureWidth:(float)arg5 textureHeight:(float)arg6 xEyeOffsetTexture:(float)arg7 yEyeOffsetTexture:(float)arg8 viewportX:(float)arg9 viewportY:(float)arg10 viewportWidth:(float)arg11 viewportHeight:(float)arg12;
- (void)releaseDistortionVAO;
- (void)createDistortionVAO;
- (id)init;

@end

