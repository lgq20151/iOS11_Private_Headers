/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarIndicatorItem : _UIStatusBarItem {
    NSArray * _currentImageNamePrefixes;
    _UIStatusBarImageView * _imageView;
}

@property (nonatomic, copy) NSArray *currentImageNamePrefixes;
@property (nonatomic, readonly) _UIStatusBarImageView *imageView;
@property (nonatomic, readonly) NSString *indicatorEntryKey;
@property (nonatomic, readonly) bool isTemplateImage;

+ (id)indicatorDisplayIdentifier;

- (void).cxx_destruct;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)currentImageNamePrefixes;
- (id)dependentEntryKeys;
- (id)imageForUpdate:(id)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)imageView;
- (id)indicatorEntryKey;
- (id)init;
- (bool)isTemplateImage;
- (void)setCurrentImageNamePrefixes:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
