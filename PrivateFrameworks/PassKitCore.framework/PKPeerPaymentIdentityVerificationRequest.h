/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest {
    NSArray * _certificates;
    bool  _devSigned;
    NSString * _prerequisiteIdentifier;
}

@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic) bool devSigned;
@property (nonatomic, copy) NSString *prerequisiteIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;
- (id)certificates;
- (bool)devSigned;
- (id)prerequisiteIdentifier;
- (void)setCertificates:(id)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setPrerequisiteIdentifier:(id)arg1;

@end
