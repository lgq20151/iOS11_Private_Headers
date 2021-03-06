/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPRangingMeasurement : NSObject {
    double  _angle;
    double  _distance;
}

@property (nonatomic) double angle;
@property (nonatomic) double distance;

- (double)angle;
- (double)distance;
- (void)setAngle:(double)arg1;
- (void)setDistance:(double)arg1;

@end
