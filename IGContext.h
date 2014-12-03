//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, NSMutableArray, NSMutableSet;

@interface IGContext : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    unsigned int _squareVertexBuffer;
    NSMutableArray *_resources;
    NSMutableSet *_surfacesToFlush;
    NSMutableSet *_cachedSurfaces;
    EAGLContext *_openglContext;
    struct CGSize _maxTextureSize;
}

+ (id)currentContext;
@property(readonly, nonatomic) struct CGSize maxTextureSize; // @synthesize maxTextureSize=_maxTextureSize;
@property(retain, nonatomic) EAGLContext *openglContext; // @synthesize openglContext=_openglContext;
- (void).cxx_destruct;
- (void)removeAllReusableSurfaces;
- (id)popReusableSurfaceWithSize:(struct CGSize)arg1;
- (void)pushReusableSurface:(id)arg1;
@property(readonly, nonatomic) unsigned int squareVertexBuffer;
- (void)flush;
- (void)addSurfaceToFlush:(id)arg1;
- (id)resourceForFilter:(id)arg1;
- (void)setResource:(id)arg1 forFilter:(id)arg2;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCache;
- (void)makeCurrent;
- (id)init;
- (void)dealloc;

@end

