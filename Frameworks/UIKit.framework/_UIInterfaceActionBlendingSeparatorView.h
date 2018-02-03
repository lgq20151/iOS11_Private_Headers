/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView <UIInterfaceActionVisualSectionSeparatorDisplaying, UIInterfaceActionVisualSeparatorDisplaying> {
    _UIInterfaceActionSeparatorConstraintController * _separatorViewConstraints;
}

@property (nonatomic) double constantAxisDimension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints;
@property (readonly) Class superclass;

+ (id)colorBurnColor;
+ (id)plusDColor;

- (void).cxx_destruct;
- (double)constantAxisDimension;
- (id)init;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;
- (id)separatorViewConstraints;
- (void)setConstantAxisDimension:(double)arg1;
- (void)setConstantSizedAxis:(long long)arg1;
- (void)updateConstraints;

@end