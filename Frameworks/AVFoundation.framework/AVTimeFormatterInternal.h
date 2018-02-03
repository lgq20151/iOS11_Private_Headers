/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVTimeFormatterInternal : NSObject {
    NSString * cachedDateFormatterFormat;
    NSString * cachedDateFormatterTemplate;
    double  formatTemplate;
    bool  isFullWidth;
    bool  isRightToLeft;
    NSLocale * locale;
    NSNumberFormatter * numberFormatterWithOneMinimumIntegerDigits;
    NSNumberFormatter * numberFormatterWithTwoMinimumIntegerDigits;
    long long  style;
}

@end
