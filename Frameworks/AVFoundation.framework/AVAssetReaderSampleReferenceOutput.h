/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput  {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property(readonly) AVAssetTrack * track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;

- (void)finalize;
- (id)mediaType;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithTrack:(id)arg1;
- (id)track;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (bool)_trimsSampleDurations;
- (id)_asset;

@end
