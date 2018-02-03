/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivity : CMLogItem {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int mountedState; 
        int mountedConfidence; 
        bool isStanding; 
        float tilt; 
        double timestamp; 
        bool isVehicleConnected; 
        int exitState; 
        double estExitTime; 
        double startTime; 
        int rawType; 
        int rawConfidence; 
        struct { 
            unsigned int motionHint : 1; 
            unsigned int gpsHint : 1; 
            unsigned int basebandHint : 1; 
            unsigned int wifiHint : 1; 
            unsigned int btHint : 1; 
        } vehicularFlags; 
        float drivingStowedLikelihoodSum; 
        float drivingArmLikelihoodSum; 
        float ssLikelihoodSum; 
    }  fActivity;
}

@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) bool hasExitedVehicle;
@property (nonatomic, readonly) bool isDriving;
@property (nonatomic, readonly) bool isMoving;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, readonly) bool isWalking;
@property (nonatomic, readonly) bool maybeExitingVehicle;

+ (bool)supportsSecureCoding;

- (struct CLMotionActivity { int x1; int x2; int x3; int x4; bool x5; float x6; double x7; bool x8; int x9; double x10; double x11; int x12; int x13; struct { unsigned int x_14_1_1 : 1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5 : 1; } x14; float x15; float x16; float x17; })activity;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasExitedVehicle;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; bool x5; float x6; double x7; bool x8; int x9; double x10; double x11; int x12; int x13; struct { unsigned int x_14_1_1 : 1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5 : 1; } x14; float x15; float x16; float x17; })arg1;
- (bool)isDriving;
- (bool)isMoving;
- (bool)isRunning;
- (bool)isWalking;
- (bool)maybeExitingVehicle;

@end
