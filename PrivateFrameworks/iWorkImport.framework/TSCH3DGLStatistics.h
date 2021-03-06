/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLStatistics : NSObject {
    NSMutableArray * mFrames;
    unsigned long long  mLifespan;
}

@property (nonatomic, readonly) TSCH3DGLStatisticsData *allFramesStatistics;
@property (nonatomic, readonly) TSCH3DGLStatisticsData *currentFrameStatistics;

- (void)activateShader:(id)arg1;
- (id)allFramesStatistics;
- (void)beginFrame;
- (id)currentFrameStatistics;
- (void)dealloc;
- (id)description;
- (void)drawGeometry:(id)arg1;
- (void)endFrame;
- (id)init;
- (void)pushStatistics;

@end
