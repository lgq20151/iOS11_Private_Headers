/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding> {
    void * _formatter;
}

@property (copy) NSLocale *locale;
@property (copy) NSNumberFormatter *numberFormatter;
@property unsigned long long unitOptions;
@property long long unitStyle;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)locale;
- (id)measurementFromString:(id)arg1;
- (id)numberFormatter;
- (void)setLocale:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setUnitOptions:(unsigned long long)arg1;
- (void)setUnitStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromMeasurement:(id)arg1;
- (id)stringFromUnit:(id)arg1;
- (unsigned long long)unitOptions;
- (long long)unitStyle;

@end
