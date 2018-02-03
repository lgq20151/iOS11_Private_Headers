/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardTouchInfo : NSObject {
    bool  _dragged;
    int  _fingerID;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDragPoint;
    int  _initialKeyState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPoint;
    UIKBTree * _key;
    UIKBTree * _keyplane;
    bool  _maySuppressUpAction;
    UIKBTree * _slidOffKey;
    int  _stage;
    UIKBTouchState * _touch;
}

@property (nonatomic) bool dragged;
@property (nonatomic) int fingerID;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialDragPoint;
@property (nonatomic) int initialKeyState;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPoint;
@property (nonatomic, retain) UIKBTree *key;
@property (nonatomic, retain) UIKBTree *keyplane;
@property (nonatomic) bool maySuppressUpAction;
@property (nonatomic, retain) UIKBTree *slidOffKey;
@property (nonatomic) int stage;
@property (nonatomic, retain) UIKBTouchState *touch;

- (void)dealloc;
- (bool)dragged;
- (int)fingerID;
- (struct CGPoint { double x1; double x2; })initialDragPoint;
- (int)initialKeyState;
- (struct CGPoint { double x1; double x2; })initialPoint;
- (id)key;
- (id)keyplane;
- (bool)maySuppressUpAction;
- (void)setDragged:(bool)arg1;
- (void)setFingerID:(int)arg1;
- (void)setInitialDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialKeyState:(int)arg1;
- (void)setInitialPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKey:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setMaySuppressUpAction:(bool)arg1;
- (void)setSlidOffKey:(id)arg1;
- (void)setStage:(int)arg1;
- (void)setTouch:(id)arg1;
- (id)slidOffKey;
- (int)stage;
- (id)touch;

@end
