/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface GeodesicDistancePoint : NSObject {
    NSDate * _date;
    double  _geodesicDistance;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) double geodesicDistance;
@property (readonly) double timeIntervalSinceReferenceDate;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (double)geodesicDistance;
- (id)initWithDate:(id)arg1 geodesicDistance:(double)arg2;
- (void)setDate:(id)arg1;
- (void)setGeodesicDistance:(double)arg1;
- (double)timeIntervalSinceReferenceDate;

@end
