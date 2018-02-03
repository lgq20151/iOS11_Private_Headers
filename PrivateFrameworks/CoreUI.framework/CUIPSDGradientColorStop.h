/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {
    struct _psdGradientColor { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  gradientColor;
}

+ (id)colorStopWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg2;
+ (void)initialize;

- (double)colorLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct _psdGradientColor { double x1; double x2; double x3; double x4; })gradientColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg2;
- (bool)isColorStop;

@end
