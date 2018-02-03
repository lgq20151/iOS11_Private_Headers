/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInterfaceActionSeparatorConstraintController : NSObject {
    double  _constantAxisDimension;
    long long  _constantSizedAxis;
    NSLayoutConstraint * _fixedHeightConstraint;
    NSLayoutConstraint * _fixedWidthConstraint;
    UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> * _separatorView;
}

@property (nonatomic) double constantAxisDimension;
@property (nonatomic) long long constantSizedAxis;
@property (nonatomic, readonly) NSLayoutConstraint *fixedHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *fixedWidthConstraint;
@property (nonatomic, readonly) UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView;

- (void).cxx_destruct;
- (bool)_isFixedWidth;
- (void)_updateConstantSizedConstraints;
- (double)constantAxisDimension;
- (long long)constantSizedAxis;
- (id)fixedHeightConstraint;
- (id)fixedWidthConstraint;
- (id)initWithSeparatorView:(id)arg1;
- (id)separatorView;
- (void)separatorViewDidUpdateConstraints;
- (void)setConstantAxisDimension:(double)arg1;
- (void)setConstantSizedAxis:(long long)arg1;

@end
