/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIWarpKernel : CIKernel

@property (nonatomic) bool perservesAlpha;
@property (nonatomic) bool preservesRange;

+ (id)kernelWithString:(id)arg1;

- (id)_initWithDict:(id)arg1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 inputImage:(id)arg3 arguments:(id)arg4;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autogenerateROI:(struct WarpKernel { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; char *x4; bool x5; struct SerialIntArray {} *x6; struct SerialStringArray {} *x7; struct __CFString {} *x8; bool x9; bool x10; bool x11; bool x12; bool x13; int x14; }*)arg1 args:(struct SerialObjectPtrArray { int x1; int x2; int x3; void **x4; }*)arg2 arguments:(id)arg3 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)canReduceOutputChannels;
- (id)generateGeneralKernelFromWarpKernel:(struct WarpKernel { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; char *x4; bool x5; struct SerialIntArray {} *x6; struct SerialStringArray {} *x7; struct __CFString {} *x8; bool x9; bool x10; bool x11; bool x12; bool x13; int x14; }*)arg1 args:(struct SerialObjectPtrArray { int x1; int x2; int x3; void **x4; }*)arg2;
- (id)generateMainFromWarpKernel:(struct WarpKernel { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; char *x4; bool x5; struct SerialIntArray {} *x6; struct SerialStringArray {} *x7; struct __CFString {} *x8; bool x9; bool x10; bool x11; bool x12; bool x13; int x14; }*)arg1 args:(struct SerialObjectPtrArray { int x1; int x2; int x3; void **x4; }*)arg2;
- (id)makeGridImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 nx:(int)arg2 ny:(int)arg3;
- (bool)perservesAlpha;
- (bool)preservesRange;
- (void)setCanReduceOutputChannels:(bool)arg1;
- (void)setPerservesAlpha:(bool)arg1;
- (void)setPreservesRange:(bool)arg1;

@end
