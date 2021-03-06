/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase, NSNumber;

@interface SSWishlist : NSObject  {
    long long _accountIdentifier;
    SSSQLiteDatabase *_database;
}

@property(readonly) long long accountIdentifier;
@property(copy) NSNumber * lastSyncTime;

+ (bool)existsForAccountIdentifier:(long long)arg1;

- (bool)deleteBackingStore;
- (id)lastSyncTime;
- (void)setLastSyncTime:(id)arg1;
- (void)performTransactionWithBlock:(id)arg1;
- (long long)accountIdentifier;
- (void)dealloc;
- (id)initWithAccountIdentifier:(long long)arg1;

@end
