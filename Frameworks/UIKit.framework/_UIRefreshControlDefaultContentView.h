/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, UIImageView, UIActivityIndicatorView, UILabel;

@interface _UIRefreshControlDefaultContentView : _UIRefreshControlContentView  {
    bool_animationsAreValid;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UIImageView *_arrow;
    UIActivityIndicatorView *_spinner;
    NSMutableDictionary *_snappingTextFromValues;
    NSMutableDictionary *_snappingImageFromValues;
    NSMutableDictionary *_snappingArrowFromValues;
    bool_areAnimationsValid;
}

@property(readonly) UIImageView * imageView;
@property(readonly) UIImageView * arrow;
@property(readonly) UIActivityIndicatorView * spinner;
@property(readonly) UILabel * textLabel;
@property bool areAnimationsValid;


- (id)spinner;
- (id)arrow;
- (id)_regenerateArrow;
- (id)_regenerateCircle;
- (void)_updateTimeOffsetOfRelevantLayers;
- (id)_revealingTextAnimations;
- (id)_revealingArrowAnimations;
- (id)_revealingImageAnimations;
- (bool)areAnimationsValid;
- (double)_snappingTimeOffset;
- (double)_currentTimeOffset;
- (void)_spinOutMagic;
- (void)_refreshingMagic;
- (void)_snappingMagic;
- (void)_revealingMagic;
- (void)_fadeInMagic;
- (void)setAreAnimationsValid:(bool)arg1;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;
- (double)minimumSnappingHeight;
- (double)maximumSnappingHeight;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)refreshControlInvalidatedSnappingHeight;
- (id)attributedTitle;
- (id)imageView;
- (id)textLabel;
- (void)setTintColor:(id)arg1;
- (long long)style;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
