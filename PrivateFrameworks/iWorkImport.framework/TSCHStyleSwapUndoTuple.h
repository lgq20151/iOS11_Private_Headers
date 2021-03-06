/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleSwapUndoTuple : NSObject {
    int  mIndex;
    TSSPropertySet * mMutatedProperties;
    TSSStyle * mNewValue;
    TSSStyle * mOldValue;
    NSUUID * mRefLineUUID;
    TSPObject<TSCHStyleSwapSupporting> * mStyleSwapSupporting;
    int  mSwapType;
}

@property (readonly) TSSStyle *afterValue;
@property (readonly) TSSStyle *beforeValue;
@property (readonly) TSSPropertyMap *forwardDelta;
@property (readonly) unsigned long long index;
@property (readonly) TSSPropertySet *mutatedProperties;
@property (readonly) NSUUID *refLineUUID;
@property (readonly) TSSPropertyMap *reverseDelta;
@property (readonly) TSCHStyleSemanticTag *semanticTag;
@property (readonly) TSCHStyleOwnerReference *styleOwnerReference;
@property (nonatomic, readonly, retain) TSPObject<TSCHStyleSwapSupporting> *styleSwapSupporting;
@property (readonly) int swapType;

+ (id)convertedSwapTuplesForSwapTuples:(id)arg1 chartInfo:(id)arg2;
+ (bool)hasSwapTuplesRequiringConversion:(id)arg1;
+ (id)migratedSwapTuplesForSwapTuples:(id)arg1 documentRoot:(id)arg2;

- (id)afterValue;
- (id)beforeValue;
- (bool)canApplyTupleToStyleSwapSupporting:(id)arg1;
- (id)convertedSwapTupleForChartInfo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)forwardDelta;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initFromSOSWithSwapType:(int)arg1 index:(unsigned long long)arg2 oldValue:(id)arg3 newValue:(id)arg4 refLineUUID:(id)arg5;
- (id)initWithArchive:(const struct StyleSwapUndoTupleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; int x6; unsigned int x7; struct Reference {} *x8; struct Reference {} *x9; struct UUID {} *x10; }*)arg1 unarchiver:(id)arg2;
- (id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6;
- (id)initWithChartStylePreset:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (id)inverse;
- (bool)isEqual:(id)arg1;
- (bool)isSwappingSameStyleObject:(id)arg1;
- (bool)isSwappingSameStyleValues:(id)arg1;
- (id)migratedStyleForStyle:(id)arg1 documentRoot:(id)arg2;
- (id)migratedSwapTupleForDocumentRoot:(id)arg1;
- (id)mutatedProperties;
- (id)p_deltaFrom:(id)arg1 to:(id)arg2;
- (id)p_initWithPersistentStyleSwapSupporting:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6;
- (id)p_nonequalPropertiesFromMap:(id)arg1 toMap:(id)arg2;
- (id)refLineUUID;
- (id)reverseDelta;
- (void)saveToArchive:(struct StyleSwapUndoTupleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; int x6; unsigned int x7; struct Reference {} *x8; struct Reference {} *x9; struct UUID {} *x10; }*)arg1 archiver:(id)arg2;
- (id)semanticTag;
- (id)styleOwnerReference;
- (id)styleSwapSupporting;
- (int)swapType;

@end
