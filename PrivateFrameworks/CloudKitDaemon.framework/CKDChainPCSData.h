/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDChainPCSData : CKDPCSData {
    CKEncryptedData * _encryptedChainPCSPrivateKey;
}

@property (nonatomic, readonly) CKEncryptedData *encryptedChainPCSPrivateKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedChainPCSPrivateKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2;

@end