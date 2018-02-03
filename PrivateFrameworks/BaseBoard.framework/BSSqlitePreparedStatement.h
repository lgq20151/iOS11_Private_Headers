/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSqlitePreparedStatement : NSObject {
    BSSqliteDatabaseConnection * _dbConnection;
}

+ (id)_newPreparedStatementForDatabaseConnection:(id)arg1 withSQLQuery:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithDatabaseConnection:(id)arg1;
- (void)dealloc;
- (bool)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (id)init;

@end
