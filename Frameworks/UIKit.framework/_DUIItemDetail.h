/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _DUIItemDetail : NSObject <NSCopying, NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    NSArray * _lastKnownImageComponents;
    bool  _rotatable;
    double  _rotationAngle;
    bool  _scalable;
    double  _scale;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, retain) NSArray *lastKnownImageComponents;
@property (nonatomic) bool rotatable;
@property (nonatomic) double rotationAngle;
@property (nonatomic) bool scalable;
@property (nonatomic) double scale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastKnownImageComponents;
- (bool)rotatable;
- (double)rotationAngle;
- (bool)scalable;
- (double)scale;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastKnownImageComponents:(id)arg1;
- (void)setRotatable:(bool)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setScalable:(bool)arg1;
- (void)setScale:(double)arg1;

@end
