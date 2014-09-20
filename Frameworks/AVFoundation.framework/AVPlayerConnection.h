/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItem, AVWeakReference, NSError, NSObject<OS_dispatch_queue>, AVPlayer;

@interface AVPlayerConnection : NSObject  {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    bool_shouldAppendItem;
    long long _status;
    NSError *_error;
    AVPlayerItem *_previousPlayerItem;
}

@property(readonly) AVPlayer * player;
@property(readonly) AVPlayerItem * playerItem;
@property(readonly) long long status;
@property(readonly) NSError * error;
@property(readonly) NSObject<OS_dispatch_queue> * serializationQueue;


- (id)player;
- (id)error;
- (long long)status;
- (id)description;
- (void)dealloc;
- (id)playerItem;
- (id)serializationQueue;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 shouldAppendItem:(bool)arg3;
- (void)removeItemFromPlayQueue;
- (bool)addItemToPlayQueue;

@end