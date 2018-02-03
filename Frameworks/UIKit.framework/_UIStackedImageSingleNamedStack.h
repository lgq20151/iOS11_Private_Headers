/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack> {
    _UIStackedImageSingleNamedLayerImage * _layerImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool flatImageContainsCornerRadius;
@property (nonatomic, readonly) struct CGImage { }*flattenedImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIStackedImageSingleNamedLayerImage *layerImage;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id radiosityImage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } radiosityImageScale;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGImage { }*)flattenedImage;
- (id)layerImage;
- (id)layers;
- (id)name;
- (double)scale;
- (void)setLayerImage:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
