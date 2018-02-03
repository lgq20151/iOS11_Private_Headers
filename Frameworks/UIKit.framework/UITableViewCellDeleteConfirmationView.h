/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellDeleteConfirmationView : UIView {
    _UITableViewCellActionButton * _accessoryView;
    NSArray * _actionButtons;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    double  _cornerRadius;
    _UITableViewCellActionButton * _deleteView;
    int  _sectionLocation;
    double  _visibleHeightRatio;
    double  _visibleWidth;
}

@property (nonatomic, readonly) _UITableViewCellActionButton *accessoryView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) _UITableViewCellActionButton *deleteView;
@property (nonatomic) int sectionLocation;
@property (nonatomic) double visibleHeightRatio;
@property (nonatomic) double visibleWidth;

- (void).cxx_destruct;
- (id)accessoryView;
- (struct CGSize { double x1; double x2; })contentSize;
- (double)cornerRadius;
- (void)dealloc;
- (id)deleteView;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 actionButtons:(id)arg2 contentSize:(struct CGSize { double x1; double x2; })arg3;
- (int)sectionLocation;
- (void)setCornerRadius:(double)arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setVisibleHeightRatio:(double)arg1;
- (void)setVisibleWidth:(double)arg1;
- (void)updateBounds;
- (void)updateMaskView:(bool)arg1;
- (double)visibleHeightRatio;
- (double)visibleWidth;

@end
