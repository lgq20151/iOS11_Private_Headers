/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCGestureEvent : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _averageLocation;
    unsigned long long  _deviceIdentifier;
    SCRCGestureFinger * _finger;
    unsigned long long  _fingerCount;
    double  _time;
}

@property (nonatomic) double time;

- (void).cxx_destruct;
- (void)addFingerWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 orbValue:(double)arg3;
- (void)addStylusWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;
- (struct CGPoint { double x1; double x2; })averageLocation;
- (struct CGPoint { double x1; double x2; })balancedLocation;
- (void)dealloc;
- (id)description;
- (unsigned long long)deviceIdentifier;
- (id)fingerAtIndex:(unsigned long long)arg1;
- (unsigned long long)fingerCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fingerFrame;
- (id)fingerWithIdentifier:(unsigned long long)arg1;
- (id)fingerWithoutIdentifier:(unsigned long long)arg1;
- (id)fingers;
- (id)initWithDeviceIdentifier:(unsigned long long)arg1;
- (bool)isCancelEvent;
- (struct CGPoint { double x1; double x2; })magneticLocation;
- (void)removeFingerWithIdentifier:(unsigned long long)arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end