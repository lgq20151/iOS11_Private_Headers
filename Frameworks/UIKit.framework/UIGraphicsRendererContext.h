/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGraphicsRendererContext : NSObject {
    bool  ___createsImages;
    struct CGContext { } * _backingContext;
    UIGraphicsRendererFormat * _format;
}

@property (nonatomic, readonly) struct CGContext { }*CGContext;
@property (nonatomic) bool __createsImages;
@property (nonatomic, readonly) UIGraphicsRendererFormat *format;

- (void).cxx_destruct;
- (struct CGContext { }*)CGContext;
- (bool)__createsImages;
- (void)clipToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blendMode:(int)arg2;
- (id)format;
- (id)initWithCGContext:(struct CGContext { }*)arg1 format:(id)arg2;
- (void)set__createsImages:(bool)arg1;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blendMode:(int)arg2;

@end
