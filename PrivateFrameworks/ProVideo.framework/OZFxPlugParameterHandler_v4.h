/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugParameterHandler_v4 : OZFxPlugParameterHandler <FxOptionalParameterRetrievalAPI_v2, FxOptionalParameterSettingAPI_v2, FxParameterCreationAPI_v4, FxParameterRetrievalAPI_v4, FxParameterRetrievalAPI_v5, FxParameterSettingAPI_v4>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_getFontName:(id*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)addFontMenuWithName:(id)arg1 parmId:(unsigned int)arg2 fontName:(id)arg3 parmFlags:(unsigned int)arg4;
- (bool)addHelpButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (bool)addPushButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (bool)getBitmap:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)getBoolValue:(bool*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2;
- (bool)getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getFloatValue:(double*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getFontName:(id*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getFontName:(id*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)getGradientSamples:(void*)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)getGradientStartEnd:(double*)arg1 startY:(double*)arg2 endX:(double*)arg3 endY:(double*)arg4 type:(int*)arg5 fromParm:(unsigned int)arg6 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg7;
- (bool)getHistogramBlackIn:(double*)arg1 BlackOut:(double*)arg2 WhiteIn:(double*)arg3 WhiteOut:(double*)arg4 Gamma:(double*)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg8;
- (bool)getIntValue:(int*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getParameterFlags:(unsigned int*)arg1 fromParm:(unsigned int)arg2;
- (bool)getPathID:(void**)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned int)arg4 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)getStringParameterValue:(id*)arg1 fromParm:(unsigned int)arg2;
- (bool)getTexture:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned int)arg3 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg4;
- (bool)setBoolValue:(bool)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (bool)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setHistogramBlackIn:(double)arg1 blackOut:(double)arg2 whiteIn:(double)arg3 whiteOut:(double)arg4 gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg8;
- (bool)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (bool)setPathID:(void*)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)setStringParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (bool)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg4;

@end