/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIProgressiveBlurPresentationAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    unsigned long long  _curve;
}

@property (nonatomic, readonly) unsigned long long curve;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (unsigned long long)curve;
- (id)initWithCurve:(unsigned long long)arg1;

@end
