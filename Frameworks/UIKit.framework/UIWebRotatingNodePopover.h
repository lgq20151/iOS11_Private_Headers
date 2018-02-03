/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {
    <UIWebRotatingNodePopoverDelegate> * _dismissDelegate;
    bool  _isRotating;
    DOMNode * _node;
    UIPopoverController * _popoverController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _presentationPoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UIWebRotatingNodePopoverDelegate> *dismissDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DOMNode *node;
@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic) struct CGPoint { double x1; double x2; } presentationPoint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (id)dismissDelegate;
- (void)dismissPopoverAnimated:(bool)arg1;
- (id)initWithDOMNode:(id)arg1;
- (id)node;
- (unsigned long long)popoverArrowDirections;
- (id)popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPopoverAnimated:(bool)arg1;
- (struct CGPoint { double x1; double x2; })presentationPoint;
- (void)setDismissDelegate:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPresentationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)willRotate:(id)arg1;

@end
