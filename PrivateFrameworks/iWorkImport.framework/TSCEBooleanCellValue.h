/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEBooleanCellValue : TSCECellValue {
    struct TSCEBooleanValue { int (**x1)(); bool x2; } * _booleanValue;
}

- (struct TSCEBooleanValue { int (**x1)(); bool x2; }*)booleanValue;
- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct BooleanCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; bool x5; }*)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct BooleanCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; bool x5; }*)arg1 locale:(id)arg2;
- (id)initWithBoolean:(bool)arg1 locale:(id)arg2;
- (id)initWithBooleanValue:(struct TSCEBooleanValue { int (**x1)(); bool x2; }*)arg1 locale:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellValue:(id)arg1;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })tsceValue;

@end
