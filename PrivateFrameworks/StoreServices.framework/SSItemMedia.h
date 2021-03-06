/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSURL;

@interface SSItemMedia : NSObject  {
    long long _duration;
    long long _fullDuration;
    long long _mediaFileSize;
    NSString *_mediaKind;
    bool_protected;
    NSURL *_url;
}

@property(readonly) long long durationInMilliseconds;
@property(copy) NSString * mediaKind;
@property(getter=isProtectedMedia,readonly) bool protectedMedia;
@property(readonly) NSURL * URL;
@property(readonly) long long fullDurationInMilliseconds;
@property(readonly) long long mediaFileSize;


- (long long)durationInMilliseconds;
- (long long)fullDurationInMilliseconds;
- (long long)mediaFileSize;
- (bool)isProtectedMedia;
- (id)initWithStoreOfferDictionary:(id)arg1;
- (id)URL;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setMediaKind:(id)arg1;
- (id)mediaKind;

@end
