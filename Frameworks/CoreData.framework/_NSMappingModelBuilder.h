/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSMappingModelBuilder : NSObject {
    NSEntityMapping * _currentEntityMapping;
    NSManagedObjectModel * _destinationModel;
    NSError * _error;
    NSManagedObjectModel * _sourceModel;
}

+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;

- (bool)_canTransformSourceAttributeType:(unsigned long long)arg1 toDestinationAttributeType:(unsigned long long)arg2;
- (void)_resetCaches;
- (void)dealloc;
- (bool)inferPropertyMappingsForEntityMapping:(id)arg1;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2;
- (id)newInferredMappingModel:(id*)arg1;
- (id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2;
- (id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2;

@end
