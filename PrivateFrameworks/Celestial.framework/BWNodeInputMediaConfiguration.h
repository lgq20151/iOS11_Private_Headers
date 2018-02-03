/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeInputMediaConfiguration : NSObject {
    NSString * _associatedAttachedMediaKey;
    int  _delayedBufferCount;
    BWFormatRequirements * _formatRequirements;
    int  _indefinitelyHeldBufferCount;
    int  _passthroughMode;
    int  _retainedBufferCount;
}

@property (nonatomic) int delayedBufferCount;
@property (nonatomic, retain) BWFormatRequirements *formatRequirements;
@property (nonatomic) int indefinitelyHeldBufferCount;
@property (nonatomic) int passthroughMode;
@property (nonatomic) int retainedBufferCount;

- (void)_setAssociatedAttachedMediaKey:(id)arg1;
- (void)dealloc;
- (int)delayedBufferCount;
- (id)formatRequirements;
- (int)indefinitelyHeldBufferCount;
- (id)init;
- (int)passthroughMode;
- (int)retainedBufferCount;
- (void)setDelayedBufferCount:(int)arg1;
- (void)setFormatRequirements:(id)arg1;
- (void)setIndefinitelyHeldBufferCount:(int)arg1;
- (void)setPassthroughMode:(int)arg1;
- (void)setRetainedBufferCount:(int)arg1;

@end
