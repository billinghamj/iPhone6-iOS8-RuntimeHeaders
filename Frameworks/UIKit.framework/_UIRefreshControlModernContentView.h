/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIRefreshControlModernReplicatorView, UILabel, UIView;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView  {
    bool_animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    UIView *_seed;
    bool_hasFinishedRevealing;
    UILabel *_textLabel;
    bool_areAnimationsValid;
    double _currentPopStiffness;
}

@property(readonly) UILabel * textLabel;
@property double currentPopStiffness;
@property bool areAnimationsValid;


- (double)_effectiveScrollViewHeight;
- (double)_percentageShowing;
- (double)currentPopStiffness;
- (void)_reveal;
- (id)_effectiveTintColorWithAlpha:(double)arg1;
- (void)_tick;
- (void)_setSpunAppearance;
- (void)_cleanUpAfterRevealing;
- (void)_goAway;
- (void)_tickDueToProgrammaticRefresh;
- (void)_spin;
- (void)_resetToRevealingState;
- (void)_updateTimeOffsetOfRelevantLayers;
- (bool)areAnimationsValid;
- (double)_currentTimeOffset;
- (void)_snappingMagic;
- (void)setAreAnimationsValid:(bool)arg1;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setCurrentPopStiffness:(double)arg1;
- (double)maximumSnappingHeight;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (id)attributedTitle;
- (id)_effectiveTintColor;
- (id)textLabel;
- (void)setTintColor:(id)arg1;
- (long long)style;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
