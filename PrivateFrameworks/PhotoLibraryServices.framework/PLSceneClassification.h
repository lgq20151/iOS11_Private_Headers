/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSceneClassification : PLManagedObject

@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic) double confidence;
@property (nonatomic) unsigned int sceneIdentifier;

+ (void)batchFetchScenesByAssetUUIDWithAssetUUIDs:(id)arg1 completion:(id /* block */)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 assetUUID:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4;

- (id)debugLogDescription;

@end