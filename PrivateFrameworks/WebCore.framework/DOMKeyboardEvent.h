/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent  {
}

@property(copy,readonly) NSString * keyIdentifier;
@property(readonly) unsigned int location;
@property(readonly) unsigned int keyLocation;
@property(readonly) bool ctrlKey;
@property(readonly) bool shiftKey;
@property(readonly) bool altKey;
@property(readonly) bool metaKey;
@property(readonly) bool altGraphKey;
@property(readonly) int keyCode;
@property(readonly) int charCode;


- (void)initKeyboardEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(bool)arg7 altKey:(bool)arg8 shiftKey:(bool)arg9 metaKey:(bool)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(bool)arg7 altKey:(bool)arg8 shiftKey:(bool)arg9 metaKey:(bool)arg10 altGraphKey:(bool)arg11;
- (void)initKeyboardEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(bool)arg7 altKey:(bool)arg8 shiftKey:(bool)arg9 metaKey:(bool)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(bool)arg7 altKey:(bool)arg8 shiftKey:(bool)arg9 metaKey:(bool)arg10 altGraphKey:(bool)arg11;
- (bool)getModifierState:(id)arg1;
- (int)charCode;
- (int)keyCode;
- (bool)altGraphKey;
- (unsigned int)keyLocation;
- (id)keyIdentifier;
- (bool)metaKey;
- (bool)altKey;
- (bool)shiftKey;
- (bool)ctrlKey;
- (unsigned int)location;

@end