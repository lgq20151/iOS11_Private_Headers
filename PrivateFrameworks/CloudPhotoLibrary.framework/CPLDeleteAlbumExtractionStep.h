/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLDeleteAlbumExtractionStep : CPLBatchExtractionStep {
    unsigned long long  _maximumCount;
}

@property (nonatomic, readonly) unsigned long long maximumCount;

- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithStorage:(id)arg1 maximumCount:(unsigned long long)arg2;
- (unsigned long long)maximumCount;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
