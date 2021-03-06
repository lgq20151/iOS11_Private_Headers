/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer {
    int  _chunk;
    int  _maxNumRegions;
    bool  _prune;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _region;
    float  _score;
    bool  _useGPU;
}

+ (id)analyzerWith:(int)arg1 prune:(bool)arg2;

- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 landscape:(bool)arg4 results:(id)arg5;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (float)computeScore:(float*)arg1 width:(int)arg2 height:(int)arg3 posX:(int)arg4 posY:(int)arg5;
- (int)generateSalientRegion:(id)arg1;
- (id)initWithMaxNumRegions:(int)arg1 prune:(bool)arg2;
- (int)initializeInput:(id)arg1 withBuffer:(struct __CVBuffer { }*)arg2 width:(int)arg3 height:(int)arg4;
- (int)initializeModel:(id)arg1;
- (id)modelFileName;
- (short)modelQuantFactor;
- (float)outputScaling;
- (int)processTile:(struct __CVBuffer { }*)arg1 results:(id)arg2 cancel:(id /* block */)arg3;
- (id)pruneRegions:(id)arg1;
- (int)saliencyDetection:(struct __CVBuffer { }*)arg1 salientRegions:(id)arg2 cancel:(id /* block */)arg3;

@end
