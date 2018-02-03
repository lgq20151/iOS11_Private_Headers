/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette {
    UISearchBar * __searchBar;
    bool  _ignoreGeometryChanges;
    id /* block */  _resetAfterSearchFieldFade;
}

@property (setter=_setSearchBar:, nonatomic) UISearchBar *_searchBar;
@property (setter=_setShadowAlpha:, nonatomic) double _shadowAlpha;
@property (nonatomic) bool ignoreGeometryChanges;
@property (nonatomic, copy) id /* block */ resetAfterSearchFieldFade;
@property (nonatomic, readonly) UIView *viewForAsymmetricFade;

- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)_popDisableLayoutFlushingForTransition;
- (void)_pushDisableLayoutFlushingForTransition;
- (id)_searchBar;
- (void)_setSearchBar:(id)arg1;
- (void)_setShadowAlpha:(double)arg1;
- (double)_shadowAlpha;
- (bool)_supportsSpecialSearchBarTransitions;
- (void)_updateLayoutForCurrentConfiguration;
- (bool)ignoreGeometryChanges;
- (id /* block */)resetAfterSearchFieldFade;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIgnoreGeometryChanges:(bool)arg1;
- (void)setResetAfterSearchFieldFade:(id /* block */)arg1;
- (id)viewForAsymmetricFade;

@end
