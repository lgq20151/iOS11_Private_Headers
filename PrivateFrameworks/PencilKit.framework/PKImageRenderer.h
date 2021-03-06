/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKImageRenderer : NSObject {
    long long  _cancelCount;
    PKRendererController * _rendererController;
    double  _scale;
}

@property (nonatomic) long long cancelCount;
@property (nonatomic, retain) PKRendererController *rendererController;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (void)cancel;
- (long long)cancelCount;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)renderDrawing:(id)arg1 completion:(id /* block */)arg2;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (id)rendererController;
- (void)resume;
- (double)scale;
- (void)setCancelCount:(long long)arg1;
- (void)setRendererController:(id)arg1;
- (void)setScale:(double)arg1;

@end
