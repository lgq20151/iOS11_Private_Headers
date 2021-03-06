/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataImportWarningSet : TSTTableDataObject {
    TSTImportWarningSet * _importWarningSet;
}

@property (nonatomic, readonly) TSTImportWarningSet *importWarningSet;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)importWarningSet;
- (id)initObjectWithImportWarningSet:(id)arg1 refCount:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;

@end
