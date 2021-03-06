/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentLibrary : PLManagedObject <PLAssetContainerList, PLMomentContainer>

@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOrderedSet *moments;
@property (readonly) Class superclass;

+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)sharedMomentLibraryInManagedObjectContext:(id)arg1;
+ (id)sharedMomentLibraryInManagedObjectContext:(id)arg1 createIfNecessary:(bool)arg2;

- (id)_typeDescription;
- (void)addMoments:(id)arg1;
- (void)addMomentsObject:(id)arg1;
- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (void)insertMoments:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inMomentsAtIndex:(unsigned long long)arg2;
- (bool)isEmpty;
- (void)prepareForDeletion;
- (void)removeMoments:(id)arg1;
- (void)removeMomentsAtIndexes:(id)arg1;
- (void)removeMomentsObject:(id)arg1;
- (void)removeObjectFromMomentsAtIndex:(unsigned long long)arg1;
- (void)replaceMomentsAtIndexes:(id)arg1 withMoments:(id)arg2;
- (void)replaceObjectInMomentsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
