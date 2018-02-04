/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopVideoRecipe : NSObject {
    void * _alLoopRecipe;
    void * _alStabilizeParams;
    NSDictionary * _analysisResultDict;
    NSDictionary * _loopRecipeDict;
    NSDictionary * _stabilizeParamsDict;
}

@property (nonatomic, readonly, copy) NSDictionary *analysisResultDict;
@property (nonatomic, readonly, copy) NSDictionary *loopRecipeDict;
@property (nonatomic, readonly, copy) NSDictionary *stabilizeParamsDict;

- (void).cxx_destruct;
- (void*)alLoopRecipe;
- (void*)alStabilizeParams;
- (id)analysisResultDict;
- (void)dealloc;
- (id)initWithAnalysisResultDict:(id)arg1;
- (id)initWithLoopRecipe:(id)arg1 stabilizeParams:(id)arg2;
- (id)loopRecipeDict;
- (id)stabilizeParamsDict;

@end