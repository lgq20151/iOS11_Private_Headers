/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface SFUZipOutputEntry : NSObject {
    unsigned long long  compressedDataOffset;
    unsigned long long  compressedSize;
    unsigned int  crc;
    bool  is64Bit;
    bool  isCompressed;
    bool  isEncrypted;
    bool  isWrittenDirectlyToFile;
    NSString * name;
    unsigned long long  offset;
    unsigned int  time;
    unsigned long long  uncompressedSize;
    unsigned int  utf8NameLength;
}

- (long long)compareByOffset:(id)arg1;
- (void)dealloc;
- (id)description;

@end
