/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSATSLineFragment : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    long long  _elasticCharIndex;
    double  _elasticRangeWidth;
    struct { 
        unsigned int _directionState : 2; 
        unsigned int _drawsOutside : 1; 
        unsigned int _standaloneAttachment : 1; 
        unsigned int _reserved : 28; 
    }  _flags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _glyphRange;
    unsigned int  _hyphenGlyph;
    double  _hyphenGlyphWidth;
    void * _line;
    double  _maxPosition;
    double  _minPosition;
    NSATSTypesetter * _typesetter;
}

@property (getter=isStandaloneTextAttachment, readonly) bool standaloneTextAttachment;

- (long long)_charIndexToBreakLineByWordWrappingAtIndex:(long long)arg1 lineFragmentWidth:(double)arg2 hyphenate:(bool*)arg3;
- (id)_copyRenderingContextWithGlyphOrigin:(double)arg1;
- (void)_flushCachedObjects;
- (void)_invalidate;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (void)finalize;
- (void)getTypographicLineHeight:(double*)arg1 baselineOffset:(double*)arg2 leading:(double*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRange;
- (bool)hasElasticRange;
- (id)initWithTypesetter:(id)arg1;
- (bool)isStandaloneTextAttachment;
- (void)justifyWithFactor:(double)arg1;
- (void)layoutForStartingGlyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 lineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (double)lineWidthForType:(int)arg1;
- (void)resolveOpticalAlignmentUpdatingMinPosition:(double*)arg1 maxPosition:(double*)arg2;
- (long long)resolvedLineBreakMode:(bool)arg1;
- (void)saveMorphedGlyphs:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)saveWithGlyphOrigin:(double)arg1;

@end
