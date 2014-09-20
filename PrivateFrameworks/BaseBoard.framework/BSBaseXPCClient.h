/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class BSSignal, NSString, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface BSBaseXPCClient : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    BSSignal *_invalidationSignal;
    NSObject<OS_xpc_object> *_serverEndpoint;
    NSString *_serviceName;
    bool_suspended;
    bool_clientInvalidated;
    int _notifyToken;
}

@property(getter=isSuspended,readonly) bool suspended;


- (void)_sendReply:(id)arg1 messagePacker:(id)arg2;
- (id)queue_connection;
- (void)_sendMessage:(id)arg1;
- (id)_errorFromMessageIfAny:(id)arg1;
- (void)resumeConnection;
- (void)suspendConnection;
- (void)queue_connectionWasDestroyed;
- (void)reconnectIfNecessary;
- (void)queue_connectionWasCreated;
- (void)queue_reconnectToResumedServerIfNecessary;
- (void)queue_connectionWasInvalidated;
- (void)queue_reregister;
- (void)queue_connectionWasInterrupted;
- (id)_connectionInstanceUUID;
- (void)queue_connectionWasSuspended;
- (void)queue_connectionWasResumed;
- (void)_sendMessage:(id)arg1 withReplyHandler:(id)arg2 waitForReply:(bool)arg3 waitDuration:(unsigned long long)arg4;
- (void)queue_resumeConnection;
- (void)queue_suspendConnection;
- (void)queue_registerWithServerIfNecessary;
- (bool)queue_isSuspended;
- (void)queue_invalidate;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (void)queue_handleMessage:(id)arg1;
- (id)_notifyTokenName;
- (id)_connection;
- (id)initWithServiceName:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (bool)isSuspended;
- (void)_setEndpoint:(id)arg1;
- (id)initWithEndpoint:(id)arg1;

@end