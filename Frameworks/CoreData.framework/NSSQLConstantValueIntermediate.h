/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
    id  _constantValue;
    unsigned char  _type;
}

- (bool)_addBindVarForConstId:(id)arg1 ofType:(unsigned char)arg2 inContext:(id)arg3;
- (bool)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithConstantValue:(id)arg1 inScope:(id)arg2 context:(id)arg3;
- (id)initWithConstantValue:(id)arg1 ofType:(unsigned char)arg2 inScope:(id)arg3 context:(id)arg4;
- (id)propertyAtEndOfKeyPathExpression:(id)arg1;
- (unsigned char)sqlTypeForProperty:(id)arg1;

@end