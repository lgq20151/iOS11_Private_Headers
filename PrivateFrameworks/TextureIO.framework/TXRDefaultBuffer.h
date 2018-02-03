/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRDefaultBuffer : NSObject <TXRBuffer> {
    NSMutableData * _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)initWithLength:(unsigned long long)arg1;
- (id)map;

@end
