/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMRecordedGyroData : CMGyroData {
    unsigned long long  _identifier;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rotationRate;
    double  _startDateValue;
    float  _temperatureValue;
    double  _timestampValue;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;
@property (readonly) float temperature;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(struct CMGyro50 { float x1; float x2; float x3; float x4; unsigned long long x5; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (void)resetWithData:(struct CMGyro50 { float x1; float x2; float x3; float x4; unsigned long long x5; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (struct { double x1; double x2; double x3; })rotationRate;
- (id)startDate;
- (float)temperature;
- (double)timestamp;

@end
