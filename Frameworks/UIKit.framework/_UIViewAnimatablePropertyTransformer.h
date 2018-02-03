/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewAnimatablePropertyTransformer : NSObject {
    _UICompoundObjectMap * _capturedProperties;
    id /* block */  _modelValueChangedCallback;
    bool  _presentationValueCallbackRan;
    id /* block */  _presentationValueChangedCallback;
    NSMutableSet * _runningProgresses;
    id /* block */  _stabilizedCallback;
}

@property (nonatomic, retain) _UICompoundObjectMap *capturedProperties;
@property (nonatomic, copy) id /* block */ modelValueChangedCallback;
@property (nonatomic, copy) id /* block */ presentationValueChangedCallback;
@property (nonatomic, retain) NSMutableSet *runningProgresses;
@property (nonatomic, copy) id /* block */ stabilizedCallback;

- (void).cxx_destruct;
- (id)capturedProperties;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(id /* block */)arg2 presentationValueSetter:(id /* block */)arg3;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(id /* block */)arg2 presentationValueSetter:(id /* block */)arg3 stabilizedCallback:(id /* block */)arg4;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(id /* block */)arg2 presentationValueSetter:(id /* block */)arg3 stabilizedCallback:(id /* block */)arg4 allowsProgressAnimatableProperties:(bool)arg5;
- (id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(id /* block */)arg2;
- (id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(id /* block */)arg2 presentationValueSetter:(id /* block */)arg3;
- (id /* block */)modelValueChangedCallback;
- (void)modelValueUpdatedForProgress:(id)arg1;
- (id /* block */)presentationValueChangedCallback;
- (void)presentationValueStabilizedForProgress:(id)arg1;
- (void)presentationValueUpdatedForProgress:(id)arg1;
- (void)progressInvalidated:(id)arg1;
- (id)runningProgresses;
- (void)setCapturedProperties:(id)arg1;
- (void)setModelValueChangedCallback:(id /* block */)arg1;
- (void)setPresentationValueChangedCallback:(id /* block */)arg1;
- (void)setRunningProgresses:(id)arg1;
- (void)setStabilizedCallback:(id /* block */)arg1;
- (id /* block */)stabilizedCallback;

@end