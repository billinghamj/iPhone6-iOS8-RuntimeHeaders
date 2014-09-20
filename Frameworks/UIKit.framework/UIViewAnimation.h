/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath, UIView;

@interface UIViewAnimation : NSObject  {
    UIView *_view;
    NSIndexPath *_indexPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _endRect;
    double _endAlpha;
    double _startFraction;
    double _endFraction;
    int _curve;
    bool_animateFromCurrentPosition;
    bool_shouldDeleteAfterAnimation;
    bool_editing;
    bool_shouldAnimateShadow;
    bool_shouldResetGroupOpacityAfterAnimation;
    bool_shouldAllowGroupOpacityAfterAnimation;
    bool_shouldClipToBoundsAfterAnimation;
}

@property(readonly) UIView * view;
@property(readonly) NSIndexPath * indexPath;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endRect;
@property(readonly) double endAlpha;
@property(readonly) double startFraction;
@property(readonly) double endFraction;
@property(readonly) int curve;
@property(readonly) bool animateFromCurrentPosition;
@property(readonly) bool shouldDeleteAfterAnimation;
@property(readonly) bool editing;
@property bool shouldAnimateShadow;
@property bool shouldResetGroupOpacityAfterAnimation;
@property bool shouldAllowGroupOpacityAfterAnimation;
@property bool shouldClipToBoundsAfterAnimation;


- (void)setShouldAnimateShadow:(bool)arg1;
- (id)initWithView:(id)arg1 indexPath:(id)arg2 endRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 endAlpha:(double)arg4 startFraction:(double)arg5 endFraction:(double)arg6 curve:(int)arg7 animateFromCurrentPosition:(bool)arg8 shouldDeleteAfterAnimation:(bool)arg9 editing:(bool)arg10;
- (bool)shouldClipToBoundsAfterAnimation;
- (bool)shouldAllowGroupOpacityAfterAnimation;
- (bool)shouldResetGroupOpacityAfterAnimation;
- (bool)editing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endRect;
- (bool)shouldDeleteAfterAnimation;
- (bool)shouldAnimateShadow;
- (void)setShouldClipToBoundsAfterAnimation:(bool)arg1;
- (void)setShouldResetGroupOpacityAfterAnimation:(bool)arg1;
- (void)setShouldAllowGroupOpacityAfterAnimation:(bool)arg1;
- (double)endAlpha;
- (bool)animateFromCurrentPosition;
- (double)endFraction;
- (double)startFraction;
- (id)indexPath;
- (int)curve;
- (id)view;
- (id)description;
- (void)dealloc;

@end