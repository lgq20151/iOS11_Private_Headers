/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTVibrantStyling : NSObject {
    double  _alpha;
    NSString * _blendMode;
    UIColor * _color;
    CAFilter * _composedFilter;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly, copy) NSString *blendMode;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly, copy) CAFilter *composedFilter;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, copy) UIVibrancyEffect *visualEffect;

+ (id)vibrantStylingWithPrivateStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_layerConfig;
- (double)alpha;
- (id)blendMode;
- (id)color;
- (id)composedFilter;
- (long long)style;
- (id)visualEffect;

@end