/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNCapabilities : NSObject <CNCapabilities>

@property (nonatomic, readonly) bool areTelephonyCallsSupported;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFaceTimeAudioSupported;
@property (nonatomic, readonly) bool isFaceTimeVideoSupported;
@property (nonatomic, readonly) bool isPaySupported;
@property (nonatomic, readonly) bool isiMessageSupported;
@property (readonly) Class superclass;

- (bool)areTelephonyCallsSupported;
- (bool)isFaceTimeAudioSupported;
- (bool)isFaceTimeVideoSupported;
- (bool)isPaySupported;
- (bool)isiMessageSupported;

@end
