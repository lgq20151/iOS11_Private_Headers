/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitFailPacket : NSObject {
    unsigned int  _reason;
}

- (id)contentForTCP;
- (id)description;
- (id)initWithReason:(unsigned int)arg1;
- (id)initWithTCPBuffer:(void*)arg1;
- (unsigned int)reason;
- (void)setReason:(unsigned int)arg1;

@end
