/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion {
    unsigned long long  _speedBumpEdges;
}

@property (nonatomic) unsigned long long speedBumpEdges;

- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;
- (bool)_canBeOccludedByRegionsAbove;
- (bool)_canOccludeRegionsBelow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 speedBumpEdges:(unsigned long long)arg2;
- (void)setSpeedBumpEdges:(unsigned long long)arg1;
- (unsigned long long)speedBumpEdges;

@end
