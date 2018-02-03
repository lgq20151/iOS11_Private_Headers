/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDraggingImageComponent : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    bool  _hidesImage;
    bool  _ignoresAccessibilityFilters;
    UIImage * _image;
    NSString * _key;
    UIView * _view;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) bool hidesImage;
@property (nonatomic, readonly) bool ignoresAccessibilityFilters;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_initWithNoImageAndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 key:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)hidesImage;
- (bool)ignoresAccessibilityFilters;
- (id)image;
- (id)initHidingDragImage;
- (id)initWithImage:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ignoreAccessibilityFilters:(bool)arg3 key:(id)arg4;
- (id)initWithImage:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 key:(id)arg3;
- (id)initWithView:(id)arg1;
- (id)key;
- (id)view;

@end
