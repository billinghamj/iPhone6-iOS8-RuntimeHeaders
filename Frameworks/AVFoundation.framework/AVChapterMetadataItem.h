/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem  {
    AVChapterMetadataItemInternal *_privChapter;
}


- (id)keySpace;
- (void)cancelLoading;
- (id)extraAttributes;
- (void)finalize;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)commonKey;
- (id)key;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)value;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)description;
- (id)init;
- (void)dealloc;
- (long long)_chapterIndex;
- (long long)_chapterGroupIndex;
- (bool)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (void)_takeValueFrom:(id)arg1;
- (long long)_valueStatus;
- (void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2;
- (void)_ensureValueLoadedSync;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 locale:(id)arg5 chapterDataType:(id)arg6 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8;
- (id)dataType;

@end
