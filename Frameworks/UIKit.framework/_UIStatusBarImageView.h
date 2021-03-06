/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarImageView : UIImageView <_UIStatusBarDisplayable> {
    UIImage * _accessibilityHUDImage;
    bool  _useDisabledAppearanceForAccessibilityHUD;
}

@property (nonatomic, retain) UIImage *accessibilityHUDImage;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic, readonly) double baselineOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useDisabledAppearanceForAccessibilityHUD;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (id)accessibilityHUDImage;
- (id)accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHUDImage:(id)arg1;
- (void)setUseDisabledAppearanceForAccessibilityHUD:(bool)arg1;
- (bool)useDisabledAppearanceForAccessibilityHUD;

@end
