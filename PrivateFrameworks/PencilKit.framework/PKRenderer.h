/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKRenderer : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    struct vector<AnimatingStroke, std::__1::allocator<AnimatingStroke> > { 
        struct AnimatingStroke {} *__begin_; 
        struct AnimatingStroke {} *__end_; 
        struct __compressed_pair<AnimatingStroke *, std::__1::allocator<AnimatingStroke> > { 
            struct AnimatingStroke {} *__first_; 
        } __end_cap_; 
    }  _animatingStrokes;
    double  _backboardPaperMultiply;
    struct CGColor { } * _backgroundColor;
    struct { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  _backgroundGLColor;
    unsigned int  _backgroundImageTexture;
    struct CGSize { 
        double width; 
        double height; 
    }  _backgroundImageTextureSize;
    int  _backingHeight;
    int  _backingWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsBounds;
    PKDrawing * _drawing;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawingPixelSize;
    double  _eraserIndicatorAlpha;
    struct __GLsync { } * _finishRenderingFence;
    double  _fromStrokeSpaceScale;
    PKGLContext * _glContext;
    double  _inputScale;
    bool  _isFinishedRendering;
    struct _PKStrokePoint { 
        double timestamp; 
        struct CGPoint { 
            double x; 
            double y; 
        } location; 
        double radius; 
        double aspectRatio; 
        double edgeWidth; 
        double force; 
        double azimuth; 
        double altitude; 
        double opacity; 
    }  _lastPointForEraser;
    bool  _lastPointForEraserIsValid;
    PKLinedPaper * _linedPaper;
    DKDGLDataBuffer * _linesBuffer;
    DKDGLFrameBuffer * _originalBackFramebuffer;
    DKDGLFrameBuffer * _paintFramebuffer;
    DKDGLFrameBuffer * _paintFramebufferAccumulator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _paintFramebufferDirtyRect;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _paperTransform;
    bool  _rendersToSharedContext;
    PKResourceHandler * _resourceHandler;
    bool  _solidColorBackboard;
    DKDGLDataBuffer * _strokeBuffer;
    unsigned long long  _strokeBufferCount;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    NSMapTable * _tileFramebuffers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewScissor;
}

