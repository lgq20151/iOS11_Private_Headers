/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUITableViewCell : UITableViewCell {
    bool  _drawsOwnRowSeparators;
    UIColor * _rowSeparatorColor;
    UIVisualEffectView * _rowSeparatorParentView;
    UIVisualEffect * _rowSeparatorVisualEffect;
    RowSeparatorView * _separatorViewForNonOpaqueTables;
    bool  _usesInsetMargin;
}

@property (nonatomic) bool drawsOwnRowSeparators;
@property (nonatomic, retain) UIColor *rowSeparatorColor;
@property (nonatomic, retain) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) bool usesInsetMargin;

+ (id)reuseIdentifier;
+ (double)rowSeparatorThickness;
+ (bool)vibrant;

- (void).cxx_destruct;
- (void)_layoutSeparator;
- (void)_setMarginExtendsToFullWidth:(bool)arg1;
- (bool)drawsOwnRowSeparators;
- (void)layoutSubviews;
- (id)rowSeparatorColor;
- (id)rowSeparatorVisualEffect;
- (void)setDrawsOwnRowSeparators:(bool)arg1;
- (void)setRowSeparatorColor:(id)arg1;
- (void)setRowSeparatorVisualEffect:(id)arg1;
- (void)setUsesInsetMargin:(bool)arg1;
- (bool)usesInsetMargin;

@end
