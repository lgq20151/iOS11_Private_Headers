/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTableLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewTableAllRowAttributes, UICollectionViewTableSectionHeaderFooterAttributes> {
    long long  _accessoryType;
    UIColor * _backgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _backgroundInset;
    double  _defaultLeadingCellMarginWidth;
    double  _defaultTrailingCellMarginWidth;
    bool  _drawsSeparatorAtBottomOfSection;
    bool  _drawsSeparatorAtTopOfSection;
    long long  _editingStyle;
    bool  _floating;
    long long  _indentationLevel;
    double  _indexBarExtentFromEdge;
    bool  _insetsContentViewsToSafeArea;
    bool  _isHeader;
    bool  _layoutMarginsFollowReadableWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    double  _maxTitleWidth;
    double  _sectionBorderWidth;
    int  _sectionLocation;
    UIColor * _separatorColor;
    UIVisualEffect * _separatorEffect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorInset;
    bool  _separatorInsetIsRelativeToCellEdges;
    long long  _separatorStyle;
    bool  _shouldIndentWhileEditing;
    bool  _showsReorderControl;
    long long  _textAlignment;
}

@property (nonatomic) long long accessoryType;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInset;
@property (nonatomic) double defaultLeadingCellMarginWidth;
@property (nonatomic) double defaultTrailingCellMarginWidth;
@property (nonatomic) bool drawsSeparatorAtBottomOfSection;
@property (nonatomic) bool drawsSeparatorAtTopOfSection;
@property (nonatomic) long long editingStyle;
@property (nonatomic) bool floating;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) double indexBarExtentFromEdge;
@property (nonatomic) bool insetsContentViewsToSafeArea;
@property (nonatomic) bool isHeader;
@property (nonatomic) bool layoutMarginsFollowReadableWidth;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic) double maxTitleWidth;
@property (nonatomic) double sectionBorderWidth;
@property (nonatomic) int sectionLocation;
@property (nonatomic, copy) UIColor *separatorColor;
@property (nonatomic, retain) UIVisualEffect *separatorEffect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) bool separatorInsetIsRelativeToCellEdges;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) bool shouldIndentWhileEditing;
@property (nonatomic) bool showsReorderControl;
@property (nonatomic) long long textAlignment;

+ (void)applyValuesFromAttributes:(id)arg1 toAttributes:(id)arg2 valueOptions:(long long)arg3;
+ (long long)automaticValueOptionsForRepresentedElementCategory:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)accessoryType;
- (id)backgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultLeadingCellMarginWidth;
- (double)defaultTrailingCellMarginWidth;
- (bool)drawsSeparatorAtBottomOfSection;
- (bool)drawsSeparatorAtTopOfSection;
- (long long)editingStyle;
- (bool)floating;
- (long long)indentationLevel;
- (double)indexBarExtentFromEdge;
- (bool)insetsContentViewsToSafeArea;
- (bool)isEqual:(id)arg1;
- (bool)isHeader;
- (bool)layoutMarginsFollowReadableWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (double)maxTitleWidth;
- (double)sectionBorderWidth;
- (int)sectionLocation;
- (id)separatorColor;
- (id)separatorEffect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (bool)separatorInsetIsRelativeToCellEdges;
- (long long)separatorStyle;
- (void)setAccessoryType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDefaultLeadingCellMarginWidth:(double)arg1;
- (void)setDefaultTrailingCellMarginWidth:(double)arg1;
- (void)setDrawsSeparatorAtBottomOfSection:(bool)arg1;
- (void)setDrawsSeparatorAtTopOfSection:(bool)arg1;
- (void)setEditingStyle:(long long)arg1;
- (void)setFloating:(bool)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (void)setIndexBarExtentFromEdge:(double)arg1;
- (void)setInsetsContentViewsToSafeArea:(bool)arg1;
- (void)setIsHeader:(bool)arg1;
- (void)setLayoutMarginsFollowReadableWidth:(bool)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaxTitleWidth:(double)arg1;
- (void)setSectionBorderWidth:(double)arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorEffect:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorInsetIsRelativeToCellEdges:(bool)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setShouldIndentWhileEditing:(bool)arg1;
- (void)setShowsReorderControl:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (bool)shouldIndentWhileEditing;
- (bool)showsReorderControl;
- (long long)textAlignment;

@end
