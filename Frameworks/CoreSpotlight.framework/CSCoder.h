/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSCoder : NSObject <CSCoderData> {
    struct _MDPlistContainer { } * _container;
    NSData * _data;
    bool  _finalized;
}

@property (nonatomic, readonly) struct _MDPlistContainer { }*container;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool finalized;

- (void).cxx_destruct;
- (void)beginArray;
- (void)beginDictionary;
- (void)beginType:(const char *)arg1;
- (struct _MDPlistContainer { }*)container;
- (id)data;
- (void)dealloc;
- (void)encodeBool:(bool)arg1;
- (void)encodeData:(const void*)arg1 length:(long long)arg2;
- (void)encodeInt32:(int)arg1;
- (void)encodeInt64:(long long)arg1;
- (void)encodeMDPlistObject:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg1;
- (void)encodeNSString:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(const char *)arg2 keyLength:(long long)arg3;
- (void)encodeString:(const char *)arg1;
- (void)encodeString:(const char *)arg1 length:(long long)arg2;
- (void)encodeString:(const char *)arg1 stringLength:(long long)arg2 forKey:(const char *)arg3 keyLength:(long long)arg4;
- (void)endArray;
- (void)endDictionary;
- (void)endType;
- (bool)finalized;
- (id)init;

@end
