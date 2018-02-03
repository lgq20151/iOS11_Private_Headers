/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface __UISceneSubstrate : NSObject <_UIContextBinding> {
    FBSScene * _scene;
    NSMapTable * _sceneLayerTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)attachContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)scene;

@end
