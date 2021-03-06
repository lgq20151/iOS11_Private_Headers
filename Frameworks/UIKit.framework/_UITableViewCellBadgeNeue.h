/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewCellBadgeNeue : UIView {
    UILabel * _badgeTextLabel;
    bool  _selected;
}

@property (nonatomic, retain) UILabel *badgeTextLabel;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (void)_sizeToFit;
- (id)badgeTextLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (double)minHeight;
- (void)setBadgeTextLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end
