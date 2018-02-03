/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCollectionView : UICollectionView {
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    UIResponder * _hitTestResponder;
}

@property (readonly, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;
@property (nonatomic) UIResponder *hitTestResponder;

- (double)_currentScreenScale;
- (bool)_shouldReverseLayoutDirection;
- (id)closestCellForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)emojiGraphicsTraits;
- (id)hitTestResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3;
- (void)layoutSubviews;
- (void)setHitTestResponder:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
