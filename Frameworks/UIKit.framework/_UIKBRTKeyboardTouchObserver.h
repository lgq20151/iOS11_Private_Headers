/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBRTKeyboardTouchObserver : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _fCenter;
    int  _homeRowOffsetIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _jCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _keySize;
    NSArray * _rowOffsets;
    NSArray * _rowXEdges;
    NSArray * _rowYEdgesLeft;
    NSArray * _rowYEdgesRight;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } fCenter;
@property (nonatomic) int homeRowOffsetIndex;
@property (nonatomic) struct CGPoint { double x1; double x2; } jCenter;
@property (nonatomic) struct CGSize { double x1; double x2; } keySize;
@property (nonatomic, retain) NSArray *rowOffsets;
@property (nonatomic, retain) NSArray *rowXEdges;
@property (nonatomic, retain) NSArray *rowYEdgesLeft;
@property (nonatomic, retain) NSArray *rowYEdgesRight;

- (void).cxx_destruct;
- (void)addTouchLocation:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2 withIdentifier:(id)arg3;
- (void)addTouchLocation:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;
- (struct CGPoint { double x1; double x2; })fCenter;
- (int)homeRowOffsetIndex;
- (struct CGPoint { double x1; double x2; })jCenter;
- (struct CGSize { double x1; double x2; })keySize;
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint { double x1; double x2; })arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;
- (void)removeTouchWithIdentifier:(id)arg1;
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(bool)arg2;
- (void)reset;
- (id)rowOffsets;
- (id)rowXEdges;
- (id)rowYEdgesLeft;
- (id)rowYEdgesRight;
- (void)setFCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHomeRowOffsetIndex:(int)arg1;
- (void)setJCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKeySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRowOffsets:(id)arg1;
- (void)setRowXEdges:(id)arg1;
- (void)setRowYEdgesLeft:(id)arg1;
- (void)setRowYEdgesRight:(id)arg1;
- (void)updateWithFCenter:(struct CGPoint { double x1; double x2; })arg1 jCenter:(struct CGPoint { double x1; double x2; })arg2 keySize:(struct CGSize { double x1; double x2; })arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;

@end