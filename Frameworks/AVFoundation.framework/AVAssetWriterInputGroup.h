/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {
    AVAssetWriterInputGroupInternal * _internal;
}

@property (nonatomic, readonly) AVAssetWriterInput *defaultInput;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *provisionalInputs;

+ (id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2;
+ (id)assetWriterInputGroupWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3;

- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultInput;
- (void)finalize;
- (id)init;
- (id)initWithInputs:(id)arg1 defaultInput:(id)arg2;
- (id)initWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3;
- (id)inputs;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)options;
- (id)provisionalInputs;

@end
