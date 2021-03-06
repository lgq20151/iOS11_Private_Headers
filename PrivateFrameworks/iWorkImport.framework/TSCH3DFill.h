/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFill : TSDFill {
    TSDFill * _cachedImageFill;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedImageFillSize;
    TSDFill * _fallbackFill;
    TSCH3DFillSetIdentifier * _identifier;
    TSCH3DLightingModel * _lightingModel;
    NSNumber * _percentage;
    TSDFill * _swatchFill;
}

@property (nonatomic, retain) TSCH3DFillSetIdentifier *identifier;
@property (readonly) TSCH3DLightingModel *lightingModel;
@property (nonatomic, retain) NSNumber *percentage;
@property (nonatomic, readonly) float percentageValue;
@property (readonly) TSDFill *swatchFill;

+ (id)fill;
+ (id)fillWithIdentifier:(id)arg1;
+ (id)fillWithLightingModel:(id)arg1 identifier:(id)arg2;
+ (id)fillWithSageFillData:(id)arg1;
+ (id)instanceWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 unarchiver:(id)arg2;
+ (id)lightingModelWithSageFillData:(id)arg1;

- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1;
- (id)convertForChartSeriesType:(id)arg1 context:(id)arg2;
- (id)convertToSimpleTSDFillWithSize:(unsigned long long)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (int)fillType;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)identifier;
- (bool)identifierReferencesUnavailableLocalBundle;
- (id)init;
- (id)initWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 unarchiver:(id)arg2;
- (id)initWithLightingModel:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOpaque;
- (id)lightenByPercent:(float)arg1;
- (id)lightingModel;
- (void)nonatomicallyClearLightingModel;
- (void)nonatomicallySetLightingModel:(id)arg1;
- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2;
- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 context:(id)arg3;
- (id)p_iconFill;
- (id)p_imageFillForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (id)p_imageFillForSize:(struct CGSize { double x1; double x2; })arg1 context:(id)arg2;
- (id)p_lazyLightingModel;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 naturalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 isPDF:(bool)arg4;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)percentage;
- (float)percentageValue;
- (id)referenceColor;
- (id)renderingLightingModelWithLightings:(id)arg1;
- (id)representativeDiffuseColor;
- (id)sageFillData;
- (void)saveToArchive:(struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 archiver:(id)arg2;
- (void)setFallbackFill:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPercentage:(id)arg1;
- (id)swatchFill;
- (bool)tsch_hasAllResources;

@end
