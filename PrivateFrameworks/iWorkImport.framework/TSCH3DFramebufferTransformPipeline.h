/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {
    TSCH3DGLFramebuffer * mInput;
    <TSCH3DPipelineLinkable> * mSource;
    TSCH3DGLFramebuffer * mTarget;
}

@property (nonatomic, retain) <TSCH3DPipelineLinkable> *source;
@property (nonatomic, retain) TSCH3DGLFramebuffer *target;

- (void)dealloc;
- (void)loadSource;
- (bool)prepareFramebuffer;
- (bool)run;
- (void)setSource:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)source;
- (id)target;

@end
