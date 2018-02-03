/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellSelectedBackground : UIView {
    bool  _multiselect;
    UIColor * _multiselectBackgroundColor;
    UIColor * _noneStyleBackgroundColor;
    long long  _selectionStyle;
    UIColor * _selectionTintColor;
}

@property (getter=isMultiselect, nonatomic) bool multiselect;
@property (nonatomic, retain) UIColor *multiselectBackgroundColor;
@property (nonatomic, retain) UIColor *noneStyleBackgroundColor;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, retain) UIColor *selectionTintColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMultiselect;
- (id)multiselectBackgroundColor;
- (id)noneStyleBackgroundColor;
- (long long)selectionStyle;
- (id)selectionTintColor;
- (void)setMultiselect:(bool)arg1;
- (void)setMultiselectBackgroundColor:(id)arg1;
- (void)setNoneStyleBackgroundColor:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionTintColor:(id)arg1;

@end
