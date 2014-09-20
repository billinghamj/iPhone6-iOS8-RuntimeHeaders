/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIViewController, _UINavigationInteractiveTransition, _UIAnimationCoordinator, <UINavigationControllerDelegate>, _UINavigationParallaxTransition, <UIViewControllerInteractiveTransitioning>, NSString, NSArray, _UIBarTapGestureRecognizer, _UINavigationControllerPalette, UINavigationTransitionView, _UIBarPanGestureRecognizer, UIView, <UIViewControllerAnimatedTransitioning>, UIPanGestureRecognizer, UIGestureRecognizer, UIToolbar, UINavigationBar, NSUUID, UITapGestureRecognizer;

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, UINavigationBarDelegate> {
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_navigationTransitionView;
    double _bottomInsetDelta;
    double _statusBarHeightForHideShow;
    UIViewController *_disappearingViewController;
    <UINavigationControllerDelegate> *_delegate;
    long long _savedNavBarStyleBeforeSheet;
    long long _savedToolBarStyleBeforeSheet;
    UITapGestureRecognizer *_backGestureRecognizer;
    _UINavigationControllerPalette *_topPalette;
    _UINavigationControllerPalette *_freePalette;
    _UINavigationControllerPalette *_transitioningTopPalette;
    struct { 
        unsigned int isAppearingAnimated : 1; 
        unsigned int isAlreadyPoppingNavigationItem : 1; 
        unsigned int isNavigationBarHidden : 1; 
        unsigned int isToolbarShown : 1; 
        unsigned int needsDeferredTransition : 1; 
        unsigned int isTransitioning : 1; 
        unsigned int paletteTransitionPending : 1; 
        unsigned int lastOperation : 4; 
        unsigned int lastOperationAnimated : 1; 
        unsigned int deferredTransition : 8; 
        unsigned int didPreloadKeyboardAnimation : 1; 
        unsigned int didHideBottomBar : 1; 
        unsigned int didExplicitlyHideTabBar : 1; 
        unsigned int isChangingOrientationForPop : 1; 
        unsigned int pretendNavBarHidden : 1; 
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding : 1; 
        unsigned int searchBarHidNavBar : 1; 
        unsigned int useSystemPopoverBarAppearance : 1; 
        unsigned int isCustomTransition : 1; 
        unsigned int isBuiltinTransition : 1; 
        unsigned int resetDidHideOnCancel : 1; 
        unsigned int delegateWillShowViewController : 1; 
        unsigned int delegateDidShowViewController : 1; 
        unsigned int delegateTransitionController : 1; 
        unsigned int delegateTransitionControllerEx : 1; 
        unsigned int delegateInteractionController : 1; 
        unsigned int delegateInteractionControllerEx : 1; 
        unsigned int delegateShouldCrossFadeNavigationBar : 1; 
        unsigned int delegateShouldCrossFadeBottomBars : 1; 
        unsigned int delegateShouldUseBuiltinInteractionController : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int delegateLayoutTransitioningClass : 1; 
        unsigned int navigationBarHidesCompletelyOffscreen : 1; 
        unsigned int clipUnderlapWhileTransitioning : 1; 
        unsigned int isCrossfadingOutTabBar : 1; 
        unsigned int isCrossfadingInTabBar : 1; 
        unsigned int skipContentInsetCalculation : 1; 
        unsigned int neverInWindow : 1; 
        unsigned int useStandardStatusBarHeight : 1; 
        unsigned int allowUserInteractionDuringTransition : 1; 
        unsigned int enableBackButtonDuringTransition : 1; 
        unsigned int allowsGroupBlending : 1; 
        unsigned int allowNestedNavigationControllers : 1; 
        unsigned int nestedNavigationBarWasHidden : 1; 
        unsigned int nestedToolbarWasHidden : 1; 
        unsigned int isNested : 1; 
        unsigned int searchHidNavigationBar : 1; 
        unsigned int suppressMixedOrientationPop : 1; 
    } _navigationControllerFlags;
    bool_interactiveTransition;
    bool_hidesBarsWhenKeyboardAppears;
    bool_hidesBarsOnSwipe;
    bool_hidesBarsWhenVerticallyCompact;
    bool_hidesBarsOnTap;
    bool__usingBuiltinAnimator;
    bool__barAnimationWasCancelled;
    Class _toolbarClass;
    double _customNavigationTransitionDuration;
    <UIViewControllerAnimatedTransitioning> *__transitionController;
    _UINavigationParallaxTransition *__cachedTransitionController;
    <UIViewControllerInteractiveTransitioning> *__interactionController;
    _UINavigationInteractiveTransition *__cachedInteractionController;
    NSUUID *__toolbarAnimationId;
    NSUUID *__navbarAnimationId;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __updateNavigationBarHandler;

    id __keyboardAppearedNotificationToken;
    _UIBarPanGestureRecognizer *__barSwipeHideGesture;
    _UIAnimationCoordinator *__barInteractiveAnimationCoordinator;
    _UIBarTapGestureRecognizer *__barTapHideGesture;
    long long _builtinTransitionStyle;
    double _builtinTransitionGap;
    NSString *__backdropGroupName;
}

