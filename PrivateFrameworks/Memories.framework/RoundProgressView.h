/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface RoundProgressView : UIView {
    double  _pieWidth;
    double  _progress;
}

@property (nonatomic) double pieWidth;
@property (nonatomic) double progress;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)pieWidth;
- (double)progress;
- (void)setPieWidth:(double)arg1;
- (void)setProgress:(double)arg1;

@end
