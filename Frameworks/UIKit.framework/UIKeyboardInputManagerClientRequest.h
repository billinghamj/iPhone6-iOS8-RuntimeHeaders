/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject  {
    NSInvocation *_invocation;
    unsigned long long _errorCount;
}

@property(readonly) NSInvocation * invocation;
@property unsigned long long errorCount;

+ (id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(bool)arg2;

- (void)setErrorCount:(unsigned long long)arg1;
- (unsigned long long)errorCount;
- (id)initWithInvocation:(id)arg1;
- (id)invocation;
- (void)dealloc;

@end
