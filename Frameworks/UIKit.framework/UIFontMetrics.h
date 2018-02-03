/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFontMetrics : NSObject {
    NSString * _textStyle;
}

+ (id)defaultMetrics;
+ (id)metricsForTextStyle:(id)arg1;

- (void).cxx_destruct;
- (id)ib_scaledFontForFont:(id)arg1;
- (id)ib_scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2;
- (id)init;
- (id)initForTextStyle:(id)arg1;
- (id)scaledFontForFont:(id)arg1;
- (id)scaledFontForFont:(id)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2;
- (id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;
- (double)scaledValueForValue:(double)arg1;
- (double)scaledValueForValue:(double)arg1 compatibleWithTraitCollection:(id)arg2;

@end
