/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {
    UIBarButtonItem * _anchorBarButtonItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _anchorRect;
    UIView * _anchorView;
    NSArray * _passthroughViews;
    unsigned long long  _permittedArrowDirections;
    UIPopoverController * _popoverController;
}

@property (setter=_setAnchorBarButtonItem:, nonatomic, retain) UIBarButtonItem *_anchorBarButtonItem;
@property (setter=_setAnchorRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _anchorRect;
@property (setter=_setAnchorView:, nonatomic, retain) UIView *_anchorView;
@property (setter=_setPassthroughViews:, nonatomic, copy) NSArray *_passthroughViews;
@property (setter=_setPermittedArrowDirections:, nonatomic) unsigned long long _permittedArrowDirections;
@property (nonatomic, readonly) UIPopoverController *popoverController;

- (void).cxx_destruct;
- (id)_anchorBarButtonItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_anchorRect;
- (id)_anchorView;
- (id)_passthroughViews;
- (unsigned long long)_permittedArrowDirections;
- (void)_setAnchorBarButtonItem:(id)arg1;
- (void)_setAnchorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setAnchorView:(id)arg1;
- (void)_setPassthroughViews:(id)arg1;
- (void)_setPermittedArrowDirections:(unsigned long long)arg1;
- (void)perform;
- (id)popoverController;

@end
