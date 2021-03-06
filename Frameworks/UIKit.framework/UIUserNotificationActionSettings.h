/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSDictionary;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_category;
    NSDictionary *_actionsByContext;
}

@property(copy) NSString * category;
@property(copy) NSDictionary * actionsByContext;

+ (bool)supportsSecureCoding;

- (void)setActionsByContext:(id)arg1;
- (id)actionsByContext;
- (void)setCategory:(id)arg1;
- (id)category;
- (id)validatedSettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)arg1;
- (id)actionsForContext:(unsigned long long)arg1;
- (id)initWithCategory:(id)arg1 actionsByContext:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)actions;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
