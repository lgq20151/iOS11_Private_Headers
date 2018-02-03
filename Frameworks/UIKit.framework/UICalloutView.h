/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICalloutView : UIControl {
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        int position; 
        struct CGPoint { 
            double x; 
            double y; 
        } desiredPoint; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } desiredBounds; 
    }  _anchor;
    UIImageView * _bottomAnchor;
    id  _delegate;
    NSMutableArray * _fadeInViews;
    NSMutableArray * _fadeOutViews;
    struct { 
        unsigned int animated : 1; 
        unsigned int didMoveCalled : 1; 
        unsigned int hasPendingAnimatedLayout : 1; 
        unsigned int canAnchorFromBottom : 1; 
        unsigned int reserved : 28; 
    }  _flags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSTimer * _layoutAnimationTimer;
    UIImageView * _leftBackground;
    UIImageView * _leftCap;
    UIView * _leftView;
    double  _maximumWidth;
    UIImageView * _rightBackground;
    UIImageView * _rightCap;
    UIView * _rightView;
    UILabel * _subtitle;
    UILabel * _temporary;
    UILabel * _title;
    UIImageView * _topAnchor;
}

@property (nonatomic, readonly) double UICalloutViewButtonPadding;
@property (nonatomic, readonly) double UICalloutViewCapHeight;
@property (nonatomic, readonly) double UICalloutViewCapPaddingTop;
@property (nonatomic, readonly) double UICalloutViewHorizontalMargin;
@property (nonatomic, readonly) double UICalloutViewHorizontalPadding;
@property (nonatomic, readonly) double UICalloutViewLayoutDuration;
@property (nonatomic, readonly) double UICalloutViewMinimumWidth;
@property (nonatomic, readonly) double UICalloutViewVerticalMargin;
@property (nonatomic) bool canAnchorFromBottom;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) double maximumWidth;
@property (nonatomic, retain) UIView *rightView;
@property (nonatomic) long long subtitleLineBreakMode;
@property (nonatomic) long long subtitleTextAlignment;
@property (nonatomic) long long titleLineBreakMode;
@property (nonatomic) long long titleTextAlignment;

+ (id)_backgroundImage;
+ (id)_bottomAnchorImage;
+ (id)_leftCapImage;
+ (id)_rightCapImage;
+ (id)_topAnchorImage;
+ (double)defaultHeight;
+ (id)sharedCalloutView;

- (void).cxx_destruct;
- (double)UICalloutViewButtonPadding;
- (double)UICalloutViewCapHeight;
- (double)UICalloutViewCapPaddingTop;
- (double)UICalloutViewHorizontalMargin;
- (double)UICalloutViewHorizontalPadding;
- (double)UICalloutViewLayoutDuration;
- (double)UICalloutViewMinimumWidth;
- (double)UICalloutViewVerticalMargin;
- (void)_fadeViewsIn:(bool)arg1;
- (void)_layoutAnimation;
- (void)_layoutSubviews:(bool)arg1;
- (void)_markDidMoveCalled;
- (void)_scheduleLayoutAnimation;
- (void)_scheduleViewToFadeIn:(id)arg1;
- (void)_scheduleViewToFadeOut:(id)arg1;
- (void)_setLayoutAnimationTimer:(id)arg1;
- (void)_setLeftView:(id)arg1;
- (void)_setOriginForScale:(double)arg1;
- (void)_setRightView:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (bool)canAnchorFromBottom;
- (void)completeBounceAnimation;
- (void)dealloc;
- (id)delegate;
- (void)fadeOutWithDuration:(double)arg1;
- (void)getActualAnchorPoint:(struct CGPoint { double x1; double x2; }*)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 position:(int*)arg3 forDesiredAnchorPoint:(struct CGPoint { double x1; double x2; })arg4 boundaryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftView;
- (double)maximumWidth;
- (struct CGPoint { double x1; double x2; })offset;
- (void)removeTarget:(id)arg1;
- (id)rightView;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 boundaryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animate:(bool)arg3;
- (void)setCanAnchorFromBottom:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)setMaximumWidth:(double)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setSubtitleLineBreakMode:(long long)arg1;
- (void)setSubtitleTextAlignment:(long long)arg1;
- (void)setTemporaryTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLineBreakMode:(long long)arg1;
- (void)setTitleTextAlignment:(long long)arg1;
- (id)subtitle;
- (long long)subtitleLineBreakMode;
- (long long)subtitleTextAlignment;
- (id)temporaryTitle;
- (id)title;
- (long long)titleLineBreakMode;
- (long long)titleTextAlignment;

@end
