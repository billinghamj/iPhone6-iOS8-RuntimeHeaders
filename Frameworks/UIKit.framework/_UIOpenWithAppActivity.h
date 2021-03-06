/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIDocumentInteractionController, LSApplicationProxy;

@interface _UIOpenWithAppActivity : UIActivity  {
    LSApplicationProxy *_appProxy;
    bool_defaultApp;
    UIDocumentInteractionController *_documentInteractionController;
    NSString *_activityType;
}

@property(getter=isDefaultApp) bool defaultApp;

+ (long long)activityCategory;

- (void)setDefaultApp:(bool)arg1;
- (bool)isDefaultApp;
- (void)performActivity;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;

@end
