/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKConstraint : NSObject <NSCoding, NSCopying> {
    bool  _enabled;
    SKNode * _referenceNode;
}

@property bool enabled;
@property (nonatomic, retain) SKNode *referenceNode;

+ (id)distance:(id)arg1 toNode:(id)arg2;
+ (id)distance:(id)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)distance:(id)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 inNode:(id)arg3;
+ (id)height:(id)arg1;
+ (id)orientToNode:(id)arg1 offset:(id)arg2;
+ (id)orientToPoint:(struct CGPoint { double x1; double x2; })arg1 inNode:(id)arg2 offset:(id)arg3;
+ (id)orientToPoint:(struct CGPoint { double x1; double x2; })arg1 offset:(id)arg2;
+ (id)positionX:(id)arg1;
+ (id)positionX:(id)arg1 Y:(id)arg2;
+ (id)positionY:(id)arg1;
+ (id)scale:(id)arg1;
+ (id)scaleX:(id)arg1;
+ (id)scaleX:(id)arg1 scaleY:(id)arg2;
+ (id)scaleY:(id)arg1;
+ (id)width:(id)arg1;
+ (id)width:(id)arg1 height:(id)arg2;
+ (id)zRotation:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)referenceNode;
- (void)setEnabled:(bool)arg1;
- (void)setReferenceNode:(id)arg1;

@end