/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate> {
    CIContext * _CIContext;
    bool  _adjustsImageSizeForAccessibilityContentSizeCategory;
    double  _animationDuration;
    NSArray * _animationImages;
    long long  _animationRepeatCount;
    long long  _defaultRenderingMode;
    UIImage * _displayedHighlightedImage;
    UIImage * _displayedImage;
    int  _drawMode;
    bool  _highlighted;
    NSArray * _highlightedAnimationImages;
    UIImage * _highlightedImage;
    UIImage * _image;
    bool  _masksTemplateImages;
    unsigned long long  _templateImageRenderingEffects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;

@end
