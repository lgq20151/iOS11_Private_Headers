/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource> {
    unsigned long long  _alignment;
    NSMutableDictionary * _alignmentConstraints;
}

@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool layoutFillsCanvas;
@property (nonatomic) bool layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

+ (Class)_configurationHistoryClass;

- (void).cxx_destruct;
- (void)_addConstraintGroupsAsNecessary;
- (void)_addIndividualConstraintsIfPossible;
- (id)_alignmentConfigurationHistory;
- (id)_alignmentPropertySource;
- (long long)_attributeForConstraintGroupName:(id)arg1;
- (long long)_axisForSpanningLayoutGuide;
- (bool)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_clearAllConstraintsArrays;
- (bool)_hasStaleConfiguration;
- (id)_identifierForSpanningLayoutGuide;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (void)_removeConstraintGroupsAsNecessary;
- (void)_removeIndividualConstraintsAsNecessary;
- (void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4;
- (bool)_spanningGuideConstraintsNeedUpdate;
- (void)_updateArrangementConstraints;
- (void)_updateConfigurationHistory;
- (bool)_usesCenteringConnectionConstraint;
- (bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;
- (bool)_wantsAmbiguitySuppressionConstraints;
- (bool)_wantsConstraintsForAttribute:(long long)arg1;
- (bool)_wantsConstraintsUsingAttributesForAxis:(long long)arg1;
- (unsigned long long)alignment;
- (id)initWithItems:(id)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setAxis:(long long)arg1;
- (void)setLayoutFillsCanvas:(bool)arg1;
- (void)setLayoutUsesCanvasMarginsWhenFilling:(bool)arg1;

@end
