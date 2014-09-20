/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup  {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    bool_isStreamingGroup;
}


- (id)asset;
- (id)options;
- (id)dictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(bool)arg4;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (id)defaultOption;
- (bool)_isStreamingGroup;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;

@end