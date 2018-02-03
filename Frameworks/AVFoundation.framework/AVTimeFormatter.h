/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVTimeFormatter : NSFormatter {
    AVTimeFormatterInternal * _internal;
}

@property (nonatomic) double formatTemplate;
@property (getter=isFullWidth, nonatomic) bool fullWidth;
@property (nonatomic) long long style;

- (id)cachedDateFormatterFormat;
- (id)cachedDateFormatterTemplate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (double)formatTemplate;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFullWidth;
- (bool)isRightToLeft;
- (id)locale;
- (id)numberFormatterWithOneMinimumIntegerDigits;
- (id)numberFormatterWithTwoMinimumIntegerDigits;
- (void)setCachedDateFormatterFormat:(id)arg1;
- (void)setCachedDateFormatterTemplate:(id)arg1;
- (void)setFormatTemplate:(double)arg1;
- (void)setFullWidth:(bool)arg1;
- (void)setIsRightToLeft:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg1;
- (void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)stringFromSeconds:(double)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (long long)style;

@end