@property(retain) UIViewController * detailViewController;
@property bool isExpanded;
@property(retain,readonly) UIViewController * topViewController;
@property(retain,readonly) UIViewController * visibleViewController;
@property(copy) NSArray * viewControllers;
@property(getter=isNavigationBarHidden) bool navigationBarHidden;
@property(readonly) UINavigationBar * navigationBar;
@property(getter=isToolbarHidden) bool toolbarHidden;
@property(readonly) UIToolbar * toolbar;
@property <UINavigationControllerDelegate> * delegate;
@property(readonly) UIGestureRecognizer * interactivePopGestureRecognizer;
@property bool hidesBarsWhenKeyboardAppears;
@property bool hidesBarsOnSwipe;
@property(retain,readonly) UIPanGestureRecognizer * barHideOnSwipeGestureRecognizer;
@property bool hidesBarsWhenVerticallyCompact;
@property bool hidesBarsOnTap;
@property(readonly) UITapGestureRecognizer * barHideOnTapGestureRecognizer;
@property bool needsDeferredTransition;
@property(readonly) UINavigationTransitionView * navigationTransitionView;
@property bool pretendNavBarHidden;
@property bool avoidMovingNavBarOffscreenBeforeUnhiding;
@property double customNavigationTransitionDuration;
@property(setter=_setTransitionController:,retain) <UIViewControllerAnimatedTransitioning> * _transitionController;
@property(setter=_setCachedTransitionController:,retain) _UINavigationParallaxTransition * _cachedTransitionController;
@property(setter=_setInteractionController:,retain) <UIViewControllerInteractiveTransitioning> * _interactionController;
@property(setter=_setCachedInteractionController:,retain) _UINavigationInteractiveTransition * _cachedInteractionController;
@property(getter=_isUsingBuiltinAnimator,setter=_setUsingBuiltinAnimator:) bool _usingBuiltinAnimator;
@property(setter=_setToolbarAnimationId:,retain) NSUUID * _toolbarAnimationId;
@property(setter=_setNavbarAnimationId:,retain) NSUUID * _navbarAnimationId;
@property(setter=_setBarAnimationWasCancelled:) bool _barAnimationWasCancelled;
@property(setter=_setUpdateNavigationBarHandler:,copy) id _updateNavigationBarHandler;
@property(getter=_isCrossfadingOutTabBar,setter=_setCrossfadingOutTabBar:) bool crossfadingOutTabBar;
@property(getter=_isCrossfadingInTabBar,setter=_setCrossfadingInTabBar:) bool crossfadingInTabBar;
@property(getter=_didExplicitlyHideTabBar,setter=_setDidExplicitlyHideTabBar:) bool didHideTabBar;
@property(setter=_setKeyboardAppearedNotificationToken:,retain) id _keyboardAppearedNotificationToken;
@property(setter=_setBarSwipeHideGesture:,retain) _UIBarPanGestureRecognizer * _barSwipeHideGesture;
@property(setter=_setInteractiveAnimationCoordinator:,retain) _UIAnimationCoordinator * _barInteractiveAnimationCoordinator;
@property(setter=_setBarTapHideGesture:,retain) _UIBarTapGestureRecognizer * _barTapHideGesture;
@property(retain) UIViewController * disappearingViewController;
@property(readonly) UIViewController * previousViewController;
@property(readonly) UIViewController * bottomViewController;
@property(setter=_setToolbarClass:) Class _toolbarClass;
@property(getter=_builtinTransitionStyle,setter=_setBuiltinTransitionStyle:) long long builtinTransitionStyle;
@property(getter=_builtinTransitionGap,setter=_setBuiltinTransitionGap:) double builtinTransitionGap;
@property(getter=_allowNestedNavigationControllers,setter=_setAllowNestedNavigationControllers:) bool allowNestedNavigationControllers;
@property(getter=_isNestedNavigationController,setter=_setIsNestedNavigationController:) bool isNestedNavigationController;
@property(getter=isInteractiveTransition) bool interactiveTransition;
@property(getter=_backdropGroupName,setter=_setBackdropGroupName:,retain) NSString * _backdropGroupName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (bool)doesOverrideSupportedInterfaceOrientations;
+ (bool)_directlySetsContentOverlayInsetsForChildren;

