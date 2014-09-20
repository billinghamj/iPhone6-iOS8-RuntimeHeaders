/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSArray, NSMutableData, NSURLConnection;

@interface MCHTTPRequestor : NSObject <NSURLConnectionDataDelegate> {
    bool_didFailDueToMissingCredentials;
    bool_shouldUseResponseBodyAsLoginPrompt;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_username;
    NSString *_password;
    NSArray *_anchorCertificates;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    id _selfReference;
}

@property(retain) NSURLConnection * connection;
@property(retain) NSMutableData * responseData;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(retain) NSArray * anchorCertificates;
@property(copy) id completionBlock;
@property(retain) id selfReference;
@property bool didFailDueToMissingCredentials;
@property bool shouldUseResponseBodyAsLoginPrompt;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)username;
- (id)selfReference;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(id)arg5;
- (void)didFinishWithError:(id)arg1;
- (bool)shouldUseResponseBodyAsLoginPrompt;
- (bool)didFailDueToMissingCredentials;
- (id)anchorCertificates;
- (void)setShouldUseResponseBodyAsLoginPrompt:(bool)arg1;
- (void)setDidFailDueToMissingCredentials:(bool)arg1;
- (void)setSelfReference:(id)arg1;
- (void)setAnchorCertificates:(id)arg1;
- (void)setResponseData:(id)arg1;
- (id)responseData;
- (void)setUsername:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (id)init;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;

@end