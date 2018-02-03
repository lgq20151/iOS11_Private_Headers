/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {
    bool  _implementsOrigins;
    CTGlyphStorageInterface * _interface;
}

@property (nonatomic, readonly) bool implementsOrigins;

- (long long)attachmentCountAtIndex:(long long)arg1;
- (id)copyWithRange:(struct { long long x1; long long x2; })arg1;
- (struct CGSize { double x1; double x2; })customAdvanceForIndex:(long long)arg1;
- (void)disposeGlyphStack;
- (bool)implementsOrigins;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (id)initWithInterface:(id)arg1;
- (void)insertGlyphsAtRange:(struct { long long x1; long long x2; })arg1;
- (void)moveGlyphsFromRange:(struct { long long x1; long long x2; })arg1 toIndex:(long long)arg2;
- (struct CGPoint { double x1; double x2; })originAtIndex:(long long)arg1;
- (const struct CGPoint { double x1; double x2; }*)origins;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)puntStringIndicesInRange:(struct { long long x1; long long x2; })arg1 by:(long long)arg2;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void*)refCon;
- (void)setAdvance:(struct CGSize { double x1; double x2; })arg1 atIndex:(long long)arg2;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)sync;

@end
