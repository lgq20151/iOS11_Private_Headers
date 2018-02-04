/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIHorizontalListView : SKUIViewReuseView <SKUIMenuPopoverDelegate, SKUIViewElementView> {
    NSMutableArray * _artworkRequestPassthroughViews;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bigHitInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    double  _elementSpacing;
    UIControl * _focusedMenuButton;
    NSMapTable * _imageViewToImageResourceCacheKey;
    NSArray * _lines;
    SKUIListViewElement * _listElement;
    SKUIMenuPopoverController * _popoverController;
    bool  _useBigHitTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;
+ (double)_elementSpacingForViewElement:(id)arg1;
+ (double)_lineSpacingForLineElements:(id)arg1;
+ (double)_lineSpacingForViewElement:(id)arg1;
+ (id)_linesWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_destroyMenuPopover;
- (void)_imageTapAction:(id)arg1;
- (void)_menuButtonAction:(id)arg1;
- (id)_viewElementForView:(id)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)menuPopoverDidCancel:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end