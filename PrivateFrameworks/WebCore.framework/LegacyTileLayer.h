/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface LegacyTileLayer : CALayer {
    bool  _isRenderingInContext;
    unsigned int  _paintCount;
    struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_6_1_1; } x6; } * _tileGrid;
}

@property (nonatomic, readonly) bool isRenderingInContext;
@property (nonatomic) unsigned int paintCount;
@property (nonatomic) struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; /* Warning: unhandled struct encoding: '{HashMap<WebCore::IntPoint' */ struct x6; }*tileGrid; /* unknown property attribute:  WTF::RefPtr<WebCore::LegacyTileGridTile> >}IIII}}{IntRect={IntPoint=ii}{IntSize=ii}}} */

- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)isRenderingInContext;
- (void)layoutSublayers;
- (unsigned int)paintCount;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaintCount:(unsigned int)arg1;
- (void)setTileGrid:(struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_6_1_1; } x6; }*)arg1;
- (struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_6_1_1; } x6; }*)tileGrid;

@end
