/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityLocation, NSMutableDictionary, NSDate, NSLock, NSObject<OS_dispatch_queue>;

@interface _PFUbiquityRecordsExporter : NSObject  {
    NSString *_localPeerID;
    NSDate *_lastTransactionDate;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_storeName;
    NSLock *_transactionLock;
    NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;
    bool_pendingTempLogMove;
    bool_allowTempLogStorage;
    bool_useLocalStorage;
    NSObject<OS_dispatch_queue> *_processingQueue;
    bool_throwOptimisticLockingException;
}

@property(readonly) NSString * localPeerID;
@property(retain) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) PFUbiquityLocation * localRootLocation;
@property(readonly) PFUbiquityLocation * currentRootLocation;
@property(retain) NSDate * lastTransactionDate;
@property(readonly) bool pendingTempLogMove;
@property bool allowTempLogStorage;
@property bool useLocalStorage;
@property bool throwOptimisticLockingException;


- (id)description;
- (id)init;
- (void)dealloc;
- (void)setThrowOptimisticLockingException:(bool)arg1;
- (bool)throwOptimisticLockingException;
- (bool)useLocalStorage;
- (id)localRootLocation;
- (void)setAllowTempLogStorage:(bool)arg1;
- (bool)allowTempLogStorage;
- (bool)pendingTempLogMove;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)stopWatchingForChanges;
- (void)beginWatchingForChangesFromStore:(id)arg1;
- (id)currentRootLocation;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ubiquityRootLocation:(id)arg3 localRootLocation:(id)arg4 andProcessingQueue:(id)arg5;
- (void)moveLogsFromTempDirectory;
- (void)scheduleTempLogMove;
- (id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4;
- (void)setUseLocalStorage:(bool)arg1;
- (bool)shouldRespondToSaveNotification:(id)arg1;
- (void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2;
- (void)managedObjectContextDidSave:(id)arg1;
- (id)lastTransactionDate;
- (void)setLastTransactionDate:(id)arg1;
- (id)ubiquityRootLocation;
- (id)localPeerID;

@end