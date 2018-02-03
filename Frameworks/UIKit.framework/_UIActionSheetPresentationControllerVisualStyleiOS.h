/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle> {
    UIActionSheetiOSDismissActionView * _dismissActionView;
    UITraitCollection * _traitCollection;
}

@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) UIColor *dimmingViewColor;
@property (nonatomic, retain) UIActionSheetiOSDismissActionView *dismissActionView;
@property (readonly) double dismissToContentSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)cornerRadius;
- (id)dimmingViewColor;
- (id)dismissActionView;
- (double)dismissToContentSpacing;
- (id)init;
- (void)setDismissActionView:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;

@end
