/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagedDeviceUpdateDelay : NSObject {
    bool  _completedDelayCycle;
    NSDate * _delayedStartDate;
    bool  _hasStartedDelaying;
    bool  _isDelayed;
}

@property (nonatomic) bool completedDelayCycle;
@property (nonatomic, retain) NSDate *delayedStartDate;
@property (nonatomic) bool hasStartedDelaying;
@property (nonatomic) bool isDelayed;

+ (bool)supportsSecureCoding;

- (bool)completedDelayCycle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delayedStartDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasStartedDelaying;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelay:(id)arg1;
- (bool)isDelayed;
- (void)setCompletedDelayCycle:(bool)arg1;
- (void)setDelayedStartDate:(id)arg1;
- (void)setHasStartedDelaying:(bool)arg1;
- (void)setIsDelayed:(bool)arg1;

@end
