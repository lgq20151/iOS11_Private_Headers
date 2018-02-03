/* made by EzioChiu.
 */

@protocol UIDebuggingZoomDelegate

@required

- (NSArray *)drawLinesAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGImage { }*)newCaptureSnapshotAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 window:(UIWindow *)arg3;

@end
