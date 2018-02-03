/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextBlockLayoutHelper : NSObject {
    double  _bBorder;
    double  _bMargin;
    double  _bPadding;
    NSTextTableBlock * _block;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundsRect;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _charRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _glyphRange;
    double  _height;
    double  _lBorder;
    double  _lMargin;
    double  _lPadding;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutRect;
    double  _rBorder;
    double  _rMargin;
    double  _rPadding;
    double  _tBorder;
    double  _tMargin;
    double  _tPadding;
    double  _width;
}

@property (readonly) NSTextTableBlock *block;

- (id)block;
- (void)dealloc;
- (id)description;
- (id)initWithTextBlock:(id)arg1 charIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(bool)arg6;
- (id)initWithTextBlock:(id)arg1 charRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 glyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 layoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 boundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 containerWidth:(double)arg6 allowMargins:(bool)arg7 collapseBorders:(bool)arg8 allowPadding:(bool)arg9;
- (id)initWithTextBlock:(id)arg1 charRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(bool)arg6;
- (id)initWithTextTable:(id)arg1 charIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(bool)arg6;

@end
