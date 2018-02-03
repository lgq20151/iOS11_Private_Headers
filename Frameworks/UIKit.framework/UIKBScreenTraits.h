/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBScreenTraits : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    bool  _isKeyboardMinorEdgeWidth;
    double  _keyboardWidth;
    bool  _knobInput;
    long long  _orientation;
    UIScreen * _screen;
    bool  _touchInput;
    bool  _touchpadInput;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) bool isKeyboardMinorEdgeWidth;
@property (nonatomic) double keyboardWidth;
@property (nonatomic, readonly) bool knobInput;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) bool touchInput;
@property (nonatomic, readonly) bool touchpadInput;

+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)description;
- (long long)idiom;
- (id)initWithScreen:(id)arg1 orientation:(long long)arg2;
- (bool)isKeyboardMinorEdgeWidth;
- (double)keyboardWidth;
- (bool)knobInput;
- (long long)orientation;
- (id)screen;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardWidth:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (bool)touchInput;
- (bool)touchpadInput;
- (void)updateForTextInputTraits:(id)arg1 supportedInteractionModel:(unsigned long long)arg2;

@end
