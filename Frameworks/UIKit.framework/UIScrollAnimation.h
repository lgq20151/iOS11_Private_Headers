/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollAnimation : UIAnimation {
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setProgress:(float)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
