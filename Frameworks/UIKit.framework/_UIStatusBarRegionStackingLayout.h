/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarRegionStackingLayout : _UIStatusBarRegionLinearLayout {
    long long  _horizontalAlignment;
    bool  _hugging;
    double  _interspace;
}

@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) bool hugging;
@property (nonatomic) double interspace;

- (id)_horizontalConstraintsForViews:(id)arg1 layoutGuides:(id)arg2;
- (bool)fitsAllItems;
- (long long)horizontalAlignment;
- (bool)hugging;
- (double)interspace;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setHugging:(bool)arg1;
- (void)setInterspace:(double)arg1;

@end
