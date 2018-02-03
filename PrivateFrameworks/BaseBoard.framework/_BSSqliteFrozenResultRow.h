/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow {
    unsigned long long  _count;
    NSArray * _frozenColumnNames;
    NSArray * _frozenDatas;
    NSArray * _frozenDoubles;
    NSArray * _frozenIntegers;
    NSArray * _frozenObjects;
    NSArray * _frozenStrings;
}

- (unsigned long long)_indexForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dataAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (id)initWithResultRow:(id)arg1;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1;
- (long long)integerAtIndex:(unsigned long long)arg1;
- (bool)isValid;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;

@end
