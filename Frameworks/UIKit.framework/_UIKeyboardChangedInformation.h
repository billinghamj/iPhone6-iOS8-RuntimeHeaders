/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardChangedInformation : NSObject <NSSecureCoding> {
    unsigned int _animationFencingPort;
    bool_keyboardOnScreen;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _keyboardPosition;
}

@property(readonly) unsigned int animationFencingPort;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardPosition;
@property(readonly) bool keyboardOnScreen;

+ (id)informationForKeyboardUp:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)informationForKeyboardDown;
+ (bool)supportsSecureCoding;

- (void)insertPermissions;
- (bool)keyboardOnScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardPosition;
- (unsigned int)animationFencingPort;
- (id)initWithKeyboardRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onScreen:(bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end