@property (nonatomic) struct CGSize { double x1; double x2; } actualSize;
@property (nonatomic) double backboardPaperMultiply;
@property (nonatomic) struct CGColor { }*backgroundColor;
@property (nonatomic) PKDrawing *drawing;
@property (nonatomic) double eraserIndicatorAlpha;
@property (nonatomic, readonly) PKGLContext *glContext;
@property (nonatomic) double inputScale;
@property (nonatomic) bool isFinishedRendering;
@property (nonatomic, readonly) double latestTimestamp;
@property (nonatomic, retain) PKLinedPaper *linedPaper;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } paperTransform;
@property (nonatomic, retain) PKResourceHandler *resourceHandler;
@property (nonatomic) bool solidColorBackboard;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewScissor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 renderedBlock:(id /* block */)arg4;
- (struct CGSize { double x1; double x2; })actualSize;
- (void)applyStrokeSpaceClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (double)backboardPaperMultiply;
- (struct CGColor { }*)backgroundColor;
- (void)clear;
- (unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderedBlock:(id /* block */)arg3;
- (unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 renderedBlock:(id /* block */)arg4;
- (void)clearPaintFramebuffers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRectForVertices:(struct StrokeVertex { float x1; float x2; float x3; float x4; float x5; }*)arg1 numVertices:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsBoundsInStrokeSpace;
- (void)copyIntoTile:(id)arg1 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)dealloc;
- (void)didTeardownTile;
- (void)drawNewPointsAt:(double)arg1;
- (id)drawing;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(id /* block */)arg2;
- (double)eraserIndicatorAlpha;
- (void)finishRendering;
- (void)finishRenderingClippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forStroke:(struct AnimatingStroke { id x1; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x2; in int x3; long long x4; void*x5; void*x6; void*x7; void*x8; void*x9; const void*x10; void*x11; void*x12; bool x13; unsigned short x14; void*x15; long x16; int x17; in void*x18; void*x19; int x20; long x21; void*x22; void*x23; const void*x24; void*x25; short x26; void*x27; double x28; SEL x29; SEL x30; void*x31; void*x32; void*x33; SEL x34; SEL x35; double x36; void*x37; float x38; void*x39; void*x40; long x41; void*x42; void*x43; double x44; void*x45; long x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; bool x53; unsigned short x54; void*x55; long x56; int x57; in void*x58; void*x59; int x60; long x61; void*x62; void*x63; const void*x64; void*x65; void*x66; void*x67; struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_68_1_1; } x68; }*)arg2;
- (void)finishRenderingNoTeardownForStroke:(struct AnimatingStroke { id x1; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x2; in int x3; long long x4; void*x5; void*x6; void*x7; void*x8; void*x9; const void*x10; void*x11; void*x12; bool x13; unsigned short x14; void*x15; long x16; int x17; in void*x18; void*x19; int x20; long x21; void*x22; void*x23; const void*x24; void*x25; short x26; void*x27; double x28; SEL x29; SEL x30; void*x31; void*x32; void*x33; SEL x34; SEL x35; double x36; void*x37; float x38; void*x39; void*x40; long x41; void*x42; void*x43; double x44; void*x45; long x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; bool x53; unsigned short x54; void*x55; long x56; int x57; in void*x58; void*x59; int x60; long x61; void*x62; void*x63; const void*x64; void*x65; void*x66; void*x67; struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_68_1_1; } x68; }*)arg1 clippedToPixelSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)finishStroke;
- (void)flushMemoryIfPossible;
- (void)getAndRenderNewPoints:(id)arg1;
- (id)glContext;
- (id)initWithDrawingPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithDrawingPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2 glContext:(id)arg3;
- (double)inputScale;
- (bool)isFinishedRendering;
- (double)latestTimestamp;
- (id)linedPaper;
- (struct CGImage { }*)newCGImage;
- (struct CGImage { }*)newCGImageFromFramebuffer:(id)arg1 withClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGImage { }*)newCGImageFromGL;
- (struct CGImage { }*)newCGImageWithClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })paperTransform;
- (void)renderAheadWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 onPaper:(bool)arg2 renderBufferSize:(struct CGSize { double x1; double x2; })arg3;
- (void)renderAnimatingStrokesWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 renderBufferSize:(struct CGSize { double x1; double x2; })arg2;
- (void)renderBrushIndicatorForStroke:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 mode:(long long)arg3 flipped:(bool)arg4;
- (void)renderEraserIndicator:(struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)renderEraserIndicatorVertices:(struct StrokeVertex { float x1; float x2; float x3; float x4; float x5; }*)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (void)renderFullscreenQuadWithShader:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 flipped:(bool)arg3;
- (void)renderImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2;
- (void)renderImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)renderImage:(struct CGImage { }*)arg1 intoFramebuffer:(id)arg2;
- (void)renderLinesRenderBufferSize:(struct CGSize { double x1; double x2; })arg1;
- (void)renderLiveStrokeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 renderBufferSize:(struct CGSize { double x1; double x2; })arg2;
- (void)renderPaperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 paperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 flipped:(bool)arg3 multiply:(double)arg4;
- (void)renderParticleStroke:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg1 animatingStroke:(struct AnimatingStroke { id x1; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x2; in int x3; long long x4; void*x5; void*x6; void*x7; void*x8; void*x9; const void*x10; void*x11; void*x12; bool x13; unsigned short x14; void*x15; long x16; int x17; in void*x18; void*x19; int x20; long x21; void*x22; void*x23; const void*x24; void*x25; short x26; void*x27; double x28; SEL x29; SEL x30; void*x31; void*x32; void*x33; SEL x34; SEL x35; double x36; void*x37; float x38; void*x39; void*x40; long x41; void*x42; void*x43; double x44; void*x45; long x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; bool x53; unsigned short x54; void*x55; long x56; int x57; in void*x58; void*x59; int x60; long x61; void*x62; void*x63; const void*x64; void*x65; void*x66; void*x67; struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_68_1_1; } x68; }*)arg2 starts:(bool)arg3 ends:(bool)arg4 combinedRendering:(bool)arg5;
- (void)renderParticleStrokeVertices:(struct StrokeVertex { float x1; float x2; float x3; float x4; float x5; }*)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4;
- (void)renderPenStroke:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg1 animatingStroke:(struct AnimatingStroke { id x1; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x2; in int x3; long long x4; void*x5; void*x6; void*x7; void*x8; void*x9; const void*x10; void*x11; void*x12; bool x13; unsigned short x14; void*x15; long x16; int x17; in void*x18; void*x19; int x20; long x21; void*x22; void*x23; const void*x24; void*x25; short x26; void*x27; double x28; SEL x29; SEL x30; void*x31; void*x32; void*x33; SEL x34; SEL x35; double x36; void*x37; float x38; void*x39; void*x40; long x41; void*x42; void*x43; double x44; void*x45; long x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; bool x53; unsigned short x54; void*x55; long x56; int x57; in void*x58; void*x59; int x60; long x61; void*x62; void*x63; const void*x64; void*x65; void*x66; void*x67; struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_68_1_1; } x68; }*)arg2 alpha:(double)arg3 combinedRendering:(bool)arg4;
- (void)renderStroke:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg1 animatingStroke:(struct AnimatingStroke { id x1; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x2; in int x3; long long x4; void*x5; void*x6; void*x7; void*x8; void*x9; const void*x10; void*x11; void*x12; bool x13; unsigned short x14; void*x15; long x16; int x17; in void*x18; void*x19; int x20; long x21; void*x22; void*x23; const void*x24; void*x25; short x26; void*x27; double x28; SEL x29; SEL x30; void*x31; void*x32; void*x33; SEL x34; SEL x35; double x36; void*x37; float x38; void*x39; void*x40; long x41; void*x42; void*x43; double x44; void*x45; long x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; bool x53; unsigned short x54; void*x55; long x56; int x57; in void*x58; void*x59; int x60; long x61; void*x62; void*x63; const void*x64; void*x65; void*x66; void*x67; struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_68_1_1; } x68; }*)arg2 accumulating:(bool)arg3 combinedRendering:(bool)arg4;
- (void)renderStroke:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 mode:(long long)arg3 flipped:(bool)arg4 renderBufferSize:(struct CGSize { double x1; double x2; })arg5;
- (void)renderStrokeVertices:(struct StrokeVertex { float x1; float x2; float x3; float x4; float x5; }*)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4;
- (unsigned long long)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 renderedBlock:(id /* block */)arg4;
- (unsigned long long)renderStrokes:(id)arg1 renderedBlock:(id /* block */)arg2;
- (void)renderTexture:(unsigned int)arg1 flipped:(bool)arg2;
- (void)renderTexture:(unsigned int)arg1 intoFramebuffer:(id)arg2;
- (void)renderTile:(id)arg1;
- (void)renderTile:(id)arg1 intoTile:(id)arg2;
- (void)renderWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 animatingStroke:(struct AnimatingStroke { id x1; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x2; in int x3; long long x4; void*x5; void*x6; void*x7; void*x8; void*x9; const void*x10; void*x11; void*x12; bool x13; unsigned short x14; void*x15; long x16; int x17; in void*x18; void*x19; int x20; long x21; void*x22; void*x23; const void*x24; void*x25; short x26; void*x27; double x28; SEL x29; SEL x30; void*x31; void*x32; void*x33; SEL x34; SEL x35; double x36; void*x37; float x38; void*x39; void*x40; long x41; void*x42; void*x43; double x44; void*x45; long x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; bool x53; unsigned short x54; void*x55; long x56; int x57; in void*x58; void*x59; int x60; long x61; void*x62; void*x63; const void*x64; void*x65; void*x66; void*x67; struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_68_1_1; } x68; }*)arg2 mode:(long long)arg3 clipped:(bool)arg4 renderBufferSize:(struct CGSize { double x1; double x2; })arg5;
- (void)resetPaintFramebufferAccumulateIfNeeded;
- (id)resourceHandler;
- (void)restoreGLContextIfNecessary;
- (void)setActualSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackboardPaperMultiply:(double)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBackgroundImage:(struct CGImage { }*)arg1;
- (void)setDrawing:(id)arg1;
- (void)setEraserIndicatorAlpha:(double)arg1;
- (void)setInputScale:(double)arg1;
- (void)setIsFinishedRendering:(bool)arg1;
- (void)setLinedPaper:(id)arg1;
- (void)setPaperTextureOnShader:(id)arg1;
- (void)setPaperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setResourceHandler:(id)arg1;
- (void)setShaderTransform:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })setShaderTransform:(id)arg1 forFramebufferSize:(struct CGSize { double x1; double x2; })arg2 flipped:(bool)arg3;
- (void)setSolidColorBackboard:(bool)arg1;
- (void)setStrokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewScissor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setupDrawingFramebuffersIfNecessary;
- (void)setupMaskFramebufferIfNecessary;
- (id)setupNewTile:(id)arg1;
- (void)setupOpenGL;
- (void)setupStrokeBufferIfNecessary;
- (bool)solidColorBackboard;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (void)switchGLContextIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transformRectFromStrokeToPixelSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transformRectFromStrokeToPixelSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewScissor;

@end
