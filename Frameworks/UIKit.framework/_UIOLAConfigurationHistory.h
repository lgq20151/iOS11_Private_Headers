/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIOLAConfigurationHistory : _UILAConfigurationHistory <_UIOLAPropertySource> {
    bool  _baselineRelativeArrangement;
    NSMapTable * _customSpacings;
    long long  _distribution;
    bool  _hasEstablishedOrderingValues;
    bool  _inOrderedArrangementUpdateSection;
    bool  _itemFittingSizeChanged;
    bool  _itemOrderingChanged;
    double  _proportionalFillDenominator;
    double  _spacing;
}

@property (setter=_setItemFittingSizeChanged:, nonatomic) bool _itemFittingSizeChanged;
@property (setter=_setItemOrderingChanged:, nonatomic) bool _itemOrderingChanged;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic) long long axis;
@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (nonatomic, readonly) NSMapTable *customSpacings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long distribution;
@property (nonatomic) bool hasEstablishedOrderingValues;
@property (readonly) unsigned long long hash;
@property (getter=isInOrderedArrangementUpdateSection, nonatomic) bool inOrderedArrangementUpdateSection;
@property (nonatomic) bool layoutFillsCanvas;
@property (nonatomic) bool layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic) double proportionalFillDenominator;
@property (nonatomic) double spacing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_itemFittingSizeChanged;
- (bool)_itemOrderingChanged;
- (void)_setItemFittingSizeChanged:(bool)arg1;
- (void)_setItemOrderingChanged:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)customSpacingAfterItem:(id)arg1;
- (id)customSpacings;
- (long long)distribution;
- (bool)hasEstablishedOrderingValues;
- (bool)isBaselineRelativeArrangement;
- (bool)isInOrderedArrangementUpdateSection;
- (double)proportionalFillDenominator;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
- (void)setDistribution:(long long)arg1;
- (void)setHasEstablishedOrderingValues:(bool)arg1;
- (void)setInOrderedArrangementUpdateSection:(bool)arg1;
- (void)setProportionalFillDenominator:(double)arg1;
- (void)setSpacing:(double)arg1;
- (double)spacing;

@end
