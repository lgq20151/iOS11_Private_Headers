/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryEncoder : NSObject <TSPEncoder> {
    bool  _alwaysDefragmentData;
    TSPMemoryComponentWriteChannel * _metadataWriteChannel;
    TSPMemoryComponentWriteChannel * _rootComponentWriteChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *metadataDispatchData;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)encodedData;
- (id)init;
- (id)initWithAlwaysDefragmentData:(bool)arg1;
- (id)metadataData;
- (id)metadataDispatchData;
- (id)newMetadataComponentWriteChannel;
- (id)newRootObjectComponentWriteChannel;
- (id)rootObjectComponentData;
- (id)rootObjectComponentDispatchData;

@end
