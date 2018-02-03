/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextLineFragment : NSObject {
    NSAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    struct __CTLine { } * _lineRef;
    struct CGPoint { 
        double x; 
        double y; 
    }  glyphOrigin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  typographicBounds;
}

@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property struct CGPoint { double x1; double x2; } glyphOrigin;
@property (readonly) long long numberOfGlyphs;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } typographicBounds;

- (id)attributedString;
- (long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 fractionOfDistanceThroughGlyph:(double*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 context:(struct CGContext { }*)arg2;
- (struct CGPoint { double x1; double x2; })glyphOrigin;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct CGPoint { double x1; double x2; })locationForCharacterAtIndex:(long long)arg1;
- (long long)numberOfGlyphs;
- (void)setGlyphOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLineRef:(struct __CTLine { }*)arg1;
- (void)setTypographicBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicUsedBounds;

@end
