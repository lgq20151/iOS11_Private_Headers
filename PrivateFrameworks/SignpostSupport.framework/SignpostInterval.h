/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostInterval : SignpostObject {
    SignpostEvent * _beginEvent;
    SignpostEvent * _endEvent;
}

@property (nonatomic, retain) SignpostEvent *beginEvent;
@property (nonatomic, retain) SignpostEvent *endEvent;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (float)_durationInSec;
- (id)_eventDescriptions;
- (id)beginEvent;
- (id)debugDescription;
- (unsigned long long)durationMachContinuousTime;
- (id)endEvent;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)hash;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)number1Name;
- (id)number1Value;
- (id)number2Name;
- (id)number2Value;
- (unsigned long long)scope;
- (id)serializeableDictionary;
- (void)setBeginEvent:(id)arg1;
- (void)setEndEvent:(id)arg1;
- (unsigned long long)startMachContinuousTime;
- (id)string1Name;
- (id)string1Value;
- (id)string2Name;
- (id)string2Value;
- (bool)telemetryEnabled;

@end
