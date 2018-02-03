/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBTextReader : NSObject {
    NSMutableDictionary * _cachedObjectTypes;
    unsigned long long  _length;
    NSCharacterSet * _nonHexDigitCharacterSet;
    NSMutableDictionary * _objects;
    unsigned long long  _pos;
    NSString * _string;
    NSCharacterSet * _tagNameCharacterSet;
    NSCharacterSet * _whitespaceAndNewlineCharacterSet;
}

- (bool)_hasMore;
- (id)_parseNumber:(id)arg1 maxValue:(unsigned long long)arg2 isSigned:(bool)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfCharactersInSetAtCurrentPosition:(id)arg1;
- (id)_readObject:(Class)arg1;
- (id)_readString;
- (id)_readStruct:(id)arg1;
- (void)_readTag:(id*)arg1 andType:(unsigned long long*)arg2;
- (id)_readValue;
- (id)_stringAtCurrentPositionWithPadding:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)readMessageType:(Class)arg1 fromString:(id)arg2;

@end
