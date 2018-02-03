/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {
    _UIViewAnimationAttributes * _animationAttributes;
    bool  _animationsEnabled;
    SEL  _implicitAnimationSelector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;

- (void).cxx_destruct;
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 animationsEnabled:(bool)arg3;
- (void)forwardInvocation:(id)arg1;

@end
