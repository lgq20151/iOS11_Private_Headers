/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventGameControllerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSCopying, NSSecureCoding> {
    double  _directionPadDown;
    double  _directionPadLeft;
    double  _directionPadRight;
    double  _directionPadUp;
    double  _faceButtonA;
    double  _faceButtonB;
    double  _faceButtonX;
    double  _faceButtonY;
    double  _leftJoystickX;
    double  _leftJoystickY;
    double  _rightJoystickX;
    double  _rightJoystickY;
    double  _shoulderButtonL1;
    double  _shoulderButtonL2;
    double  _shoulderButtonR1;
    double  _shoulderButtonR2;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double directionPadDown;
@property (nonatomic) double directionPadLeft;
@property (nonatomic) double directionPadRight;
@property (nonatomic) double directionPadUp;
@property (nonatomic) double faceButtonA;
@property (nonatomic) double faceButtonB;
@property (nonatomic) double faceButtonX;
@property (nonatomic) double faceButtonY;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool leftJoystickActive;
@property (nonatomic) double leftJoystickX;
@property (nonatomic) double leftJoystickY;
@property (nonatomic, readonly) bool rightJoystickActive;
@property (nonatomic) double rightJoystickX;
@property (nonatomic) double rightJoystickY;
@property (nonatomic) double shoulderButtonL1;
@property (nonatomic) double shoulderButtonL2;
@property (nonatomic) double shoulderButtonR1;
@property (nonatomic) double shoulderButtonR2;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)accessibilityEventRepresentationTabularDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)directionPadDown;
- (double)directionPadLeft;
- (double)directionPadRight;
- (double)directionPadUp;
- (void)encodeWithCoder:(id)arg1;
- (double)faceButtonA;
- (double)faceButtonB;
- (double)faceButtonX;
- (double)faceButtonY;
- (id)initWithCoder:(id)arg1;
- (bool)leftJoystickActive;
- (double)leftJoystickX;
- (double)leftJoystickY;
- (bool)rightJoystickActive;
- (double)rightJoystickX;
- (double)rightJoystickY;
- (void)setDirectionPadDown:(double)arg1;
- (void)setDirectionPadLeft:(double)arg1;
- (void)setDirectionPadRight:(double)arg1;
- (void)setDirectionPadUp:(double)arg1;
- (void)setFaceButtonA:(double)arg1;
- (void)setFaceButtonB:(double)arg1;
- (void)setFaceButtonX:(double)arg1;
- (void)setFaceButtonY:(double)arg1;
- (void)setLeftJoystickX:(double)arg1;
- (void)setLeftJoystickY:(double)arg1;
- (void)setRightJoystickX:(double)arg1;
- (void)setRightJoystickY:(double)arg1;
- (void)setShoulderButtonL1:(double)arg1;
- (void)setShoulderButtonL2:(double)arg1;
- (void)setShoulderButtonR1:(double)arg1;
- (void)setShoulderButtonR2:(double)arg1;
- (double)shoulderButtonL1;
- (double)shoulderButtonL2;
- (double)shoulderButtonR1;
- (double)shoulderButtonR2;

@end