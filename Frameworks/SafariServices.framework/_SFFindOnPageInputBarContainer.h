/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFindOnPageInputBarContainer : UIView {
    UISearchBar * _inputBar;
    double  _maximumWidth;
}

@property (nonatomic, readonly) UISearchBar *inputBar;
@property (nonatomic) double maximumWidth;

- (void).cxx_destruct;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputBar;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)maximumWidth;
- (void)setMaximumWidth:(double)arg1;

@end
