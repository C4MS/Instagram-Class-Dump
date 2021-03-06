//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGSurface;

@interface IGBilateralFilter : IGImageFilter
{
    BOOL _needsConfigure;
    union _GLKVector2 _blurVector;
    IGSurface *_intermediateTexture;
    float _rangeSigma;
    float _spatialSigma;
    unsigned int _spatialKernelSize;
}

@property(nonatomic) unsigned int spatialKernelSize; // @synthesize spatialKernelSize=_spatialKernelSize;
@property(nonatomic) float spatialSigma; // @synthesize spatialSigma=_spatialSigma;
@property(nonatomic) float rangeSigma; // @synthesize rangeSigma=_rangeSigma;
- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)configureProgram:(id)arg1;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)fragmentShaderPrecision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

