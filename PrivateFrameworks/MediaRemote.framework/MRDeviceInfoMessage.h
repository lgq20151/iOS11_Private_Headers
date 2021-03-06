/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRDeviceInfoMessage : MRProtocolMessage {
    MRSupportedProtocolMessages * _supportedProtocolMessages;
}

@property (nonatomic, readonly) void*deviceInfo;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedProtocolMessages;

- (void)dealloc;
- (void*)deviceInfo;
- (unsigned long long)encryptionType;
- (id)initWithDeviceInfo:(void*)arg1;
- (id)supportedProtocolMessages;
- (unsigned long long)type;

@end
