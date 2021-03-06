/* Generated by RuntimeBrowser.
   Image: /usr/lib/libnfshared.dylib
 */

@class NSData, AWDNFCSECRSAuthorizeECommerce, NSString;

@interface NFAWDCRSAuthorizeECommerce : NSObject <NFAWDEventProtocol> {
    unsigned int status;
    unsigned int method;
    unsigned int countryCode;
    unsigned int currencyCode;
    unsigned int merchantCapabilities;
    unsigned int transactionType;
    NSData *aid;
    NSData *merchantId;
    unsigned long long transactionTotal;
    unsigned long long otherAmount;
    NSData *transactionId;
    AWDNFCSECRSAuthorizeECommerce *_metric;
}

@property unsigned int status;
@property unsigned int method;
@property(retain) NSData * aid;
@property(retain) NSData * merchantId;
@property unsigned int countryCode;
@property unsigned int currencyCode;
@property unsigned long long transactionTotal;
@property unsigned long long otherAmount;
@property unsigned int merchantCapabilities;
@property(retain) NSData * transactionId;
@property unsigned int transactionType;
@property AWDNFCSECRSAuthorizeECommerce * metric;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned long long)updateTransactionStateInfoPreviousState:(unsigned long long)arg1 withUUID:(id)arg2 withUUIDRefTimestamp:(unsigned long long)arg3;
- (id)transactionId;
- (unsigned int)merchantCapabilities;
- (unsigned long long)otherAmount;
- (unsigned long long)transactionTotal;
- (id)merchantId;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (void)setOtherAmount:(unsigned long long)arg1;
- (void)setTransactionTotal:(unsigned long long)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setMerchantId:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)metric;
- (void)setMethod:(unsigned int)arg1;
- (unsigned int)countryCode;
- (void)setMetric:(id)arg1;
- (void)setCountryCode:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (unsigned int)currencyCode;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned int)method;
- (id)init;
- (void)dealloc;
- (unsigned int)transactionType;
- (void)setTransactionType:(unsigned int)arg1;

@end
