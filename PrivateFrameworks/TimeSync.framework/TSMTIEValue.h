/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSMTIEValue : NSObject {
    double  _mtie;
    double  _observationInterval;
}

@property (nonatomic, readonly) double mtie;
@property (nonatomic, readonly) double observationInterval;

- (id)description;
- (id)initWithObservationInterval:(double)arg1 andMTIE:(double)arg2;
- (double)mtie;
- (double)observationInterval;

@end
