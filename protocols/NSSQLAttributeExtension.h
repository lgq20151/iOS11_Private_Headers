/* made by EzioChiu.
 */

@protocol NSSQLAttributeExtension <NSObject>

@required

- (NSArray *)bulkUpdateSQLStrings;
- (NSArray *)dropSQLStrings;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(NSString *)arg2 onEntity:(NSSQLEntity *)arg3;
- (NSArray *)insertSQLStrings;
- (bool)isEqualToExtension:(NSObject<NSSQLAttributeExtension> *)arg1;
- (bool)validate:(id*)arg1;

@end
