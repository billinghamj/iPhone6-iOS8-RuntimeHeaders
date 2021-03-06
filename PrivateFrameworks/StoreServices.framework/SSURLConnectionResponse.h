/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary, NSData, SSMetricsPageEvent, NSURL;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {
    NSDictionary *_allHeaderFields;
    NSData *_body;
    long long _expectedContentLength;
    SSMetricsPageEvent *_metricsPageEvent;
    NSString *_mimeType;
    long long _statusCode;
    NSString *_suggestedFilename;
    NSString *_textEncodingName;
    NSURL *_url;
}

@property(readonly) NSData * bodyData;
@property(readonly) long long expectedContentLength;
@property(readonly) NSString * MIMEType;
@property(readonly) NSString * suggestedFilename;
@property(readonly) NSString * textEncodingName;
@property(readonly) NSURL * URL;
@property(readonly) NSData * databaseEncoding;
@property(retain) SSMetricsPageEvent * metricsPageEvent;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (long long)expectedContentLength;
- (void)setMetricsPageEvent:(id)arg1;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (id)databaseEncoding;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)metricsPageEvent;
- (id)allHeaderFields;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)statusCode;
- (id)MIMEType;
- (id)URL;
- (void)dealloc;
- (id)bodyData;
- (id)suggestedFilename;
- (id)textEncodingName;

@end
