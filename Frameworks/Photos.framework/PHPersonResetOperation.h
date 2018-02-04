/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPersonResetOperation : NSOperation {
    unsigned long long  _batchSize;
    id /* block */  _completionHandler;
    unsigned long long  _deletedFaceCrops;
    unsigned long long  _deletedFaces;
    unsigned long long  _deletedPersons;
    PHFetchResult * _faceCropsToDelete;
    PHFetchResult * _facesToDelete;
    PHPhotoLibrary * _library;
    PHFetchResult * _personsToDelete;
    id /* block */  _progressHandler;
    bool  _shouldDeleteAllFaceCrops;
    bool  _shouldResetPhotoAnalysis;
    unsigned long long  _totalFaceCropsToDelete;
    unsigned long long  _totalFacesToDelete;
    unsigned long long  _totalPersonsToDelete;
}

+ (id)resetAllPersonsOperationWithBatchSize:(unsigned long long)arg1 shouldResetPhotoAnalysis:(bool)arg2 photoLibrary:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (id)resetOperationsForPersons:(id)arg1 batchSize:(unsigned long long)arg2 photoLibrary:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_enumerateFetchResult:(id)arg1 withBatchSize:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)_prepareToDeleteFaceCrops;
- (id)initWithPersonsToDelete:(id)arg1 facesToDelete:(id)arg2 shouldDeleteAllFaceCrops:(bool)arg3 shouldResetPhotoAnalysis:(bool)arg4 batchSize:(unsigned long long)arg5 photoLibrary:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (bool)isAsynchronous;
- (void)main;

@end