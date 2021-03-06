/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLSampler : NSObject {
    unsigned int  _magnificationFilter;
    unsigned int  _minificationFilter;
    NUGLTexture * _texture;
    unsigned int  _wrapMode;
}

@property (nonatomic) unsigned int magnificationFilter;
@property (nonatomic) unsigned int minificationFilter;
@property (nonatomic, readonly) NUGLTexture *texture;
@property (nonatomic) unsigned int wrapMode;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTexture:(id)arg1;
- (unsigned int)magnificationFilter;
- (unsigned int)minificationFilter;
- (void)setMagnificationFilter:(unsigned int)arg1;
- (void)setMinificationFilter:(unsigned int)arg1;
- (void)setWrapMode:(unsigned int)arg1;
- (id)texture;
- (unsigned int)wrapMode;

@end
