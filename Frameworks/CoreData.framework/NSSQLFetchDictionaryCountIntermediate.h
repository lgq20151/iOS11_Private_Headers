/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate {
    NSSQLFetchIntermediate * _realFetch;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithFetchIntermediate:(id)arg1 inScope:(id)arg2;

@end
