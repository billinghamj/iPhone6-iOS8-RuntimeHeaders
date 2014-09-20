/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSURL, NSArray;

@interface AVFigAssetInspector : AVAssetInspector  {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigFormatReader { } *_formatReader;
    long long _formatReaderOnce;
    booldidCheckForSaveRestriction;
    boolhasSaveRestriction;
}

@property(getter=_figAsset,readonly) struct OpaqueFigAsset { }* figAsset;
@property(getter=_formatReader,readonly) struct OpaqueFigFormatReader { }* formatReader;
@property(readonly) NSURL * URL;
@property(readonly) NSArray * figChapterGroupInfo;
@property(readonly) NSArray * figChapters;
@property(readonly) NSURL * resolvedURL;
@property(readonly) bool hasProtectedContent;
@property(getter=_isStreaming,readonly) bool streaming;
@property(readonly) unsigned long long downloadToken;


- (id)resolvedURL;
- (void)finalize;
- (id)propertyListForProxy;
- (id)commonMetadata;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (id)creationDate;
- (bool)isReadable;
- (bool)hasProtectedContent;
- (id)lyrics;
- (unsigned long long)downloadToken;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)URL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (bool)isPlayable;
- (bool)_isStreaming;
- (id)trackReferences;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (bool)_hasQTSaveRestriction;
- (id)SHA1Digest;
- (long long)trackCount;
- (id)figChapters;
- (id)figChapterGroupInfo;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (bool)containsMovieFragments;
- (bool)canContainMovieFragments;
- (bool)isComposable;
- (bool)isExportable;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)mediaSelectionGroups;
- (id)alternateTrackGroups;
- (bool)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
- (float)preferredSoundCheckVolumeNormalization;
- (float)preferredVolume;
- (float)preferredRate;
- (struct OpaqueFigAsset { }*)_figAsset;

@end