/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordsAssetInfo : NSObject {
    NSMutableData * _assetContent;
    NSMutableIndexSet * _byteRanges;
    NSError * _error;
}

@property (nonatomic, retain) NSMutableData *assetContent;
@property (nonatomic, retain) NSMutableIndexSet *byteRanges;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)assetContent;
- (id)assetContentWithError:(id*)arg1 expectedSignature:(id)arg2;
- (id)byteRanges;
- (id)error;
- (id)init;
- (bool)isContiguous;
- (void)setAssetContent:(id)arg1;
- (void)setByteRanges:(id)arg1;
- (void)setError:(id)arg1;
- (void)writeData:(id)arg1 atOffset:(id)arg2;

@end
