/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSString, NSDictionary, NSUUID, NSDate, LSBundleProxy;

@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding> {
    NSDictionary *_infoPlist;
    LSBundleProxy *_parentBundle;
    unsigned int _parentBundleID;
    bool_isOnSystemPartition;
    NSString *_pluginIdentifier;
    NSString *_protocol;
    NSUUID *_pluginUUID;
    NSDictionary *_pluginKitDictionary;
    NSDate *_registrationDate;
}

@property(readonly) NSString * pluginIdentifier;
@property(readonly) NSString * protocol;
@property(readonly) NSUUID * pluginUUID;
@property(readonly) NSDictionary * pluginKitDictionary;
@property(readonly) NSDictionary * infoPlist;
@property(readonly) NSDate * registrationDate;
@property(readonly) LSBundleProxy * containingBundle;
@property(readonly) bool isOnSystemPartition;

+ (id)pluginKitProxyForUUID:(id)arg1;
+ (id)pluginKitProxyForIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)pluginKitProxyForURL:(id)arg1;
+ (id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 version:(id)arg4 bundleURL:(id)arg5;
+ (id)plugInKitProxyForPlugin:(unsigned int)arg1;

- (id)infoPlist;
- (id)pluginIdentifier;
- (id)protocol;
- (id)localizedShortName;
- (id)pluginKitDictionary;
- (id)containingBundle;
- (id)localizedName;
- (id)iconDataForVariant:(int)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (bool)isOnSystemPartition;
- (id)registrationDate;
- (id)pluginUUID;
- (id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 version:(id)arg4 bundleURL:(id)arg5;
- (id)_initWithPlugin:(unsigned int)arg1;
- (id)appStoreReceiptURL;

@end
