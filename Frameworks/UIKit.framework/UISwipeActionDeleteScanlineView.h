/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwipeActionDeleteScanlineView : UIView {
    UIView * _bottomLine;
    UIView * _bottomLineWrapper;
    UIView * _topLine;
}

@property (nonatomic, copy) UIColor *deleteLineColor;

+ (double)lineHeight;

- (void).cxx_destruct;
- (id)deleteLineColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDeleteLineColor:(id)arg1;

@end
