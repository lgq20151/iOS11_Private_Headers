/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBracketSettings : NSObject {
    int  _bracketingMode;
    NSArray * _exposureValues;
    bool  _lensStabilizationEnabledForClientBracket;
    NSArray * _manualExposureBracketedCaptureParams;
    NSDictionary * _oisBracketedCaptureParams;
    bool  _providePreBracketedEV0;
}

@property (nonatomic, readonly) int bracketFrameCount;
@property (nonatomic, readonly) int bracketingMode;
@property (nonatomic, copy) NSArray *exposureValues;
@property (nonatomic) bool lensStabilizationEnabledForClientBracket;
@property (nonatomic, copy) NSArray *manualExposureBracketedCaptureParams;
@property (nonatomic, copy) NSDictionary *oisBracketedCaptureParams;
@property (nonatomic) bool providePreBracketedEV0;

+ (id)bracketSettingsForBracketingMode:(int)arg1;

- (int)bracketFrameCount;
- (int)bracketingMode;
- (void)dealloc;
- (id)description;
- (id)exposureValues;
- (id)initWithBracketingMode:(int)arg1;
- (bool)lensStabilizationEnabledForClientBracket;
- (id)manualExposureBracketedCaptureParams;
- (id)oisBracketedCaptureParams;
- (bool)providePreBracketedEV0;
- (void)setExposureValues:(id)arg1;
- (void)setLensStabilizationEnabledForClientBracket:(bool)arg1;
- (void)setManualExposureBracketedCaptureParams:(id)arg1;
- (void)setOisBracketedCaptureParams:(id)arg1;
- (void)setProvidePreBracketedEV0:(bool)arg1;

@end
