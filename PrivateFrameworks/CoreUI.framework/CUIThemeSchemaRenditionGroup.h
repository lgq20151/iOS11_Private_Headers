/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchemaRenditionGroup : NSObject {
    CUIRenditionKey * _baseKey;
    struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; } * _part;
    NSArray * _renditions;
}

@property (nonatomic, retain) NSArray *renditions;

+ (id)renditionGroupsForRenditions:(id)arg1 part:(struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg2;

- (id)_layerNameForDrawingLayer:(long long)arg1;
- (id)_layerNameForState:(long long)arg1;
- (id)_renditionsSortedIntoLayers;
- (void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2;
- (void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2;
- (void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 state:(unsigned long long)arg3 drawingLayer:(unsigned long long)arg4;
- (id)baseKey;
- (void)dealloc;
- (id)description;
- (id)initWithRenditions:(id)arg1 part:(struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg2;
- (id)mutablePSDImageRef;
- (id)mutablePSDImageRefColumnStyle;
- (long long)partFeatures;
- (id)renditions;
- (id)schemaLayersAndLayerGroups;
- (void)setRenditions:(id)arg1;
- (id)themeSchemaLayers;

@end
