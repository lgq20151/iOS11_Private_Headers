/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {
    UIView * _wrappedView;
    UIView * _wrappedViewContainer;
    struct CGSize { 
        double width; 
        double height; 
    }  _wrappedViewSize;
}

@property (nonatomic, retain) UIView *wrappedView;

- (void).cxx_destruct;
- (id)_anyDateLabel;
- (void)_setIsCenterCell:(bool)arg1 shouldModifyAlphaOfView:(bool)arg2;
- (void)_updateWrappedView;
- (void)_updateWrappedViewFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWrappedView:(id)arg1;
- (id)wrappedView;

@end
