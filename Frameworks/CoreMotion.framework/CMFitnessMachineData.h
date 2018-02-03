/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMFitnessMachineData : NSObject <NSCopying, NSSecureCoding> {
    double  _elapsedTime;
    double  _inclination;
    double  _instantaneousCadence;
    double  _instantaneousPower;
    double  _instantaneousSpeed;
    double  _resistanceLevel;
    double  _totalDistance;
    double  _totalElevationAscended;
    double  _totalEnergy;
    long long  _totalFloorsClimbed;
    long long  _totalStrideCount;
    long long  _totalStrokeCount;
    double  fTimestamp;
}

@property (nonatomic) double elapsedTime;
@property (nonatomic) double inclination;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;
@property (nonatomic) double instantaneousSpeed;
@property (nonatomic) double resistanceLevel;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic) double totalDistance;
@property (nonatomic) double totalElevationAscended;
@property (nonatomic) double totalEnergy;
@property (nonatomic) long long totalFloorsClimbed;
@property (nonatomic) long long totalStrideCount;
@property (nonatomic) long long totalStrokeCount;

+ (bool)isAvailable;
+ (bool)supportsSecureCoding;

- (void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData { double x1; double x2; double x3; double x4; double x5; long long x6; long long x7; long long x8; double x9; double x10; double x11; double x12; double x13; double x14; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)elapsedTime;
- (void)encodeWithCoder:(id)arg1;
- (double)inclination;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1;
- (double)instantaneousCadence;
- (double)instantaneousPower;
- (double)instantaneousSpeed;
- (double)resistanceLevel;
- (void)setElapsedTime:(double)arg1;
- (void)setInclination:(double)arg1;
- (void)setInstantaneousCadence:(double)arg1;
- (void)setInstantaneousPower:(double)arg1;
- (void)setInstantaneousSpeed:(double)arg1;
- (void)setResistanceLevel:(double)arg1;
- (void)setTotalDistance:(double)arg1;
- (void)setTotalElevationAscended:(double)arg1;
- (void)setTotalEnergy:(double)arg1;
- (void)setTotalFloorsClimbed:(long long)arg1;
- (void)setTotalStrideCount:(long long)arg1;
- (void)setTotalStrokeCount:(long long)arg1;
- (id)timestamp;
- (double)totalDistance;
- (double)totalElevationAscended;
- (double)totalEnergy;
- (long long)totalFloorsClimbed;
- (long long)totalStrideCount;
- (long long)totalStrokeCount;

@end
