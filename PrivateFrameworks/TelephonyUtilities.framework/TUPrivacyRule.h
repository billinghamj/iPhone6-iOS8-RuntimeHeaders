/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class TUPhoneNumber, NSString;

@interface TUPrivacyRule : NSObject <NSCoding> {
    int _type;
    TUPhoneNumber *_phoneNumber;
    NSString *_email;
}

@property(readonly) int type;
@property(readonly) TUPhoneNumber * phoneNumber;
@property(readonly) NSString * email;

+ (id)ruleForEmail:(id)arg1;
+ (id)ruleForPhoneNumber:(id)arg1;

- (id)initForEmail:(id)arg1;
- (id)initForPhoneNumber:(id)arg1;
- (id)email;
- (id)phoneNumber;
- (int)type;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
