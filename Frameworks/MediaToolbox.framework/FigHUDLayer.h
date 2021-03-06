/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigHUDLayer : CALayer  {
    struct __CTFont { } *_Font;
    double _FontSize;
    struct __CFDictionary { } *_TextAttributes;
    struct __CFArray { } *_Labels;
    struct __CFArray { } *_Values;
    struct __CFArray { } *_LabelColors;
    struct __CFArray { } *_ValueColors;
}


- (void)setValue:(struct __CFString { }*)arg1 atIndex:(int)arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setValueAtIndex:(int)arg1 format:(id)arg2;
- (struct __CFArray { }*)getLabels;
- (struct __CFArray { }*)getValues;
- (long long)addLine:(struct __CFString { }*)arg1 withColorIndex:(int)arg2;
- (void)resetLines;
- (void)setFont:(struct __CFString { }*)arg1 withPointSize:(double)arg2;
- (long long)addLine:(struct __CFString { }*)arg1 withLabelColorIndex:(int)arg2 withValueColorIndex:(int)arg3;

@end
