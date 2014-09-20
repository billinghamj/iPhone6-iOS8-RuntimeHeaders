/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSURLConnectionRequestDelegate>, SSURLRequestProperties, NSString, SSAuthenticationContext, SSVURLDataConsumer, NSURLRequest;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    SSVURLDataConsumer *_dataConsumer;
    bool_runsInProcess;
    bool_sendsResponseForHTTPFailures;
    bool_shouldMescalSign;
}

@property(readonly) NSURLRequest * URLRequest;
@property(readonly) SSURLRequestProperties * requestProperties;
@property bool shouldMescalSign;
@property <SSURLConnectionRequestDelegate> * delegate;
@property(copy) SSAuthenticationContext * authenticationContext;
@property(retain) SSVURLDataConsumer * dataConsumer;
@property bool runsInProcess;
@property bool sendsResponseForHTTPFailures;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)authenticationContext;
- (void)setRunsInProcess:(bool)arg1;
- (void)setSendsResponseForHTTPFailures:(bool)arg1;
- (bool)shouldMescalSign;
- (bool)sendsResponseForHTTPFailures;
- (bool)runsInProcess;
- (bool)_canRunInProcess;
- (id)dataConsumer;
- (void)setDataConsumer:(id)arg1;
- (id)requestProperties;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)start;
- (id)init;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (id)URLRequest;
- (void)startWithConnectionResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setShouldMescalSign:(bool)arg1;
- (id)initWithRequestProperties:(id)arg1;

@end