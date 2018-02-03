/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLJoinIntermediate : NSSQLIntermediate {
    NSString * _correlationAlias;
    NSString * _destinationAlias;
    bool  _direct;
    NSSQLRelationship * _relationship;
    NSString * _sourceAlias;
    unsigned long long  _type;
}

+ (id)createJoinIntermediatesForKeypath:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 forScope:(id)arg4 inStatementIntermediate:(id)arg5 inContext:(id)arg6;
+ (id)createManyToManyJoinIntermediateForProperty:(id)arg1 direct:(bool)arg2 lastStep:(id)arg3 inScope:(id)arg4 context:(id)arg5;
+ (id)createToManyJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4;
+ (id)createToOneJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4;

- (id)_generateManyToManySQLStringInContext:(id)arg1;
- (id)_generateToManySQLStringInContext:(id)arg1;
- (id)_generateToOneSQLStringInContext:(id)arg1;
- (id)correlationAlias;
- (void)dealloc;
- (id)description;
- (id)destinationAlias;
- (id)destinationEntity;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initForRelationship:(id)arg1 sourceAlias:(id)arg2 destinationAlias:(id)arg3 correlationAlias:(id)arg4 direct:(bool)arg5 inScope:(id)arg6;
- (bool)isDirect;
- (bool)joinType;
- (id)relationship;
- (void)setDestinationAlias:(id)arg1;
- (void)setDirect:(bool)arg1;
- (void)setJoinType:(unsigned long long)arg1;
- (void)setSourceAlias:(id)arg1;
- (id)sourceAlias;
- (id)sourceEntity;

@end