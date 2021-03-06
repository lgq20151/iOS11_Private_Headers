/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPrototypeForUndoMasterChange : TSPObject <TSSPropertySource> {
    NSArray * _childInfos;
    NSArray * _drawableInfoIdList;
    NSUUID * _masterSlideId;
    NSArray * _placeholderTagsList;
    NSArray * _placeholders;
    NSDictionary * _placeholdersForTags;
    KNSlideStyle * _style;
}

@property (nonatomic, readonly) NSArray *childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) KNMasterSlide *master;
@property (nonatomic, readonly) NSArray *placeholders;
@property (nonatomic, readonly) NSDictionary *placeholdersForTags;
@property (nonatomic, retain) KNSlideStyle *slideStyle;
@property (readonly) Class superclass;

+ (id)blobWithSlide:(id)arg1;

- (double)CGFloatValueForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (id)childInfos;
- (bool)containsProperty:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)didInitFromSOS;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)initWithSlide:(id)arg1;
- (int)intValueForProperty:(int)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)master;
- (void)migrateStyles;
- (id)objectForProperty:(int)arg1;
- (id)placeholders;
- (id)placeholdersForTags;
- (void)rebuildChildInfosAndPlaceholders;
- (void)saveToArchive:(struct PrototypeForUndoMasterChangeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct UUID {} *x6; struct RepeatedPtrField<TSP::UUID> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setSlideStyle:(id)arg1;
- (id)slideStyle;

@end
