/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVContentKeyResponse : NSObject {
    AVContentKeyResponseInternal * _keyResponse;
}

+ (id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1;

- (void)dealloc;
- (id)initWithKeySystem:(id)arg1;
- (id)keySystem;

@end
