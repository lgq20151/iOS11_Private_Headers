/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeOutputMediaProperties : NSObject {
    NSString * _associatedAttachedMediaKey;
    BWFormat * _liveFormat;
    BWPixelBufferPool * _livePixelBufferPool;
    int  _livePixelBufferPoolSize;
    unsigned int  _mediaType;
    BWNodeOutput * _owningNodeOutput;
    BWPixelBufferPool * _preparedPixelBufferPool;
    int  _preparedPixelBufferPoolSize;
    BWFormat * _resolvedFormat;
    int  _resolvedRetainedBufferCount;
}

@property (nonatomic, retain) BWFormat *liveFormat;
@property (nonatomic, retain) BWPixelBufferPool *livePixelBufferPool;
@property (nonatomic) int livePixelBufferPoolSize;
@property (nonatomic, readonly) BWVideoFormat *liveVideoFormat;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, retain) BWPixelBufferPool *preparedPixelBufferPool;
@property (nonatomic) int preparedPixelBufferPoolSize;
@property (nonatomic, retain) BWFormat *resolvedFormat;
@property (nonatomic) int resolvedRetainedBufferCount;
@property (nonatomic, readonly) BWVideoFormat *resolvedVideoFormat;

- (void)_setOwningNodeOutput:(id)arg1 associatedAttachedMediaKey:(id)arg2;
- (void)dealloc;
- (id)liveFormat;
- (id)livePixelBufferPool;
- (int)livePixelBufferPoolSize;
- (id)liveVideoFormat;
- (unsigned int)mediaType;
- (id)preparedPixelBufferPool;
- (int)preparedPixelBufferPoolSize;
- (id)resolvedFormat;
- (int)resolvedRetainedBufferCount;
- (id)resolvedVideoFormat;
- (void)setLiveFormat:(id)arg1;
- (void)setLivePixelBufferPool:(id)arg1;
- (void)setLivePixelBufferPoolSize:(int)arg1;
- (void)setNodePreparedPixelBufferPool:(id)arg1;
- (void)setPreparedPixelBufferPool:(id)arg1;
- (void)setPreparedPixelBufferPoolSize:(int)arg1;
- (void)setPreparedSharedPixelBufferPool:(id)arg1;
- (void)setResolvedFormat:(id)arg1;
- (void)setResolvedRetainedBufferCount:(int)arg1;

@end
