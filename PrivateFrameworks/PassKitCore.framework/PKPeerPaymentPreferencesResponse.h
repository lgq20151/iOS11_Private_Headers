/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentPreferencesResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentPreferences * _peerPaymentPreferences;
}

@property (nonatomic, readonly) PKPeerPaymentPreferences *peerPaymentPreferences;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)peerPaymentPreferences;

@end
