/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVInterfaceFactory : NSObject <TVInterfaceCreating> {
    _TVControllerFactory * _controllerFactory;
    NSMutableDictionary * _controllerTransitionCreatorsByKey;
    <TVInterfaceCreating> * _extendedInterfaceCreator;
    struct { 
        unsigned int respondsToViewForElement : 1; 
        unsigned int respondsToViewControllerForElement : 1; 
        unsigned int respondsToURLForResource : 1; 
        unsigned int respondsToImageForResource : 1; 
        unsigned int respondsToCollectionViewCellClassForElement : 1; 
        unsigned int respondsToImageProxyForElement : 1; 
        unsigned int respondsToStyleSheetURLForTemplate : 1; 
    }  _extenderFlags;
    _TVLockupFactory * _lockupFactory;
    _TVTemplateFactory * _templateFactory;
    NSMutableDictionary * _viewControllerCreatorsByKey;
    NSMutableDictionary * _viewCreatorsByKey;
    _TVViewFactory * _viewFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <TVInterfaceCreating> *extendedInterfaceCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_URLForResource:(id)arg1 bundle:(id)arg2;
+ (id)_tvmlResourceMap;
+ (void)initialize;
+ (id)sharedInterfaceFactory;

- (void).cxx_destruct;
- (id)URLForResource:(id)arg1;
- (id)_controllerTransitionFromElement:(id)arg1 toElement:(id)arg2 forNavigationControllerOperation:(long long)arg3 relativeToFrom:(bool)arg4;
- (id)_getImageFromURLorBundle:(id)arg1;
- (id)_imageProxyForElement:(id)arg1;
- (void)_registerControllerTransitioningCreator:(id /* block */)arg1 withType:(unsigned long long)arg2;
- (void)_registerViewControllerCreator:(id /* block */)arg1 withType:(unsigned long long)arg2;
- (void)_registerViewCreator:(id /* block */)arg1 withType:(unsigned long long)arg2;
- (void)_setViewProxy:(id)arg1 forViewElement:(id)arg2;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2;
- (id)_viewForElement:(id)arg1;
- (id)_viewFromElement:(id)arg1 existingView:(id)arg2;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)extendedInterfaceCreator;
- (id)imageForResource:(id)arg1;
- (id)init;
- (void)setExtendedInterfaceCreator:(id)arg1;
- (void)setup;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;

@end
