/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding> {
    struct _psdGradientColor { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  leadOutColor;
}

+ (id)doubleColorStopWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg2 leadOutColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg3;
+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg2 leadOutColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg3;
- (bool)isDoubleStop;
- (struct _psdGradientColor { double x1; double x2; double x3; double x4; })leadInColor;
- (struct _psdGradientColor { double x1; double x2; double x3; double x4; })leadOutColor;

@end
