/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchBarTextFieldLabel : UITextFieldLabel {
    bool  _ignoresGeometryChanges;
}

@property (nonatomic) bool ignoresGeometryChanges;

+ (id)_defaultAttributes;

- (bool)ignoresGeometryChanges;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIgnoresGeometryChanges:(bool)arg1;

@end
