/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary, NSArray, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding> {
    NSDictionary *_formatDictionary;
    bool_isMultiStreamFormat;
    struct opaqueCMFormatDescription { } *_formatDescription;
}

@property(readonly) unsigned int mediaType;
@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(getter=isExperimental,readonly) bool experimental;
@property(getter=isDefaultActiveFormat,readonly) bool defaultActiveFormat;
@property(readonly) int videoFormatIndex;
@property(readonly) unsigned int videoFormat;
@property(readonly) struct { int x1; int x2; } videoDimensions;
@property(readonly) struct { int x1; int x2; } sensorDimensions;
@property(readonly) float videoMinSupportedFrameRate;
@property(readonly) float videoMaxSupportedFrameRate;
@property(readonly) float videoDefaultMinFrameRate;
@property(readonly) float videoDefaultMaxFrameRate;
@property(readonly) float videoFieldOfView;
@property(getter=isVideoBinned,readonly) bool videoBinned;
@property(readonly) int videoStabilizationTypeOverrideForStandard;
@property(getter=isVideoZoomSupported,readonly) bool videoZoomSupported;
@property(readonly) float videoMaxZoomFactor;
@property(readonly) float videoZoomFactorUpscaleThreshold;
@property(getter=isVideoZoomDynamicSensorCropSupported,readonly) bool videoZoomDynamicSensorCropSupported;
@property(getter=isVideoLowLightBinningSwitchSupported,readonly) bool videoLowLightBinningSwitchSupported;
@property(readonly) int videoRawBitDepth;
@property(readonly) int temporalNoiseReductionMode;
@property(readonly) bool ispChromaNoiseReduction;
@property(readonly) float minISO;
@property(readonly) float maxISO;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property(readonly) float aeMaxGain;
@property(readonly) int maxIntegrationTimeOverride;
@property(readonly) int autoFocusSystem;
@property(getter=isMultiStreamFormat,readonly) bool multiStreamFormat;
@property(readonly) bool hasFrontEndScalerCompanionIndex;
@property(readonly) int frontEndScalerCompanionIndex;
@property(readonly) struct { int x1; int x2; } sensorCropDimensions;
@property(readonly) struct { int x1; int x2; } sourceCropAspectRatio;
@property(readonly) bool hasSensorHDRCompanionIndex;
@property(readonly) int sensorHDRCompanionIndex;
@property(readonly) bool prefersSensorHDREnabled;
@property(getter=isPhotoFormat,readonly) bool photoFormat;
@property(getter=isHighResPhotoFormat,readonly) bool highResPhotoFormat;
@property(readonly) bool needsPreviewDPCC;
@property(getter=isStillImageStabilizationSupported,readonly) bool stillImageStabilizationSupported;
@property(getter=isHDRSupported,readonly) bool hdrSupported;
@property(getter=isHighResStillImageSupported,readonly) bool highResStillImageSupported;
@property(readonly) struct { int x1; int x2; } highResStillImageDimensions;
@property(getter=isHighProfileH264Supported,readonly) bool highProfileH264Supported;
@property(readonly) NSArray * AVCaptureSessionPresets;
@property(readonly) float videoScaleFactor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;

- (unsigned int)mediaType;
- (float)videoScaleFactor;
- (struct { int x1; int x2; })_visibleSensorDimensionsIncludingCinematic:(bool)arg1;
- (struct { int x1; int x2; })_maxUseableSensorDimensions;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)copyWithNewVideoPixelFormat:(unsigned int)arg1;
- (struct { int x1; int x2; })_outputDimensions;
- (id)copyXPCEncoding;
- (int)videoStabilizationTypeOverrideForStandard;
- (struct { int x1; int x2; })sourceCropAspectRatio;
- (struct { int x1; int x2; })sensorCropDimensions;
- (int)sensorHDRCompanionIndex;
- (int)frontEndScalerCompanionIndex;
- (bool)hasFrontEndScalerCompanionIndex;
- (int)maxIntegrationTimeOverride;
- (float)aeMaxGain;
- (bool)ispChromaNoiseReduction;
- (int)temporalNoiseReductionMode;
- (bool)isVideoZoomSupported;
- (bool)isMultiStreamFormat;
- (id)initWithXPCEncoding:(id)arg1;
- (unsigned int)videoFormat;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (struct { int x1; int x2; })videoDimensions;
- (float)videoDefaultMinFrameRate;
- (float)videoDefaultMaxFrameRate;
- (int)videoFormatIndex;
- (bool)needsPreviewDPCC;
- (bool)isHighProfileH264Supported;
- (int)videoRawBitDepth;
- (bool)isVideoZoomDynamicSensorCropSupported;
- (bool)isVideoLowLightBinningSwitchSupported;
- (bool)prefersSensorHDREnabled;
- (bool)isHighResStillImageSupported;
- (struct { int x1; int x2; })highResStillImageDimensions;
- (bool)hasSensorHDRCompanionIndex;
- (float)videoMaxSupportedFrameRate;
- (float)videoMinSupportedFrameRate;
- (int)autoFocusSystem;
- (bool)isHighResPhotoFormat;
- (bool)isExperimental;
- (float)videoZoomFactorUpscaleThreshold;
- (bool)isVideoBinned;
- (float)videoFieldOfView;
- (bool)isStillImageStabilizationSupported;
- (struct { int x1; int x2; })sensorDimensions;
- (float)maxISO;
- (float)minISO;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (id)AVCaptureSessionPresets;
- (bool)isDefaultActiveFormat;
- (bool)isHDRSupported;
- (bool)isPhotoFormat;
- (bool)isVideoStabilizationModeSupported:(int)arg1;
- (float)videoMaxZoomFactor;
- (struct opaqueCMFormatDescription { }*)formatDescription;

@end