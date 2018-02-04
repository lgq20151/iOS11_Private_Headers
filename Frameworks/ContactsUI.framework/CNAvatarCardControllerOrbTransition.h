/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardControllerOrbTransition : NSObject <_UIPreviewInteractionViewControllerTransition> {
    CNAvatarCardViewController * _cardViewController;
    <CNAvatarCardControllerOrbTransitionDelegate> * _delegate;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _endActionListTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _endHeaderTransform;
    CNContactOrbHeaderView * _headerView;
    double  _highlightViewToAlpha;
    UIView * _highlightedView;
    bool  _isDismissing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
}

@property (nonatomic) CNAvatarCardViewController *cardViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarCardControllerOrbTransitionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } endActionListTransform;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } endHeaderTransform;
@property (readonly) unsigned long long hash;
@property (nonatomic) CNContactOrbHeaderView *headerView;
@property (nonatomic) double highlightViewToAlpha;
@property (nonatomic) UIView *highlightedView;
@property (nonatomic) bool isDismissing;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectInContainerView:(id)arg1;
- (id)cardViewController;
- (id)delegate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })endActionListTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })endHeaderTransform;
- (id)headerView;
- (double)highlightViewToAlpha;
- (id)highlightedView;
- (id)initWithCardViewController:(id)arg1 headerView:(id)arg2 sourceView:(id)arg3 highlightedView:(id)arg4 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 isDismissing:(bool)arg6;
- (bool)isDismissing;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performWithCustomAnimator:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)setCardViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndActionListTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setEndHeaderTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHighlightViewToAlpha:(double)arg1;
- (void)setHighlightedView:(id)arg1;
- (void)setIsDismissing:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setupTransitionFromView:(id)arg1 toView:(id)arg2 withContainerView:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (void)transitionDidEnd:(bool)arg1;

@end