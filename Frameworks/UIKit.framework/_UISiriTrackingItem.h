/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISiriTrackingItem : NSObject {
    UIImageView * _animatedView;
    UIImage * _capturedGlyphImage;
    bool  _deleted;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _glyphRange;
    bool  _isABigReplacement;
    bool  _isASmallReplacement;
    bool  _isAnIntroduction;
    double  _offscreenXLocation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    UIColor * _textColor;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
}

@property (nonatomic, retain) UIImageView *animatedView;
@property (nonatomic, retain) UIImage *capturedGlyphImage;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } glyphRange;
@property (nonatomic) bool isABigReplacement;
@property (nonatomic) bool isASmallReplacement;
@property (nonatomic) bool isAnIntroduction;
@property (nonatomic) double offscreenXLocation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;

- (void).cxx_destruct;
- (void)animateOut;
- (id)animatedView;
- (void)captureGlyphsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 containerOrigin:(struct CGPoint { double x1; double x2; })arg2 fromLayoutManager:(id)arg3;
- (id)capturedGlyphImage;
- (void)dealloc;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRange;
- (id)init;
- (bool)isABigReplacement;
- (bool)isASmallReplacement;
- (bool)isAnIntroduction;
- (double)offscreenXLocation;
- (void)setAnimatedView:(id)arg1;
- (void)setCapturedGlyphImage:(id)arg1;
- (void)setGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIsABigReplacement:(bool)arg1;
- (void)setIsASmallReplacement:(bool)arg1;
- (void)setIsAnIntroduction:(bool)arg1;
- (void)setOffscreenXLocation:(double)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (id)textColor;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;

@end
