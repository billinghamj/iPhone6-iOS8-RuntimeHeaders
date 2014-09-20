/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIModalItemTextFiledBGView, UIView, UIScrollView, UITableView;

@interface _UIModalItemAlertContentView : _UIModalItemContentView  {
    _UIModalItemTextFiledBGView *_textFieldBGView;
    bool_alertViewIsSetup;
    UITableView *_otherTableView;
    UIView *_2ButtonsSeparators;
    UIView *_tableViewTopSeparator;
    UIScrollView *_labelsScrollView;
    bool_itemWantsVerticalButtons;
    bool_itemNeedsTwoTableViews;
}


- (void)_prepareViewIfNeeded;
- (void)setEnableFirstOtherButton:(bool)arg1;
- (void)_reloadButtons;
- (void)layout;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end