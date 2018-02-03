/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImageAsset : NSObject <NSSecureCoding> {
    CUINamedLayerStack * __layerStack;
    struct { 
        unsigned int hasRegisteredImages : 1; 
        unsigned int supportsBlockGeneration : 1; 
        unsigned int disconnectedFromAssetManager : 1; 
    }  _assetFlags;
    _UIAssetManager * _assetManager;
    NSString * _assetName;
    bool  _cacheContents;
    NSBundle * _containingBundle;
    id /* block */  _creationBlock;
    UITraitCollection * _defaultTraitCollection;
}

@property (nonatomic, readonly) _UIAssetManager *_assetManager;
@property (nonatomic, retain) CUINamedLayerStack *_layerStack;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic, copy) id /* block */ creationBlock;

+ (id)_assetGeneratingImagesWithDrawingBlock:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_assetManager;
- (void)_clearResolvedImageResources;
- (bool)_containsImagesInPath:(id)arg1;
- (id)_defaultTraitCollection;
- (void)_disconnectFromAssetManager;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)_layerStack;
- (id)_mutableCatalog;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 cache:(bool)arg3;
- (id)_updateAssetFromBlockGenerationWithTraitCollection:(id)arg1 resolvedCatalogImage:(id)arg2;
- (id)assetName;
- (id /* block */)creationBlock;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (void)setAssetName:(id)arg1;
- (void)setCreationBlock:(id /* block */)arg1;
- (void)set_layerStack:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;

@end
