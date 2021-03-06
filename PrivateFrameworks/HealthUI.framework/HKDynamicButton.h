/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDynamicButton : UIButton {
    NSLayoutConstraint * _heightConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)heightConstraint;
- (void)setHeightConstraint:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
