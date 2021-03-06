/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDate, NSMetadataQuery, NSArray, NSPredicate, NSOrderedSet, NSOperationQueue, NSString, NSObject<OS_dispatch_queue>;

@interface _UIDocumentPickerDirectoryObserver : NSObject <NSMetadataQueryDelegate> {
    NSArray *_sortDescriptors;
    NSArray *_staticItems;
    id _weak_updateHandlerWeakSelf;
    NSMetadataQuery *_query;
    NSArray *_scopes;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSOrderedSet *_lastSnapshot;
    NSDate *_lastSnapshotDate;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSOperationQueue *_queryWorkerQueue;
    Class _itemClass;
}

@property(retain) NSArray * staticItems;
@property(retain) NSArray * sortDescriptors;
@property(retain) NSPredicate * predicate;
@property(retain) NSMetadataQuery * query;
@property(retain) NSArray * scopes;
@property(copy) id handler;
@property(retain) NSOrderedSet * lastSnapshot;
@property(retain) NSDate * lastSnapshotDate;
@property(retain) NSObject<OS_dispatch_queue> * queryQueue;
@property(retain) NSOperationQueue * queryWorkerQueue;
@property Class itemClass;
@property id updateHandlerWeakSelf;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setQueryWorkerQueue:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (id)queryQueue;
- (id)lastSnapshot;
- (id)handler;
- (id)staticItems;
- (void)setStaticItems:(id)arg1;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)arg1;
- (id)initWithScopes:(id)arg1 weakSelf:(id)arg2 updateHandler:(id)arg3 itemClass:(Class)arg4;
- (id)metadataQuery:(id)arg1 replacementObjectForResultObject:(id)arg2;
- (id)updateHandlerWeakSelf;
- (void)setLastSnapshotDate:(id)arg1;
- (void)setLastSnapshot:(id)arg1;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3;
- (id)lastSnapshotDate;
- (void)_processResults:(id)arg1 changedItems:(id)arg2 reloadAll:(bool)arg3;
- (id)_queryResults;
- (void)_queryUpdated:(id)arg1;
- (id)predicate;
- (void)_initialGatherFinished:(id)arg1;
- (id)scopes;
- (id)queryWorkerQueue;
- (void)setQuery:(id)arg1;
- (void)_updateObservers:(id)arg1 reloadAll:(bool)arg2;
- (Class)itemClass;
- (void)setPredicate:(id)arg1;
- (void)setItemClass:(Class)arg1;
- (void)setUpdateHandlerWeakSelf:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setScopes:(id)arg1;
- (id)query;
- (void)dealloc;

@end
