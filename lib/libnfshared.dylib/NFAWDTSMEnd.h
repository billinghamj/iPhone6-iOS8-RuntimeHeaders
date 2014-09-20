/* Generated by RuntimeBrowser.
   Image: /usr/lib/libnfshared.dylib
 */

@class NSData, NSString, AWDNFCTSMEndEvent;

@interface NFAWDTSMEnd : NSObject <NFAWDEventProtocol> {
    boolauthEnabled;
    boolmfdEnabled;
    boolrestrictedModeExit;
    unsigned int status;
    unsigned int lifeCycleState;
    NSData *aid;
    NSData *discretionaryData;
    AWDNFCTSMEndEvent *_metric;
}

@property unsigned int status;
@property bool authEnabled;
@property bool mfdEnabled;
@property unsigned int lifeCycleState;
@property bool restrictedModeExit;
@property(retain) NSData * aid;
@property(retain) NSData * discretionaryData;
@property AWDNFCTSMEndEvent * metric;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)restrictedModeExit;
- (unsigned int)lifeCycleState;
- (bool)mfdEnabled;
- (bool)authEnabled;
- (void)setRestrictedModeExit:(bool)arg1;
- (void)setLifeCycleState:(unsigned int)arg1;
- (void)setMfdEnabled:(bool)arg1;
- (void)setAuthEnabled:(bool)arg1;
- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateTSMTransactionStateWithUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (id)discretionaryData;
- (id)aid;
- (void)setDiscretionaryData:(id)arg1;
- (void)setAid:(id)arg1;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (id)init;
- (void)dealloc;

@end