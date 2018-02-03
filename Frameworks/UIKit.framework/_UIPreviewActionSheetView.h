/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    NSArray * _actions;
    UILongPressGestureRecognizer * _captureTouchesRecognizer;
    id /* block */  _completionHandler;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <_UIPreviewActionSheetViewDelegate> * _delegate;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) UILongPressGestureRecognizer *captureTouchesRecognizer;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPreviewActionSheetViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_performActionForPreviewAction:(id)arg1 interfaceAction:(id)arg2;
- (void)_setupViewHierarchy;
- (id)actions;
- (id)captureTouchesRecognizer;
- (id /* block */)completionHandler;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 title:(id)arg2 items:(id)arg3 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (void)setActions:(id)arg1;
- (void)setCaptureTouchesRecognizer:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
