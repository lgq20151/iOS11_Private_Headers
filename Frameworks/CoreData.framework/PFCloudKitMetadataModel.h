/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitMetadataModel : NSObject

+ (id)_newMetadataModel;
+ (id)_newMetadataModelV1;
+ (void)addAttributes:(id)arg1 toPropertiesOfEntity:(id)arg2;
+ (void)addRelationships:(id)arg1 toPropertiesOfEntity:(id)arg2;
+ (void)applyMigrationStatementsForStore:(id)arg1 usingConnection:(id)arg2;
+ (void)applyPurgeStatementsForStore:(id)arg1 usingConnection:(id)arg2;
+ (bool)cachedVersionHashesMatchCurrent:(id)arg1;
+ (id)newMetadataModelForFrameworkVersion:(id)arg1;

@end
