/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPhysicalButtonsEvent, <UIGestureRecognizerDelegate>, NSMutableSet, UIView, UITouchesEvent, NSMutableArray;

@interface UIGestureRecognizer : NSObject  {
    NSMutableArray *_targets;
    NSMutableArray *_delayedTouches;
    UIView *_view;
    UITouchesEvent *_updateEvent;
    UIPhysicalButtonsEvent *_updateButtonEvent;
    <UIGestureRecognizerDelegate> *_delegate;
    NSMutableSet *_friends;
    long long _state;
    struct { 
        unsigned int delegateShouldBegin : 1; 
        unsigned int delegateCanPrevent : 1; 
        unsigned int delegateCanBePrevented : 1; 
        unsigned int delegateShouldRecognizeSimultaneously : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldRequireFailure : 1; 
        unsigned int delegateShouldBeRequiredToFail : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int privateDelegateShouldBegin : 1; 
        unsigned int privateDelegateCanPrevent : 1; 
        unsigned int privateDelegateCanBePrevented : 1; 
        unsigned int privateDelegateShouldRecognizeSimultaneously : 1; 
        unsigned int privateDelegateShouldReceiveTouch : 1; 
        unsigned int privateDelegateShouldRequireFailure : 1; 
        unsigned int privateDelegateShouldBeRequiredToFail : 1; 
        unsigned int subclassShouldRequireFailure : 1; 
        unsigned int subclassShouldBeRequiredToFail : 1; 
        unsigned int privateSubclassShouldRequireFailure : 1; 
        unsigned int privateSubclassShouldBeRequiredToFail : 1; 
        unsigned int hasSubclassDynamicFailureRequirements : 1; 
        unsigned int hasDelegateDynamicFailureRequirements : 1; 
        unsigned int queriedFailureRequirements : 1; 
        unsigned int cancelsTouchesInView : 1; 
        unsigned int delaysTouchesBegan : 1; 
        unsigned int delaysTouchesEnded : 1; 
        unsigned int disabled : 1; 
        unsigned int dirty : 1; 
        unsigned int delivered : 1; 
        unsigned int deliveredEndedOrCancelled : 1; 
        unsigned int continuous : 1; 
        unsigned int requiresDelayedBegan : 1; 
        unsigned int willBeginAfterSatisfyingFailureRequirements : 1; 
        unsigned int requiresSystemGesturesToFail : 1; 
        unsigned int acceptsFailureRequirements : 1; 
    } _gestureFlags;
    NSMutableSet *_failureRequirements;
    NSMutableSet *_failureDependents;
    NSMutableSet *_dynamicFailureRequirements;
    NSMutableSet *_dynamicFailureDependents;
    id _failureMap;
}

@property(readonly) long long state;
@property <UIGestureRecognizerDelegate> * delegate;
@property(getter=isEnabled) bool enabled;
@property(readonly) UIView * view;
@property bool cancelsTouchesInView;
@property bool delaysTouchesBegan;
@property bool delaysTouchesEnded;

+ (bool)_touchesBeganWasDelayedForTouch:(id)arg1;

- (void)_invalidate;
- (bool)_acceptsFailureRequirements;
- (void)_failureRequirementCompleted:(id)arg1 withEvent:(id)arg2;
- (void)removeFailureRequirement:(id)arg1;
- (void)_addDynamicFailureRequirement:(id)arg1;
- (void)_addDynamicFailureDependent:(id)arg1;
- (void)_exclude;
- (void)_cancelRecognition;
- (bool)_isExcludedByGesture:(id)arg1;
- (void)_addFriendGesture:(id)arg1;
- (long long)_depthFirstViewCompare:(id)arg1;
- (void)_resetIfFinished;
- (void)_delayedUpdateGesture;
- (bool)_requiresGestureRecognizerToFail:(id)arg1;
- (void)_touchWasCancelled:(id)arg1;
- (double)_distanceBetweenTouches:(id)arg1;
- (struct CGPoint { double x1; double x2; })_centroidOfTouches:(id)arg1 excludingEnded:(bool)arg2;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (bool)_shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (bool)_hasTargets;
- (id)_delayedTouches;
- (void)_setFailureMap:(id)arg1;
- (id)_failureMap;
- (void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4;
- (void)_appendSubclassDescription:(id)arg1;
- (bool)delaysTouchesEnded;
- (bool)cancelsTouchesInView;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(bool)arg3;
- (void)_removeFailureDependent:(id)arg1;
- (void)_addFailureDependent:(id)arg1;
- (bool)_delegateCanPreventGestureRecognizer:(id)arg1;
- (bool)_affectedByGesture:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1;
- (void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2;
- (void)_delayTouchesForEvent:(id)arg1;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)_clearDelayedTouches;
- (void)_delayTouch:(id)arg1 forEvent:(id)arg2;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (bool)_isFriendWithGesture:(id)arg1;
- (bool)_shouldBegin;
- (void)_clearUpdateTimer;
- (void)_enqueueDelayedTouchesToSend;
- (void)_clearReferencesToRelatedGesture:(id)arg1;
- (bool)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (id)_briefDescription;
- (bool)delaysTouchesBegan;
- (void)_resetGestureRecognizer;
- (void)_setAcceptsFailureRequiments:(bool)arg1;
- (void)reset;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (void)requireOtherGestureToFail:(id)arg1;
- (bool)_delegateShouldReceiveTouch:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (bool)_isRecognized;
- (id)_activeTouchesForEvent:(id)arg1;
- (unsigned long long)numberOfTouches;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)setDelaysTouchesEnded:(bool)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (bool)_requiresSystemGesturesToFail;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)_setDirty;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setView:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_ignorePhysicalButton:(id)arg1 forEvent:(id)arg2;
- (void)_queueForResetIfFinished;
- (void)_updateGestureStateWithEvent:(id)arg1 buttonEvent:(id)arg2 afterDelay:(bool)arg3;
- (void)setState:(long long)arg1;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)_isDirty;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)_setRequiresSystemGesturesToFail:(bool)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (long long)state;
- (void)setDelaysTouchesBegan:(bool)arg1;
- (id)view;
- (id)delegate;
- (id)description;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)_detach;

@end
