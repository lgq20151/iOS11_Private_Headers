/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell {
    TIKeyboardCandidate * _candidate;
    UILabel * _label;
    long long  _leftBorderEdge;
    UIKeyboardCandidatePocketShadow * _leftHardBorder;
    long long  _rightBorderEdge;
    UIKeyboardCandidatePocketShadow * _rightHardBorder;
    UILabel * _secondaryLabel;
    UIKBThemedView * _themedView;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 8; 
        unsigned int padding : 8; 
    }  _visualStyling;
}

@property (nonatomic, copy) TIKeyboardCandidate *candidate;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) long long leftBorderEdge;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *leftHardBorder;
@property (nonatomic) long long rightBorderEdge;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *rightHardBorder;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIKBThemedView *themedView;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; } visualStyling;

+ (id)labelFontForText:(id)arg1;
+ (bool)needsThemedView;
+ (id)secondaryLabelFont;
+ (double)systemFontSize;
+ (double)widthForCandidate:(id)arg1 visualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg2;

- (void).cxx_destruct;
- (bool)_canDrawContent;
- (void)_setRenderConfig:(id)arg1;
- (void)_updateBorders;
- (id)candidate;
- (void)didMoveToWindow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (long long)leftBorderEdge;
- (id)leftHardBorder;
- (void)reloadData;
- (long long)rightBorderEdge;
- (id)rightHardBorder;
- (id)secondaryLabel;
- (void)setCandidate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLeftBorderEdge:(long long)arg1;
- (void)setLeftHardBorder:(id)arg1;
- (void)setRightBorderEdge:(long long)arg1;
- (void)setRightHardBorder:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setThemedView:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (id)textLabelColor;
- (id)themedView;
- (void)updateLabels;
- (void)updateThemedView;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })visualStyling;

@end
