/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarStringView : UILabel <_UIStatusBarDisplayable> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    NSString * _alternateText;
    NSTimer * _alternateTextTimer;
    double  _baselineOffset;
    bool  _emphasized;
    NSString * _originalText;
    bool  _showsAlternateText;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic, copy) NSString *alternateText;
@property (nonatomic, readonly) NSTimer *alternateTextTimer;
@property (nonatomic) double baselineOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool emphasized;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *originalText;
@property (nonatomic) bool showsAlternateText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)_updateAlternateTextTimer;
- (id)accessibilityHUDRepresentation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)alternateText;
- (id)alternateTextTimer;
- (void)applyStyleAttributes:(id)arg1;
- (double)baselineOffset;
- (void)didMoveToWindow;
- (bool)emphasized;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)originalText;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAlternateText:(id)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setEmphasized:(bool)arg1;
- (void)setOriginalText:(id)arg1;
- (void)setShowsAlternateText:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)showsAlternateText;
- (bool)wantsCrossfade;

@end
