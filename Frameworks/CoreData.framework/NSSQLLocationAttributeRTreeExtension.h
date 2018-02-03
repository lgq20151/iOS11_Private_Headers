/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLLocationAttributeRTreeExtension : NSObject <NSSQLAttributeExtension> {
    NSAttributeDescription * _attributeDescription;
    NSString * _attributeName;
    NSArray * _bulkUpdateSQLStrings;
    NSArray * _components;
    NSArray * _dropSQLStrings;
    NSArray * _insertSQLStrings;
    NSAttributeDescription * _latProp;
    NSAttributeDescription * _longProp;
    NSString * _rtreeTableName;
    NSSQLEntity * _sqlEntity;
    NSObject * _userInfoObject;
}

@property (nonatomic, readonly) NSAttributeDescription *attributeDescription;
@property (nonatomic, readonly) NSArray *bulkUpdateSQLStrings;
@property (nonatomic, readonly) NSArray *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dropSQLStrings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *insertSQLStrings;
@property (nonatomic, readonly) NSAttributeDescription *latProp;
@property (nonatomic, readonly) NSAttributeDescription *longProp;
@property (nonatomic, readonly) NSString *rtreeTableName;
@property (nonatomic, readonly) NSSQLEntity *sqlEntity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject *userInfoObject;

+ (id)newRTReeTableNameForAttribute:(id)arg1 onEntity:(id)arg2;

- (id)attributeDescription;
- (id)bulkUpdateSQLStrings;
- (id)components;
- (void)dealloc;
- (id)dropSQLStrings;
- (void)generateSQLStrings;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
- (id)insertSQLStrings;
- (bool)isEqualToExtension:(id)arg1;
- (id)latProp;
- (id)longProp;
- (id)rtreeTableName;
- (id)sqlEntity;
- (id)userInfoObject;
- (bool)validate:(id*)arg1;
- (bool)validatePropertyWithDescription:(id)arg1 andName:(id)arg2 forUseAs:(id)arg3 onAttributeNamed:(id)arg4 onEntityNamed:(id)arg5 error:(id*)arg6;

@end
