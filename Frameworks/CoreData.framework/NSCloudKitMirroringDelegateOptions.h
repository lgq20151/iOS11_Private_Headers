/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegateOptions : NSObject {
    NSNumber * _ckAssetThresholdBytes;
    NSString * _containerIdentifier;
    CKContainerOptions * _containerOptions;
    bool  _initializeSchema;
    NSNumber * _operationMemoryThresholdBytes;
    bool  _useEncryptedStorage;
}

@property (nonatomic, retain) NSNumber *ckAssetThresholdBytes;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) CKContainerOptions *containerOptions;
@property (nonatomic) bool initializeSchema;
@property (nonatomic, retain) NSNumber *operationMemoryThresholdBytes;
@property (nonatomic) bool useEncryptedStorage;

- (id)ckAssetThresholdBytes;
- (id)containerIdentifier;
- (id)containerOptions;
- (id)copy;
- (void)dealloc;
- (id)description;
- (bool)initializeSchema;
- (id)operationMemoryThresholdBytes;
- (void)setCkAssetThresholdBytes:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerOptions:(id)arg1;
- (void)setInitializeSchema:(bool)arg1;
- (void)setOperationMemoryThresholdBytes:(id)arg1;
- (void)setUseEncryptedStorage:(bool)arg1;
- (bool)useEncryptedStorage;

@end
