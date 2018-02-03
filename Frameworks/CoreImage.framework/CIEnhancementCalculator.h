/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEnhancementCalculator : CIEnhancementCalculation {
    bool  curvesEnabled;
    bool  faceBalanceEnabled;
    bool  shadowsEnabled;
    bool  vibranceEnabled;
}

@property bool curvesEnabled;
@property bool faceBalanceEnabled;
@property bool shadowsEnabled;
@property bool vibranceEnabled;

- (void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3;
- (bool)curvesEnabled;
- (void)dealloc;
- (bool)faceBalanceEnabled;
- (id)histogramFromRows:(id)arg1 componentOffset:(unsigned int)arg2;
- (id)init;
- (void)setCurvesEnabled:(bool)arg1;
- (void)setFaceBalanceEnabled:(bool)arg1;
- (void)setShadowsEnabled:(bool)arg1;
- (void)setVibranceEnabled:(bool)arg1;
- (id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3;
- (void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3;
- (void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (bool)shadowsEnabled;
- (bool)vibranceEnabled;

@end
