/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDebugAlignmentRectView : UIView {
    double  _baselineOffset;
}

- (id)_alignmentDebuggingOverlayCreateIfNecessary:(bool)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 baselineOffset:(double)arg2;
- (bool)isOpaque;

@end
