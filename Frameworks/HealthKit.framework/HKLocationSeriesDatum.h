/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKLocationSeriesDatum : NSObject <NSSecureCoding> {
    NSDate * _date;
    CLLocation * _location;
}

@property (readonly) NSDate *date;
@property (readonly) CLLocation *location;

+ (id)datumWithLocation:(id)arg1 date:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_validateWithError:(id*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;

@end
