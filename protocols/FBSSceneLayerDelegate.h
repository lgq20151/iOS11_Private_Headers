/* made by EzioChiu.
 */

@protocol FBSSceneLayerDelegate <NSObject>

@required

- (void)sceneLayerDidInvalidate:(FBSSceneLayer *)arg1;
- (void)sceneLayerDidUpdate:(FBSSceneLayer *)arg1;
- (bool)sceneLayerShouldObserveUpdates:(FBSSceneLayer *)arg1;

@end
