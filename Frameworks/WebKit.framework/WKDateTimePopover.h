/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class WKContentView;

@interface WKDateTimePopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    struct RetainPtr<WKDateTimePopoverViewController> { 
        void *m_ptr; 
    } _viewController;
    WKContentView *_view;
}


- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;
- (void)clear:(id)arg1;
- (void).cxx_destruct;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (id).cxx_construct;
- (id)viewController;

@end
