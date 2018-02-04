/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCategorySample : HKSample <HDCoding> {
    long long  _value;
}

@property (readonly) HKCategoryType *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (bool)supportsSecureCoding;

- (id)_bedtimeAlarmWithCalendar:(id)arg1;
- (void)_setValue:(long long)arg1;
- (id)_timeZoneName;
- (id)_validateConfiguration;
- (id)_valueDescription;
- (id)categoryType;
- (void)encodeWithCoder:(id)arg1;
- (long long)hk_integerValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)_addDefaultCategoryDetailValuesToSection:(id)arg1;
- (void)_addStationaryDiscordanceDetailValuesToSection:(id)arg1;
- (void)addDetailValuesToSection:(id)arg1;

@end