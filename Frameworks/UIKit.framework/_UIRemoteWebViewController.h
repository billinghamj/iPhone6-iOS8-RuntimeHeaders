/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIWebViewController;

@interface _UIRemoteWebViewController : _UIRemoteViewController  {
    _UIWebViewController *_webViewController;
}

@property _UIWebViewController * webViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)setWebViewController:(id)arg1;
- (id)webViewController;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end