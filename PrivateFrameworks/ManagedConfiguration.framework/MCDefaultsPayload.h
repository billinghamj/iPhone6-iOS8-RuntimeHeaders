/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload  {
    NSDictionary *_defaultsByDomain;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)defaultsForDomain:(id)arg1;
- (id)domains;
- (bool)isAllowedToWriteDefaults;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)title;
- (id)description;

@end