/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigHUDLayer : CALayer {
    struct __CTFont { } * _Font;
    double  _FontSize;
    struct __CFArray { } * _LabelColors;
    struct __CFArray { } * _Labels;
    struct __CFDictionary { } * _TextAttributes;
    struct __CFArray { } * _ValueColors;
    struct __CFArray { } * _Values;
}

- (long long)addLine:(struct __CFString { }*)arg1 withColorIndex:(int)arg2;
- (long long)addLine:(struct __CFString { }*)arg1 withLabelColorIndex:(int)arg2 withValueColorIndex:(int)arg3;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct __CFArray { }*)getLabels;
- (struct __CFArray { }*)getValues;
- (id)init;
- (void)resetLines;
- (void)setFont:(struct __CFString { }*)arg1 withPointSize:(double)arg2;
- (void)setValue:(struct __CFString { }*)arg1 atIndex:(int)arg2;
- (void)setValueAtIndex:(int)arg1 format:(id)arg2;

@end