- (double)_builtinTransitionGap;
- (long long)_builtinTransitionStyle;
- (id)_barTapHideGesture;
- (id)_barSwipeHideGesture;
- (id)_keyboardAppearedNotificationToken;
- (bool)_barAnimationWasCancelled;
- (id)_cachedInteractionController;
- (id)_cachedTransitionController;
- (bool)hidesBarsOnTap;
- (bool)hidesBarsWhenVerticallyCompact;
- (bool)hidesBarsWhenKeyboardAppears;
- (Class)_toolbarClass;
- (id)barHideOnTapGestureRecognizer;
- (id)barHideOnSwipeGestureRecognizer;
- (void)setCondensesBarsOnSwipe:(bool)arg1;
- (bool)condensesBarsOnSwipe;
- (void)_setKeyboardNotificationToken:(id)arg1;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(bool)arg2;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popViewControllerWithAnimationTransition:(long long)arg1 duration:(double)arg2 curve:(long long)arg3;
- (bool)isAlreadyPoppingNavItem;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(bool)arg2;
- (void)_updateBottomBarHiddenState;
- (void)_resetBottomBarHiddenState;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)__viewWillLayoutSubviews;
- (id)_builtinTransitionController;
- (void)_setCustomTransition:(bool)arg1;
- (bool)isBuiltinTransition;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(long long)arg2;
- (id)_screenEdgePanGestureRecognizer;
- (bool)isShown;
- (void)setToolbar:(id)arg1;
- (void)_sendNavigationBarToBack;
- (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(bool)arg1;
- (bool)avoidMovingNavBarOffscreenBeforeUnhiding;
- (void)_setSearchHidNavigationBar:(bool)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (Class)navigationBarClass;
- (void)_setBuiltinTransitionGap:(double)arg1;
- (void)_setBuiltinTransitionStyle:(long long)arg1;
- (void)_setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setClipsToBounds:(bool)arg1;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(bool)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (void)setViewControllers:(id)arg1;
- (void)setEnableBackButtonDuringTransition:(bool)arg1;
- (void)setAllowUserInteractionDuringTransition:(bool)arg1;
- (bool)_useCurrentStatusBarHeight;
- (void)_setUseStandardStatusBarHeight:(bool)arg1;
- (void)_setUseCurrentStatusBarHeight:(bool)arg1;
- (void)_setDidExplicitlyHideTabBar:(bool)arg1;
- (void)_setCrossfadingInTabBar:(bool)arg1;
- (void)_setCrossfadingOutTabBar:(bool)arg1;
- (bool)_isCrossfadingInTabBar;
- (bool)_isCrossfadingOutTabBar;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_setClipUnderlapWhileTransitioning:(bool)arg1;
- (struct CGSize { double x1; double x2; })_adjustedContentSizeForPopover:(struct CGSize { double x1; double x2; })arg1;
- (bool)pretendNavBarHidden;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_setBarsHidden:(bool)arg1;
- (void)_gestureRecognizedToggleVisibility:(id)arg1;
- (id)_barInteractiveAnimationCoordinator;
- (void)_gestureRecognizedInteractiveHide:(id)arg1;
- (void)_makeBarHideGestureIfNecessary;
- (void)_makeBarSwipeGestureIfNecessary;
- (bool)hidesBarsOnSwipe;
- (void)_hideForKeyboardAppearance;
- (void)_setBarsHidden:(bool)arg1 allowAnimation:(bool)arg2;
- (void)_configureBarTapGesture;
- (void)_configureBarSwipeGesture;
- (void)_configureKeyboardBarHiding;
- (id)_findViewControllerToPopToForNavigationItem:(id)arg1;
- (id)_existingToolbarWithItems;
- (bool)_useCrossFadeForGestureHiding;
- (bool)_shouldHideBarsForTraits:(id)arg1;
- (bool)_doesTopViewControllerSupportInterfaceOrientation:(long long)arg1;
- (void)makeModalViewControllerTopViewController;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(bool)arg1;
- (id)_snapshotView;
- (bool)_didExplicitlyHideTabBar;
- (id)_findViewControllerToPopTo;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(bool)arg2;
- (id)_nthChildViewControllerFromTop:(unsigned long long)arg1;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(bool)arg3;
- (void)setToolbarHidden:(bool)arg1;
- (void)_setIsNestedNavigationController:(bool)arg1;
- (void)_setUpdateNavigationBarHandler:(id)arg1;
- (id)_updateNavigationBarHandler;
- (void)_startCustomTransition:(id)arg1;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)willShowViewController:(id)arg1 animated:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_expectedContentInsetDeltaForViewController:(id)arg1;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (double)_scrollViewTopContentInsetForViewController:(id)arg1;
- (bool)_shouldTabBar:(id)arg1 insetViewController:(id)arg2;
- (bool)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (void)_layoutViewController:(id)arg1;
- (bool)_shouldBottomBarBeHidden;
- (bool)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (bool)_shouldStatusBarInsetViewController:(id)arg1;
- (bool)_shouldNavigationBarInsetViewController:(id)arg1;
- (bool)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(bool*)arg3;
- (bool)_shouldTabBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(bool*)arg3;
- (bool)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(bool*)arg2;
- (bool)_isNavigationBarEffectivelyVisible;
- (bool)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (bool)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (bool)_isNavigationBarVisible;
- (void)setNeedsDeferredTransition:(bool)arg1;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (void)_clearLastOperation;
- (void)_presentationTransitionUnwrapViewController:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)viewControllers;
- (id)_viewControllerForDisappearCallback;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_positionToolbarHidden:(bool)arg1 edge:(unsigned long long)arg2 crossFade:(bool)arg3;
- (void)_positionToolbarHidden:(bool)arg1 edge:(unsigned long long)arg2;
- (void)_setToolbarHidden:(bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)setToolbarHidden:(bool)arg1 animated:(bool)arg2;
- (void)_configureToolbar;
- (void)_configureBarsAutomaticActions;
- (void)_positionToolbarHidden:(bool)arg1;
- (bool)isToolbarHidden;
- (void)setPretendNavBarHidden:(bool)arg1;
- (void)_layoutTopViewControllerInSheet;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_startInteractiveNavbarTransition;
- (void)_positionPaletteHidden:(bool)arg1 edge:(unsigned long long)arg2;
- (bool)_useStandardStatusBarHeight;
- (bool)_searchHidNavigationBar;
- (void)_positionNavigationBarHidden:(bool)arg1 edge:(unsigned long long)arg2;
- (bool)_animationParametersForHidingNavigationBar:(bool)arg1 lastOperation:(long long)arg2 edge:(unsigned long long*)arg3 duration:(double*)arg4;
- (long long)lastOperation;
- (bool)wasLastOperationAnimated;
- (void)_repositionPaletteWithNavigationBarHidden:(bool)arg1 duration:(double)arg2;
- (void)_layoutTopViewController;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (bool)_hasNestedNavigationController;
- (void)_setNavigationBarHidesCompletelyOffscreen:(bool)arg1;
- (void)_positionPaletteHidden:(bool)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (struct CGPoint { double x1; double x2; })_computeTopBarCenter:(id)arg1 hidden:(bool)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint { double x1; double x2; })arg4 offset:(double)arg5;
- (long long)_positionForBar:(id)arg1;
- (void)_positionNavigationBarHidden:(bool)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)_positionTopBar:(id)arg1 hidden:(bool)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint { double x1; double x2; })arg4 offset:(double)arg5;
- (void)_setNavigationBarHidden:(bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(bool)arg1 edgeIfNotNavigating:(unsigned long long)arg2 duration:(double)arg3;
- (void)setNavigationBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)_positionNavigationBarHidden:(bool)arg1;
- (id)_backdropGroupName;
- (void)_setBackdropGroupName:(id)arg1;
- (id)_navigationBarHiddenByDefault:(bool)arg1;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(long long)arg2;
- (long long)_navigationTransitionForUITransition:(int)arg1;
- (void)_cancelInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (void)_finishInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (void)_setUsingBuiltinAnimator:(bool)arg1;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(long long)arg2 fromView:(id)arg3 toView:(id)arg4;
- (id)navigationTransitionView;
- (bool)_isPerformingLayoutToLayoutTransition;
- (id)_keyboardAnimationStyle;
- (int)_deferredTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForWrapperViewForViewController:(id)arg1;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (id)_transitionAnimationContext;
- (void)_startInteractiveToolbarTransition;
- (bool)isInteractiveTransition;
- (bool)_shouldCrossFadeBottomBars;
- (bool)_isUsingBuiltinAnimator;
- (bool)isCustomTransition;
- (bool)_toolbarIsAnimatingInteractively;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(double)arg3 isFinished:(bool)arg4 didComplete:(bool)arg5 completionSpeed:(double)arg6 completionCurve:(long long)arg7;
- (id)_navigationBarForNestedNavigationController;
- (bool)_navbarIsAppearingInteractively;
- (void)_setNavbarAnimationId:(id)arg1;
- (id)_startInteractiveBarTransition:(id)arg1;
- (void)_setBarAnimationWasCancelled:(bool)arg1;
- (id)_navbarAnimationId;
- (id)_toolbarAnimationId;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (void)_executeNavigationHandler:(id)arg1 deferred:(bool)arg2;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_propagateContentAdjustmentsForControllersWithSharedViews;
- (void)_startDeferredTransitionIfNeeded;
- (double)customNavigationTransitionDuration;
- (id)_customInteractionController:(id)arg1;
- (void)_presentationTransitionWrapViewController:(id)arg1 forTransitionContext:(id)arg2;
- (bool)allowUserInteractionDuringTransition;
- (void)setCustomNavigationTransitionDuration:(double)arg1;
- (id)_customTransitionController:(bool)arg1;
- (bool)_usesTransitionController;
- (void)setNeedsDeferredTransition;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(bool)arg3 operation:(long long)arg4;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(bool)arg3 operation:(long long)arg4;
- (id)_existingNavigationBar;
- (id)interactivePopGestureRecognizer;
- (id)_navigationItems;
- (id)_outermostNavigationController;
- (bool)needsDeferredTransition;
- (bool)_transitionConflictsWithNavigationTransitions:(id)arg1;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(bool)arg3;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (id)visibleViewController;
- (void)_setToolbarAnimationId:(id)arg1;
- (void)_setCachedInteractionController:(id)arg1;
- (void)_setCachedTransitionController:(id)arg1;
- (void)_releaseContainerViews;
- (void)_setBarTapHideGesture:(id)arg1;
- (void)_setInteractiveAnimationCoordinator:(id)arg1;
- (void)_setBarSwipeHideGesture:(id)arg1;
- (void)_setKeyboardAppearedNotificationToken:(id)arg1;
- (void)setHidesBarsOnTap:(bool)arg1;
- (void)setHidesBarsWhenVerticallyCompact:(bool)arg1;
- (void)setHidesBarsOnSwipe:(bool)arg1;
- (void)setHidesBarsWhenKeyboardAppears:(bool)arg1;
- (void)_setVisualAltitudeForBar:(id)arg1;
- (void)_confirmBarAccessMethods;
- (id)toolbar;
- (void)_setToolbarClass:(Class)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setDisappearingViewController:(id)arg1;
- (id)disappearingViewController;
- (bool)_viewControllerWasSelected;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(bool)arg2;
- (double)_topBarHeight;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (id)tabBarItem;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)_setAllowNestedNavigationControllers:(bool)arg1;
- (bool)_allowNestedNavigationControllers;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (void)_updateInteractivePopGestureEnabledState;
- (id)defaultPNGName;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)bottomViewController;
- (id)_lastNavigationItems;
- (bool)_isNestedNavigationController;
- (bool)searchBarHidNavBar;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (bool)_shouldSynthesizeSupportedOrientations;
- (bool)_allowsAutorotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_setInteractionController:(id)arg1;
- (void)_setTransitionController:(id)arg1;
- (long long)modalTransitionStyle;
- (id)_transitionController;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (int)_keyboardDirectionForTransition:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 displayingTopView:(bool)arg2 andBottomView:(bool)arg3;
- (bool)_reallyWantsFullScreenLayout;
- (bool)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (id)_backdropBarGroupName;
- (void)updateTitleForViewController:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_didGainChildScrollView:(id)arg1;
- (void)viewDidUnload;
- (void)setSearchBarHidNavBar:(bool)arg1;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_isPresentationContextByDefault;
- (id)_viewForContentInPopover;
- (bool)isModalInPopover;
- (void)setContentSizeForViewInPopover:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (void)_updateChildContentMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)viewWillAppear:(bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (id)_builtinInteractionController;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (bool)editing;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (bool)enableBackButtonDuringTransition;
- (bool)_willPerformCustomNavigationTransitionForPop;
- (bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (double)_customNavigationTransitionDuration;
- (bool)_isInteractiveCustomNavigationTransition;
- (bool)_shouldCrossFadeNavigationBar;
- (bool)_willPerformCustomNavigationTransitionForPush;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (void)_updatePaletteBackground;
- (void)_updatePaletteConstraints;
- (void)setNavigationBar:(id)arg1;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (id)_transitionCoordinator;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)becomeFirstResponder;
- (id)_deepestUnambiguousResponder;
- (long long)preferredStatusBarStyle;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)setInteractiveTransition:(bool)arg1;
- (id)previousViewController;
- (id)navigationItem;
- (id)topViewController;
- (id)_existingToolbar;
- (bool)isNavigationBarHidden;
- (id)navigationBar;
- (bool)_shouldPopFromLandscapeToPortraitOrientation;
- (bool)_shouldUseBuiltinInteractionController;
- (bool)_isTransitioning;
- (id)_interactionController;
- (bool)_clipUnderlapWhileTransitioning;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)setIsExpanded:(bool)arg1;
- (bool)isExpanded;
- (id)detailViewController;
- (void)setDetailViewController:(id)arg1;
- (id)paletteForEdge:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)detachPalette:(id)arg1;
- (void)_detachPalette:(id)arg1;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(bool)arg2;
- (id)existingPaletteForEdge:(unsigned long long)arg1;
- (void)attachPalette:(id)arg1 isPinned:(bool)arg2;
- (id)_pinningBarForPalette:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForPalette:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)_topPalette;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPalette:(id)arg1;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(bool)arg2;
- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;
- (id)_additionalViewControllersToCheckForUserActivity;

@end