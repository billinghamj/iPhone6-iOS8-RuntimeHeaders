/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary;

@interface NSUbiquitousKeyValueStore : NSObject  {
    id _private1;
    id _private2;
    id _private3;
    void *_private4;
    void *_reserved[3];
}

@property(copy,readonly) NSDictionary * dictionaryRepresentation;

+ (id)defaultStore;
+ (void)_appWillActivate;
+ (void)_appWillDeactivate;
+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (void)_synchronizeStoresForced:(bool)arg1;

- (id)arrayForKey:(id)arg1;
- (void)finalize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (void)removeObjectForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (bool)boolForKey:(id)arg1;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;
- (long long)longLongForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)_unregisterFromDaemon;
- (void)synchronizeWithCompletionHandler:(id)arg1;
- (void)registerDefaultValues:(id)arg1;
- (void)_useSourceSyncWithBlock:(id)arg1;
- (void)_useSourceAsyncWithBlock:(id)arg1;
- (unsigned long long)maximumTotalDataLength;
- (unsigned long long)maximumDataLengthPerKey;
- (unsigned long long)maximumKeyLength;
- (unsigned long long)maximumKeyCount;
- (bool)_synchronizeForced:(bool)arg1;
- (bool)_shouldAvoidSynchronize;
- (bool)_synchronizeForced:(bool)arg1 notificationQueue:(id)arg2;
- (void)_adjustTimerForAutosync;
- (void)_adjustTimer:(id)arg1;
- (void)_syncConcurrently;
- (void)_syncConcurrentlyForced:(bool)arg1;
- (bool)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(long long)arg2;
- (bool)synchronizeWithSourceForced:(bool)arg1;
- (void)_rethrowException:(id)arg1;
- (void)_setHasPendingSynchronize:(bool)arg1;
- (bool)_hasPendingSynchronize;
- (int)_storeChangeFromSourceChange:(int)arg1;
- (void)_setShouldAvoidSynchronize:(bool)arg1;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (void)_pleaseSynchronize:(id)arg1;
- (void)_registerToDaemon;
- (void)_configurationDidChange;
- (void)_sourceDidChange:(id)arg1;
- (void)_scheduleRemoteSynchronization;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(bool)arg3;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;

@end