/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRDeferredMipmapInfo : NSObject {
    NSMutableArray * _elements;
}

@property (nonatomic, readonly) NSMutableArray *elements;

- (void).cxx_destruct;
- (id)elements;
- (id)initWithArrayLength:(unsigned long long)arg1 cubemap:(bool)arg2;

@end
