/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBMessageStreamWriter : NSObject {
    NSOutputStream * _stream;
}

- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (bool)writeMessage:(id)arg1;

@end
