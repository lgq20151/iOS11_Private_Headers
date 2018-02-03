/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue *alpha;
@property (readonly) DOMCSSPrimitiveValue *blue;
@property (readonly) DOMCSSPrimitiveValue *green;
@property (readonly) DOMCSSPrimitiveValue *red;

- (id)alpha;
- (id)blue;
- (struct CGColor { }*)color;
- (void)dealloc;
- (id)green;
- (id)red;

@end
