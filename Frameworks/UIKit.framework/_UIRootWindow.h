/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRootWindow : UIWindow {
    double  _scale;
}

- (struct { id x1; int x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; })_bindingDescription;
- (void)_configureContextOptions:(id)arg1;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (id)_context;
- (bool)_isConstrainedByScreenJail;
- (bool)_isWindowServerHostingManaged;
- (void)_noteScreenDidChangeMode:(id)arg1;
- (bool)_touchesInsideShouldHideCalloutBar;
- (bool)_transformLayerIncludesScreenRotation;
- (bool)_wantsSceneAssociation;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)setScreen:(id)arg1;

@end
