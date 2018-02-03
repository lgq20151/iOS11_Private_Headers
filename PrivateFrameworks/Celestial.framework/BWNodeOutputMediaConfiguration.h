/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeOutputMediaConfiguration : NSObject {
    NSString * _associatedAttachedMediaKey;
    NSString * _attachedMediaKeyOfInputWhichDrivesThisOutput;
    BWFormatRequirements * _formatRequirements;
    int  _indexOfInputWhichDrivesThisOutput;
    NSArray * _indexesOfInputsWhichDrivesThisOutput;
    int  _owningNodeRetainedBufferCount;
    int  _passthroughMode;
    bool  _performsAttachedMediaRemapping;
    bool  _providesPixelBufferPool;
}

@property (nonatomic, copy) NSString *attachedMediaKeyOfInputWhichDrivesThisOutput;
@property (nonatomic, retain) BWFormatRequirements *formatRequirements;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (nonatomic, copy) NSArray *indexesOfInputsWhichDrivesThisOutput;
@property (nonatomic) int owningNodeRetainedBufferCount;
@property (nonatomic) int passthroughMode;
@property (nonatomic, readonly) bool performsAttachedMediaRemapping;
@property (nonatomic) bool providesPixelBufferPool;

- (void)_setAssociatedAttachedMediaKey:(id)arg1;
- (id)attachedMediaKeyOfInputWhichDrivesThisOutput;
- (void)dealloc;
- (id)formatRequirements;
- (int)indexOfInputWhichDrivesThisOutput;
- (id)indexesOfInputsWhichDrivesThisOutput;
- (id)init;
- (bool)isDrivenByInputWithIndex:(unsigned long long)arg1;
- (int)owningNodeRetainedBufferCount;
- (int)passthroughMode;
- (bool)performsAttachedMediaRemapping;
- (bool)providesPixelBufferPool;
- (void)setAttachedMediaKeyOfInputWhichDrivesThisOutput:(id)arg1;
- (void)setFormatRequirements:(id)arg1;
- (void)setIndexOfInputWhichDrivesThisOutput:(int)arg1;
- (void)setIndexesOfInputsWhichDrivesThisOutput:(id)arg1;
- (void)setOwningNodeRetainedBufferCount:(int)arg1;
- (void)setPassthroughMode:(int)arg1;
- (void)setProvidesPixelBufferPool:(bool)arg1;

@end
