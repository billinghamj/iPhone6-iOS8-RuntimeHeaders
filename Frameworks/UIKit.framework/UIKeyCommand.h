/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexSet, NSString, UIEvent, UIViewController;

@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet *_keyCodes;
    SEL _action;
    long long _buttonType;
    UIEvent *_triggeringEvent;
    NSString *_segueIdentifier;
    UIViewController *_controllerForSegue;
    NSString *_input;
    long long _modifierFlags;
}

@property(readonly) NSString * input;
@property(readonly) long long modifierFlags;

+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (bool)supportsSecureCoding;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;

- (id)_triggeringEvent;
- (id)_controllerForSegue;
- (id)initWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
- (id)initWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
- (id)initWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
- (id)initWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3;
- (id)initWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
- (id)_keyCodes;
- (long long)modifierFlags;
- (id)input;
- (void)_setViewControllerForSegue:(id)arg1;
- (id)_segueIdentifier;
- (void)_setTriggeringEvent:(id)arg1;
- (void)_setButtonType:(long long)arg1;
- (void)setAction:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)triggerSegueIfPossible;
- (long long)_buttonType;
- (SEL)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end