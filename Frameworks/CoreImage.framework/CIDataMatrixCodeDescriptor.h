/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor {
    long long  columnCount;
    long long  eccVersion;
    NSData * errorCorrectedPayload;
    long long  rowCount;
}

@property (readonly) long long columnCount;
@property (readonly) long long eccVersion;
@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) long long rowCount;

+ (id)descriptorWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4;
+ (bool)supportsSecureCoding;

- (long long)columnCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)eccVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCorrectedPayload;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4;
- (long long)rowCount;

@end
