/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKLayoutContainerView : UIView {
    <EKLayoutContainerViewDelegate> * _delegate;
}

@property (nonatomic) <EKLayoutContainerViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;

@end