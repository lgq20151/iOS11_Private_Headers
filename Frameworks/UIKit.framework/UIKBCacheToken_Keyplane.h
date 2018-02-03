/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {
    NSString * _annotations;
    NSString * _cachedGestureKeySetName;
    NSString * _geometrySetName;
    NSString * _keySetName;
    NSString * _locale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    union { 
        struct { 
            unsigned int idiom : 6; 
            unsigned int landscape : 1; 
            unsigned int split : 1; 
            unsigned int appearance : 8; 
            unsigned int rendering : 8; 
            unsigned int padding : 8; 
        } styling; 
        int intValue; 
    }  _style;
}

+ (id)tokenForKeyplane:(id)arg1;

- (id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2;
- (void)annotateWithBool:(bool)arg1;
- (void)annotateWithInt:(int)arg1;
- (void)dealloc;
- (bool)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)stringForSplitState:(bool)arg1 handBias:(long long)arg2;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })styling;

@end
