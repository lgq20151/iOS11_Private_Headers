/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKPageIndicatorView : UIView {
    unsigned long long  _circleSpacing;
    unsigned long long  _circleWidth;
    long long  _currentPage;
    long long  _numberOfPages;
}

@property (nonatomic) unsigned long long circleSpacing;
@property (nonatomic) unsigned long long circleWidth;
@property (nonatomic) long long currentPage;
@property (nonatomic) long long numberOfPages;

- (unsigned long long)circleSpacing;
- (unsigned long long)circleWidth;
- (void)commonInit;
- (long long)currentPage;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfPages;
- (void)setCircleSpacing:(unsigned long long)arg1;
- (void)setCircleWidth:(unsigned long long)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setNumberOfPages:(long long)arg1;

@end
