/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _MNMapPointsArray : NSObject {
    unsigned long long  _count;
    struct { double x1; double x2; } * _mapPoints;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) struct { double x1; double x2; }*mapPoints;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *points; /* unknown property attribute:  1>=[2d]} */

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (struct { double x1; double x2; }*)mapPoints;
- (struct Matrix<double, 2, 1> { double x1[2]; }*)points;

@end
