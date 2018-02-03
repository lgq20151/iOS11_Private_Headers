/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSEncodingDetectionBuffer : NSObject {
    char * _bytes;
    bool  _bytesAllocated;
    unsigned long long  _bytesIndex;
    unsigned long long  _bytesLength;
    unsigned int  _cfEncoding;
    unsigned long long  _nsEncoding;
    NSEncodingDetectionPlaceholder * _placeholder;
}

- (bool)_growBufferIfNeededToAccomodateByteCount:(unsigned long long)arg1;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4;
- (void)appendByte:(unsigned char)arg1;
- (void)appendBytes:(const char *)arg1 count:(unsigned long long)arg2;
- (void)appendPlaceholder;
- (void)appendUTF16Char:(unsigned short)arg1;
- (void)appendUTF32Char:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned int)arg2 stackBuffer:(char *)arg3 bufferLength:(unsigned long long)arg4 placeholder:(id)arg5;
- (id)stringWithLossySubsitutionString:(id)arg1;

@end
