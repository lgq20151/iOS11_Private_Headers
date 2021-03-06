/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _APRIntentEvent : NSObject <NSSecureCoding> {
    NSString * _arg1;
    NSString * _arg2;
    NSString * _bundleId;
    NSDateInterval * _dateInterval;
    INIntent * _intent;
    NSString * _intentType;
}

@property (nonatomic, copy) NSString *arg1;
@property (nonatomic, copy) NSString *arg2;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) INIntent *intent;
@property (nonatomic, readonly, copy) NSString *intentType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arg1;
- (id)arg2;
- (id)bundleId;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3;
- (id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3 intent:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)intent;
- (id)intentType;
- (void)setArg1:(id)arg1;
- (void)setArg2:(id)arg1;
- (void)setBundleId:(id)arg1;

@end
