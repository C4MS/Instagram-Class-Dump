//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext;

@interface IGSurface : NSObject
{
    unsigned int _texture;
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    BOOL _generatedTexture;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_cvTexture;
    EAGLContext *_glContext;
    struct CAEAGLLayer *_layer;
    struct CGSize _size;
    BOOL _layerRenderBufferStorageNeedsRefresh;
    unsigned char _flipped;
    struct __CVBuffer *_pixelBuffer;
    unsigned int _textureTarget;
}

@property(readonly, nonatomic) unsigned int textureTarget; // @synthesize textureTarget=_textureTarget;
@property(readonly, nonatomic, getter=isFlipped) unsigned char flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void).cxx_destruct;
- (void)present;
@property(readonly, nonatomic) unsigned int renderbuffer;
@property(readonly, nonatomic) unsigned int framebuffer;
@property(readonly, nonatomic) unsigned int texture;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithLayer:(struct CAEAGLLayer *)arg1;
- (id)initWithFramebuffer:(unsigned int)arg1 size:(struct CGSize)arg2;
- (id)initWithIGTexture:(id)arg1;
- (id)initWithTexture:(unsigned int)arg1 target:(unsigned int)arg2 size:(struct CGSize)arg3;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (void)dealloc;

@end
