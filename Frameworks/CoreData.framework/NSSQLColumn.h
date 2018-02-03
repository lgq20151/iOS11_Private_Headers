/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLColumn : NSSQLProperty {
    NSString * _columnName;
}

- (void)_setColumnName:(id)arg1;
- (void)_setFetchIndex:(unsigned int)arg1;
- (void)_setSQLType:(unsigned char)arg1;
- (void)_setSlotIfDefault:(unsigned int)arg1;
- (bool)allowAliasing;
- (id)cloneForReadOnlyFetching;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)fetchIndex;
- (id)initForReadOnlyFetching;
- (id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned int)roughSizeEstimate;
- (void)setAllowAliasing:(bool)arg1;
- (unsigned int)slot;
- (unsigned char)sqlType;

@end
