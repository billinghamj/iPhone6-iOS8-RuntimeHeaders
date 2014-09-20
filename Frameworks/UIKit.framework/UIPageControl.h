/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImage, NSMutableArray, _UILegibilitySettings;

@interface UIPageControl : UIControl  {
    NSMutableArray *_indicators;
    long long _currentPage;
    long long _displayedPage;
    struct { 
        unsigned int hideForSinglePage : 1; 
        unsigned int defersCurrentPageDisplay : 1; 
    } _pageControlFlags;
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    long long _lastUserInterfaceIdiom;
    UIColor *_currentPageIndicatorTintColor;
    UIColor *_pageIndicatorTintColor;
    _UILegibilitySettings *_legibilitySettings;
}

@property long long numberOfPages;
@property long long currentPage;
@property bool hidesForSinglePage;
@property bool defersCurrentPageDisplay;
@property(retain) UIColor * pageIndicatorTintColor;
@property(retain) UIColor * currentPageIndicatorTintColor;
@property(getter=_legibilityStyle,setter=_setLegibilityStyle:) long long legibilityStyle;
@property(getter=_legibilitySettings,setter=_setLegibilitySettings:) _UILegibilitySettings * legibilitySettings;


- (id)_legibilitySettings;
- (id)pageIndicatorTintColor;
- (id)currentPageIndicatorTintColor;
- (long long)_legibilityStyle;
- (void)_setLegibilityStyle:(long long)arg1;
- (long long)_displayedPage;
- (struct CGSize { double x1; double x2; })sizeForNumberOfPages:(long long)arg1;
- (void)updateCurrentPageDisplay;
- (bool)defersCurrentPageDisplay;
- (void)setDefersCurrentPageDisplay:(bool)arg1;
- (bool)hidesForSinglePage;
- (void)setHidesForSinglePage:(bool)arg1;
- (long long)currentPage;
- (id)_createModernIndicatorImageFromView:(id)arg1;
- (double)_modernCornerRadius;
- (id)_modernColorEnabled:(bool)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (id)_modernIndicatorImageEnabled:(bool)arg1;
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(bool)arg2;
- (id)_indicatorViewEnabled:(bool)arg1 index:(long long)arg2 legible:(bool)arg3;
- (void)_transitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3 legible:(bool)arg4;
- (bool)_shouldDrawLegibly;
- (void)_modernTransitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3 legible:(bool)arg4;
- (id)_correctIdiomaticNameForImageNamed:(id)arg1;
- (void)_transitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3;
- (bool)_hasCustomImageForPage:(long long)arg1 enabled:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_modernBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorFrameAtIndex:(long long)arg1;
- (double)_indicatorSpacing;
- (void)_updateCurrentPageDisplay;
- (void)_setDisplayedPage:(long long)arg1;
- (void)_setCurrentPage:(long long)arg1;
- (id)_indicatorViewEnabled:(bool)arg1 index:(long long)arg2;
- (id)_pageIndicatorImage;
- (id)_customPageIndicatorImageForPage:(long long)arg1;
- (id)_customPageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_pageIndicatorImageForPage:(long long)arg1;
- (id)_activePageIndicatorImage;
- (void)_invalidateIndicators;
- (long long)numberOfPages;
- (void)setPageIndicatorTintColor:(id)arg1;
- (void)setCurrentPageIndicatorTintColor:(id)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (void)_commonPageControlInit;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;

@end