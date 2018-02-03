/* made by EzioChiu.
 */

@protocol _UITouchForceObservationMessageReading <NSObject>

@required

- (struct CGPoint { double x1; double x2; })centroid;
- (bool)shouldFilterDueToSystemGestures;
- (double)timestamp;
- (double)touchForce;

@end
