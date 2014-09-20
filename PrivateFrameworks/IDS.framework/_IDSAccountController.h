/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSString, NSMapTable, NSMutableSet, NSMutableDictionary, NSSet;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol> {
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSString *_serviceToken;
    NSString *_service;
    NSMutableSet *_cachedAccounts;
    NSMutableSet *_enabledAccounts;
    NSMutableDictionary *_transactionIDToHandlersMap;
    bool_accountsLoaded;
    bool_isLocalAccountVisible;
}

@property(retain,readonly) NSSet * accounts;
@property(retain,readonly) NSSet * enabledAccounts;
@property(retain,readonly) NSString * serviceName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)addAccount:(id)arg1;
- (void)_removeAccount:(id)arg1;
- (id)enabledAccounts;
- (void)enableAccount:(id)arg1;
- (void)disableAccount:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(id)arg5;
- (id)internalAccounts;
- (void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2;
- (void)_loadCachedAccountsWithDictionaries:(id)arg1;
- (void)_updateLocalAccountVisibility;
- (void)_loadCachedAccounts;
- (void)_callDelegatesWithBlock:(id)arg1 group:(id)arg2;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(id)arg6;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(id)arg5;
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(id)arg4;
- (id)accountWithUniqueID:(id)arg1;
- (id)initWithService:(id)arg1 delegateContext:(id)arg2;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)accountsChanged:(id)arg1 forTopic:(id)arg2;
- (void)accountUpdated:(id)arg1;
- (void)daemonDisconnected;
- (void)_removeAndDeregisterAccount:(id)arg1;
- (void)_connect;
- (id)accounts;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)accountAdded:(id)arg1;
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(id)arg3;
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;
- (id)serviceName;
- (void)dealloc;
- (void)removeDelegate:(id)arg1;

@end