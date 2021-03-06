/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilityComplicationFactory : NSObject {
    bool  _accommodatesTwoTopComplications;
    long long  _bottomCenterLayout;
    double  _dateHorizontalCenterOffset;
    double  _dateKeylineMaxWidth;
    double  _dateVerticalCenterOffset;
    <NTKUtilityComplicationFactoryDelegate> * _delegate;
    double  _deselectedKeylineCircularInnerPadding;
    double  _deselectedKeylineSideInnerPadding;
    double  _deselectedKeylineVerticalInnerPadding;
    double  _foregroundAlpha;
    double  _foregroundImageAlpha;
    double  _normalCircularPadding;
    double  _normalSidePadding;
    double  _normalVerticalPadding;
    double  _selectedKeylineHeight;
    double  _selectedKeylineSideInnerPadding;
}

@property (nonatomic) bool accommodatesTwoTopComplications;
@property (nonatomic) long long bottomCenterLayout;
@property (nonatomic) double dateHorizontalCenterOffset;
@property (nonatomic) double dateKeylineMaxWidth;
@property (nonatomic) double dateVerticalCenterOffset;
@property (nonatomic) <NTKUtilityComplicationFactoryDelegate> *delegate;
@property (nonatomic) double deselectedKeylineCircularInnerPadding;
@property (nonatomic) double deselectedKeylineSideInnerPadding;
@property (nonatomic) double deselectedKeylineVerticalInnerPadding;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double foregroundImageAlpha;
@property (nonatomic) double normalCircularPadding;
@property (nonatomic) double normalSidePadding;
@property (nonatomic) double normalVerticalPadding;
@property (nonatomic) double selectedKeylineHeight;
@property (nonatomic) double selectedKeylineSideInnerPadding;

+ (unsigned long long)placementForSlot:(long long)arg1;

- (void).cxx_destruct;
- (void)_configureBottomCenterLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureBottomLeftLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureBottomRightAboveLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureBottomRightBelowLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureBottomRightLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureBottomRightLongLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureDateLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureLayout:(id)arg1 withNormalSize:(struct CGSize { double x1; double x2; })arg2 editingSize:(struct CGSize { double x1; double x2; })arg3 addCircleOverrides:(bool)arg4 makeRuleBlock:(id /* block */)arg5;
- (void)_configureTopLeftLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureTopRightAboveLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureTopRightBelowLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureTopRightLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureUpNextTopRightLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_maxBottomCenterWidthLeavingRoomForKeylines:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_maxBottomCornerWidthLeavingRoomForKeylines:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_maxDateWidthLeavingRoomForKeylines;
- (double)_maxTopCornerWidthLeavingRoomForKeylines:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_maxWidthForKeylineAndPadding;
- (id)_viewForDateComplication:(id)arg1;
- (bool)accommodatesTwoTopComplications;
- (long long)bottomCenterLayout;
- (void)configureComplicationLayout:(id)arg1 forSlot:(long long)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)dateHorizontalCenterOffset;
- (double)dateKeylineMaxWidth;
- (double)dateVerticalCenterOffset;
- (id)delegate;
- (double)deselectedKeylineCircularInnerPadding;
- (double)deselectedKeylineSideInnerPadding;
- (double)deselectedKeylineVerticalInnerPadding;
- (double)foregroundAlpha;
- (double)foregroundAlphaForEditing:(bool)arg1;
- (double)foregroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)foregroundImageAlpha;
- (double)foregroundImageAlphaForEditing:(bool)arg1;
- (double)foregroundImageAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)init;
- (double)keylineCornerRadiusForSlot:(long long)arg1;
- (unsigned long long)keylineLabelAlignmentForSlot:(long long)arg1;
- (long long)layoutOverrideForComplicationType:(unsigned long long)arg1 inSlot:(long long)arg2;
- (id)newViewForComplication:(id)arg1 family:(long long)arg2 forSlot:(long long)arg3;
- (double)normalCircularPadding;
- (double)normalSidePadding;
- (double)normalVerticalPadding;
- (double)selectedKeylineHeight;
- (double)selectedKeylineSideInnerPadding;
- (void)setAccommodatesTwoTopComplications:(bool)arg1;
- (void)setBottomCenterLayout:(long long)arg1;
- (void)setDateHorizontalCenterOffset:(double)arg1;
- (void)setDateKeylineMaxWidth:(double)arg1;
- (void)setDateVerticalCenterOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeselectedKeylineCircularInnerPadding:(double)arg1;
- (void)setDeselectedKeylineSideInnerPadding:(double)arg1;
- (void)setDeselectedKeylineVerticalInnerPadding:(double)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setForegroundImageAlpha:(double)arg1;
- (void)setNormalCircularPadding:(double)arg1;
- (void)setNormalSidePadding:(double)arg1;
- (void)setNormalVerticalPadding:(double)arg1;
- (void)setSelectedKeylineHeight:(double)arg1;
- (void)setSelectedKeylineSideInnerPadding:(double)arg1;

@end
