/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PACSSymbolOwnerWrapper : PACSRefWrapper {
    NSString * _path;
    bool  _usedDsymForUUID;
}

@property (readonly) NSString *path;
@property bool usedDsymForUUID;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 andPath:(id)arg2;
- (id)path;
- (void)setUsedDsymForUUID:(bool)arg1;
- (bool)usedDsymForUUID;

@end
