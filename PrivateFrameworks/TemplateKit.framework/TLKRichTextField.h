/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKRichTextField : TLKStackView <NUIContainerStackViewDelegate, TLKObservable> {
    TLKIconsView * _iconView;
    TLKRichText * _richText;
    TLKObserver * _richTextObserver;
    TLKRoundedCornerLabels * _roundedCornerLabels;
    TLKStarsView * _starRatingView;
    TLKEmojiableVibrantLabel * _textLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TLKIconsView *iconView;
@property (retain) TLKRichText *richText;
@property (retain) TLKObserver *richTextObserver;
@property (retain) TLKRoundedCornerLabels *roundedCornerLabels;
@property (retain) TLKStarsView *starRatingView;
@property (readonly) Class superclass;
@property (retain) TLKEmojiableVibrantLabel *textLabel;

+ (id)font;

- (void).cxx_destruct;
- (id)attributedString;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dealloc;
- (void)disableObserver:(bool)arg1;
- (void)disableUnbatchedUpdates;
- (id)iconView;
- (id)init;
- (void)makeTertiary;
- (id)observableProperties;
- (id)richText;
- (id)richTextObserver;
- (id)roundedCornerLabels;
- (void)setFont:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setRichText:(id)arg1;
- (void)setRichTextObserver:(id)arg1;
- (void)setRoundedCornerLabels:(id)arg1;
- (void)setStarRatingView:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTextLabel:(id)arg1;
- (id)starRatingView;
- (id)textLabel;
- (void)updateIcons:(id)arg1;
- (void)updateRoundedCornerLabels:(id)arg1;
- (void)updateStarRating:(id)arg1;
- (void)updateWithRichText:(id)arg1;

@end