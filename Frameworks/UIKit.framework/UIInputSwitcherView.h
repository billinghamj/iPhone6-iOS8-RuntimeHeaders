/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UISwitch;

@interface UIInputSwitcherView : UIKeyboardMenuView  {
    int m_currentInputModeIndex;
    boolm_keyboardSettingsFromSwitcher;
    NSMutableArray *m_inputModes;
    UISwitch *m_predictiveSwitch;
}

@property(retain) NSArray * inputModes;
@property bool keyboardSettingsFromSwitcher;

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)selectPreviousInputMode;
- (void)selectNextInputMode;
- (void)selectRowForInputMode:(id)arg1;
- (void)switchAction;
- (bool)keyboardSettingsFromSwitcher;
- (void)setInputModes:(id)arg1;
- (void)setKeyboardSettingsFromSwitcher:(bool)arg1;
- (id)titleForItemAtIndex:(int)arg1;
- (id)subtitleFontForItemAtIndex:(int)arg1;
- (id)subtitleForItemAtIndex:(int)arg1;
- (id)fontForItemAtIndex:(int)arg1;
- (id)localizedTitleForItemAtIndex:(int)arg1;
- (void)didSelectItemAtIndex:(int)arg1;
- (void)toggleKeyboardPredictionPreference;
- (id)predictiveSwitch;
- (long long)defaultSelectedIndex;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)selectInputMode:(id)arg1;
- (id)nextInputMode;
- (id)inputModes;
- (id)previousInputMode;
- (id)selectedInputMode;
- (long long)numberOfItems;
- (void)setInputMode:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)show;

@end