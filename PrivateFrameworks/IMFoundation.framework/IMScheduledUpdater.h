/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater  {
    NSCountedSet *_holdingUpdatesKeys;
}

@property(retain) NSCountedSet * holdingUpdatesKeys;


- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (void)setHoldingUpdatesKeys:(id)arg1;
- (id)holdingUpdatesKeys;
- (void)endHoldingUpdatesForAllKeys;
- (bool)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)invalidate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;
- (void)dealloc;

@end
