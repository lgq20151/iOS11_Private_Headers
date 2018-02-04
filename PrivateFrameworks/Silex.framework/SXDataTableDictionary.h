/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableDictionary : NSObject <NSFastEnumeration> {
    NSMutableIndexSet * _indexes;
    unsigned long long  _numberOfColumns;
    unsigned long long  _numberOfRows;
    NSMutableArray * _storage;
}

@property (nonatomic, retain) NSMutableIndexSet *indexes;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, retain) NSMutableArray *storage;

+ (id)dataTableDictionaryWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)arrayWithObject:(id)arg1 forCount:(unsigned long long)arg2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)indexForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })indexPathForIndex:(unsigned long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })indexPathOfObject:(id)arg1;
- (id)indexes;
- (id)initWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (id)objectForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeAllObjects;
- (void)removeObjectForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIndexes:(id)arg1;
- (void)setObject:(id)arg1 forIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setStorage:(id)arg1;
- (id)storage;

@end