/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIImageView : UIImageView {
    SFImage * _currentImage;
    unsigned long long  _style;
}

@property (retain) SFImage *currentImage;
@property unsigned long long style;

+ (id)imageViewWithImage:(id)arg1 style:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)currentImage;
- (id)initWithStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setCurrentImage:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (void)updateWithImage:(id)arg1;
- (void)updateWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateWithLoadedImage:(id)arg1 forImage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateWithUIImage:(id)arg1 isTemplate:(bool)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end
