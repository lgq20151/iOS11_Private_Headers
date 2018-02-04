/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAUITransportButton : UIButton {
    int  drawingStyle;
    struct CGColor { } * fillColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  imageRect;
}

@property int drawingStyle;
@property struct CGColor { }*fillColor;

+ (Class)layerClass;

- (int)drawingStyle;
- (struct CGColor { }*)fillColor;
- (void)flash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPath { }*)newPathRefForStyle:(int)arg1;
- (void)setDrawingStyle:(int)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end