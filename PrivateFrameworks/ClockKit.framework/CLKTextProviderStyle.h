/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKTextProviderStyle : NSObject <NSCopying> {
    CLKFont * _font;
    double  _minimumScaleFactor;
    NSParagraphStyle * _paragraphStyle;
    CLKFont * _smallCapsBaseFont;
    bool  _uppercase;
}

@property (nonatomic, copy) CLKFont *font;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic, copy) NSParagraphStyle *paragraphStyle;
@property (nonatomic, copy) CLKFont *smallCapsBaseFont;
@property (nonatomic) bool uppercase;

+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(bool)arg3 paragraphStyle:(id)arg4;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(bool)arg3 paragraphStyle:(id)arg4 minimumScaleFactor:(double)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)font;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)minimumScaleFactor;
- (id)paragraphStyle;
- (void)setFont:(id)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setSmallCapsBaseFont:(id)arg1;
- (void)setUppercase:(bool)arg1;
- (id)smallCapsBaseFont;
- (bool)uppercase;

@end
