/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKAuxilliaryTextView : TLKView <NUIContainerStackViewDelegate> {
    TLKVibrantLabel * _bottomLabel;
    TLKFormattedText * _bottomText;
    TLKVibrantLabel * _middleLabel;
    TLKFormattedText * _middleText;
    TLKStackView * _stackView;
    TLKVibrantLabel * _topLabel;
    TLKFormattedText * _topText;
}

@property (retain) TLKVibrantLabel *bottomLabel;
@property (retain) TLKFormattedText *bottomText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TLKVibrantLabel *middleLabel;
@property (retain) TLKFormattedText *middleText;
@property (retain) TLKStackView *stackView;
@property (readonly) Class superclass;
@property (retain) TLKVibrantLabel *topLabel;
@property (retain) TLKFormattedText *topText;

+ (bool)formattedTextHasTextContent:(id)arg1;
+ (id)largeMiddleTextFont;

- (void).cxx_destruct;
- (id)bottomLabel;
- (id)bottomLabelFont;
- (id)bottomLabelString;
- (id)bottomText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)init;
- (id)middleLabel;
- (id)middleLabelFont;
- (id)middleLabelString;
- (id)middleText;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)setBottomLabel:(id)arg1;
- (void)setBottomText:(id)arg1;
- (void)setMiddleLabel:(id)arg1;
- (void)setMiddleText:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setTopText:(id)arg1;
- (id)stackView;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)topLabel;
- (id)topLabelString;
- (id)topText;

@end
