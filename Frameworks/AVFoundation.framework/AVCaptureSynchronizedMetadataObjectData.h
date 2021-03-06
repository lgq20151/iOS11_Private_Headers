/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSynchronizedMetadataObjectData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedMetadataObjectDataInternal * _internal;
}

@property (readonly) NSArray *metadataObjects;

- (id)_initWithMetadataObjects:(id)arg1;
- (void)dealloc;
- (id)metadataObjects;

@end
