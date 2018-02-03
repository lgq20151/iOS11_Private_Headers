/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRefreshControlDefaultContentView : _UIRefreshControlContentView <CAAnimationDelegate> {
    bool  _animationsAreValid;
    bool  _areAnimationsValid;
    UIImageView * _arrow;
    UIImageView * _imageView;
    NSMutableDictionary * _snappingArrowFromValues;
    NSMutableDictionary * _snappingImageFromValues;
    NSMutableDictionary * _snappingTextFromValues;
    UIActivityIndicatorView * _spinner;
    UILabel * _textLabel;
}

@property (nonatomic) bool areAnimationsValid;
@property (nonatomic, readonly) UIImageView *arrow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (double)_currentTimeOffset;
- (void)_fadeInMagic;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)_refreshingMagic;
- (id)_regenerateArrow;
- (id)_regenerateCircle;
- (id)_revealingArrowAnimations;
- (id)_revealingImageAnimations;
- (void)_revealingMagic;
- (id)_revealingTextAnimations;
- (void)_snappingMagic;
- (double)_snappingTimeOffset;
- (void)_spinOutMagic;
- (void)_updateTimeOffsetOfRelevantLayers;
- (bool)areAnimationsValid;
- (id)arrow;
- (id)attributedTitle;
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maximumSnappingHeight;
- (double)minimumSnappingHeight;
- (void)refreshControlInvalidatedSnappingHeight;
- (void)setAreAnimationsValid:(bool)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spinner;
- (long long)style;
- (id)textLabel;
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;

@end
