/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartIntervalButton : UILabel {
    bool  _selected;
}

@property (getter=isSelected, nonatomic) bool selected;

+ (id)titleForInterval:(long long)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)setSelected:(bool)arg1;

@end