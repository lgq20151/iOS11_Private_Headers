/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityCollectionViewDescriptor : MusicEntityViewDescriptor {
    MPULayoutInterpolator * _lateralContentInsetFromCollectionViewContainerWidthInterpolator;
    double  _sectionHeaderBottomContentInset;
    bool  _shouldFlattenToSingleSectionInRegularWidthAndHeight;
    bool  _shouldShowOnlyFirstRowOfContent;
    bool  _showsSectionHeaders;
    MPULayoutInterpolator * _textLateralEdgePaddingFromInteritemSpacingLayoutInterpolator;
    MPULayoutInterpolator * _verticalLockupWidthFromCollectionViewWidthInterpolator;
}

@property (nonatomic, copy) MPULayoutInterpolator *lateralContentInsetFromCollectionViewContainerWidthInterpolator;
@property (nonatomic) double sectionHeaderBottomContentInset;
@property (nonatomic) bool shouldFlattenToSingleSectionInRegularWidthAndHeight;
@property (nonatomic) bool shouldShowOnlyFirstRowOfContent;
@property (nonatomic) bool showsSectionHeaders;
@property (nonatomic, copy) MPULayoutInterpolator *textLateralEdgePaddingFromInteritemSpacingLayoutInterpolator;
@property (nonatomic, copy) MPULayoutInterpolator *verticalLockupWidthFromCollectionViewWidthInterpolator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)lateralContentInsetFromCollectionViewContainerWidthInterpolator;
- (double)sectionHeaderBottomContentInset;
- (void)setLateralContentInsetFromCollectionViewContainerWidthInterpolator:(id)arg1;
- (void)setSectionHeaderBottomContentInset:(double)arg1;
- (void)setShouldFlattenToSingleSectionInRegularWidthAndHeight:(bool)arg1;
- (void)setShouldShowOnlyFirstRowOfContent:(bool)arg1;
- (void)setShowsSectionHeaders:(bool)arg1;
- (void)setTextLateralEdgePaddingFromInteritemSpacingLayoutInterpolator:(id)arg1;
- (void)setVerticalLockupWidthFromCollectionViewWidthInterpolator:(id)arg1;
- (bool)shouldFlattenToSingleSectionInRegularWidthAndHeight;
- (bool)shouldShowOnlyFirstRowOfContent;
- (bool)showsSectionHeaders;
- (id)textLateralEdgePaddingFromInteritemSpacingLayoutInterpolator;
- (id)verticalLockupWidthFromCollectionViewWidthInterpolator;

@end