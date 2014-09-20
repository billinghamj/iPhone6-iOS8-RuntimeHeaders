/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSInvocation;

@interface _UIActionWhenIdle : NSObject  {
    NSInvocation *_invocation;
}

@property(retain) NSInvocation * invocation;

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void)setInvocation:(id)arg1;
- (void)addObserverToRunLoop;
- (id)initWithInvocation:(id)arg1;
- (id)invocation;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (bool)isValid;
- (void)invoke;
- (void)invalidate;
- (void)dealloc;

@end