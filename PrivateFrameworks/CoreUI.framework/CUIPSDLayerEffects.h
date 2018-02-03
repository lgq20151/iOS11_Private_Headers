/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffects : NSObject {
    NSMutableDictionary * _effectList;
    double  _effectScale;
    bool  _visible;
}

@property (retain) NSMutableDictionary *effectList;
@property double effectScale;
@property bool visible;

- (void)addLayerEffectComponent:(id)arg1;
- (void)dealloc;
- (id)dropShadow;
- (id)effectList;
- (double)effectScale;
- (id)init;
- (void)setEffectList:(id)arg1;
- (void)setEffectScale:(double)arg1;
- (void)setVisible:(bool)arg1;
- (bool)visible;

@end
