/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, _UIScreenEdgePanRecognizer;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {
    _UIScreenEdgePanRecognizer *_recognizer;
    unsigned long long _edges;
}

@property unsigned long long edges;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned long long)edges;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (bool)isRequiringLongPress;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (double)_edgeRegionSize;
- (void)reset;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEdges:(unsigned long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end