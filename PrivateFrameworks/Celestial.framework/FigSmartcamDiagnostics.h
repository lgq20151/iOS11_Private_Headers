/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigSmartcamDiagnostics : NSObject {
    NSMutableDictionary * _metadata;
}

- (void).cxx_destruct;
- (bool)addClassifierVersion:(struct { int x1; int x2; int x3; })arg1;
- (bool)addFrameScores:(id)arg1 referenceFrame:(int)arg2;
- (bool)addMotionStats:(struct { float x1[2]; int x2[2]; int x3; int x4; bool x5; bool x6; float x7[2]; float x8[2]; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; bool x10; })arg1;
- (void)addPAMDecisionPreliminary:(id)arg1;
- (bool)addSceneConfidences:(float)arg1;
- (void)addSceneConfidencesForFirmware:(id)arg1;
- (id)init;
- (id)metadata;

@end
