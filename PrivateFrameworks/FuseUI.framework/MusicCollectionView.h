/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCollectionView : UICollectionView {
    UITraitCollection * _cachedTraitCollection;
    bool  _shouldTreatContentOffsetChangesAsDeltas;
}

@property (nonatomic) <MusicCollectionViewDelegate> *delegate;
@property (nonatomic) bool shouldTreatContentOffsetChangesAsDeltas;

- (void).cxx_destruct;
- (void)setShouldTreatContentOffsetChangesAsDeltas:(bool)arg1;
- (bool)shouldTreatContentOffsetChangesAsDeltas;
- (void)tintColorDidChange;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;

@end