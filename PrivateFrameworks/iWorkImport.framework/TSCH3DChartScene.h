/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartScene : NSObject {
    struct ChartSceneInfo { 
        TSCH3DScene *scene; 
        TSCHChartInfo *chartInfo; 
        TSCHChartType *chartType; 
        TSCHChartSeriesType *seriesType; 
        struct { 
            bool forceOmitLegend; 
            bool forceOmitTitle; 
            bool forceOmitAxisTitle; 
            bool forceOmitLabelPlacement; 
            bool enable3DTightBounds; 
            bool enable3DScaledDepthBounds; 
            long long maxDepthRatioType; 
            unsigned long long max3DLimitingSeries; 
        } layoutSettings; 
    }  mSceneInfo;
}

+ (void)addObjectsToSceneWithSceneInfo:(const struct ChartSceneInfo { id x1; id x2; struct { bool x_3_1_1; bool x_3_1_2; bool x_3_1_3; bool x_3_1_4; bool x_3_1_5; bool x_3_1_6; long long x_3_1_7; unsigned long long x_3_1_8; } x3; }*)arg1;
+ (bool)supportsValueAxisLabelAlignmentCaching;

- (void)addAllLabelsToScene;
- (void)addAllObjectsToScene;
- (void)addChartTitlesToScene;
- (void)addLabelsToScene;
- (void)addObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)adjustSceneSettings;
- (id)chartInfo;
- (id)chartType;
- (id)initWithSceneInfo:(const struct ChartSceneInfo { id x1; id x2; struct { bool x_3_1_1; bool x_3_1_2; bool x_3_1_3; bool x_3_1_4; bool x_3_1_5; bool x_3_1_6; long long x_3_1_7; unsigned long long x_3_1_8; } x3; }*)arg1;
- (const struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; }*)layoutSettings;
- (id)scene;
- (id)seriesType;

@end
