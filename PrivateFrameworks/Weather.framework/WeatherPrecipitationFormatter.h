/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherPrecipitationFormatter : NSLengthFormatter {
    NSLocale * _locale;
}

@property (nonatomic, retain) NSLocale *locale;

+ (id)convenienceFormatter;

- (void).cxx_destruct;
- (double)convertDistanceInImperial:(double)arg1 to:(long long)arg2;
- (double)convertDistanceInMetric:(double)arg1 to:(long long)arg2;
- (id)init;
- (id)locale;
- (long long)precipitationUnit;
- (void)setLocale:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromCentimeters:(double)arg1;
- (id)stringFromDistance:(double)arg1 isDataMetric:(bool)arg2;
- (id)stringFromInches:(double)arg1;

@end