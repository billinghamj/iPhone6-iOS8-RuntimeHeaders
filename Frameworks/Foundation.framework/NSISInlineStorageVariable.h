/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {
    NSString *_name;
    int _valueRestriction;
    bool_shouldBeMinimized;
}

@property(copy) NSString * name;
@property int valueRestriction;
@property bool shouldBeMinimized;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (oneway void)dealloc;
- (void)setShouldBeMinimized:(bool)arg1;
- (void)setValueRestriction:(int)arg1;
- (bool)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end