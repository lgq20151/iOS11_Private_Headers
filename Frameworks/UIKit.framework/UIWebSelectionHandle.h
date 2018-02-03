/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectionHandle : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _centerToSelectionPointOffset;
    UIImageView * _dragDotView;
    int  _position;
    UIWebSelectionView * _selectionView;
    int  _textPosition;
    UITouch * _touch;
    struct CGSize { 
        double width; 
        double height; 
    }  _touchToCenterOffset;
}

@property (nonatomic) struct CGSize { double x1; double x2; } centerToSelectionPointOffset;
@property (nonatomic, readonly) bool hasTextPosition;
@property (nonatomic) int position;
@property (nonatomic) int textPosition;
@property (nonatomic, retain) UITouch *touch;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } touchToCenterOffset;

- (struct CGPoint { double x1; double x2; })applyCenterToSelectionPointOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })applyOffsetInDirectionOfHandle:(double)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })applyTouchToCenterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })centerToSelectionPointOffset;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dropActiveTouch;
- (bool)hasTextPosition;
- (id)initWithPosition:(int)arg1 selectionView:(id)arg2;
- (double)offsetInDirectionOfHandleFromFirstPoint:(struct CGPoint { double x1; double x2; })arg1 toSecondPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (int)position;
- (void)setCenterToSelectionPointOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setPosition:(int)arg1;
- (void)setTextPosition:(int)arg1;
- (void)setTouch:(id)arg1;
- (void)snapToCornerOfRange:(id)arg1 atStart:(bool)arg2;
- (struct CGPoint { double x1; double x2; })suggestedHandlePositionOnRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)textPosition;
- (id)touch;
- (struct CGSize { double x1; double x2; })touchToCenterOffset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
