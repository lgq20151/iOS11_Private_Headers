/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateResultSetCoder : NSObject {
    NSData * _data;
    NSMutableData * _mutableData;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) const char *bytes;
@property (nonatomic, readonly) const char *currentPosition;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSMutableData *mutableData;
@property (nonatomic) unsigned long long offset;

+ (id)candidateTypeToClassNameMap;
+ (Class)classFromCandidateType:(int)arg1;
+ (id)decodeWithData:(id)arg1;
+ (id)encodeWithCandidateResultSet:(id)arg1;

- (const char *)bytes;
- (id)candidateResultSet;
- (const char *)currentPosition;
- (id)data;
- (id)dataFromCandidateResultSet:(id)arg1;
- (void)dealloc;
- (bool)decodeBool;
- (unsigned char)decodeByte;
- (id)decodeCandidate;
- (id)decodePointerValueArray;
- (unsigned short)decodeShort;
- (id)decodeString;
- (id)decodeStringArray;
- (unsigned int)decodeUInt32;
- (unsigned long long)decodeUInt64;
- (void)encodeBool:(bool)arg1;
- (void)encodeByte:(unsigned char)arg1;
- (void)encodePointerValueArray:(id)arg1;
- (void)encodeShort:(unsigned short)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeStringArray:(id)arg1;
- (void)encodeUInt32:(unsigned int)arg1;
- (void)encodeUInt64:(unsigned long long)arg1;
- (id)initForDecodingWithData:(id)arg1;
- (id)initForEncoding;
- (id)initWithData:(id)arg1 mutableData:(id)arg2;
- (id)mutableData;
- (unsigned long long)offset;
- (void)setData:(id)arg1;
- (void)setMutableData:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end
