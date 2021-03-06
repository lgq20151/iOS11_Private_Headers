/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFProtectedSQLiteConnectionConfiguration : MFSQLiteConnectionConfiguration {
    NSString * _protectedDatabaseName;
}

@property (nonatomic, readonly) const char *protectedDatabaseFileSystemPath;
@property (nonatomic, copy) NSString *protectedDatabaseName;
@property (nonatomic, readonly) NSString *protectedDatabasePath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const char *)protectedDatabaseFileSystemPath;
- (id)protectedDatabaseName;
- (id)protectedDatabasePath;
- (void)setProtectedDatabaseName:(id)arg1;

@end
