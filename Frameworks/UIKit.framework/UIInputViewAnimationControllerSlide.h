/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController> {
    int  _slide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)initWithSlide:(int)arg1;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)placementForSlideStart:(bool)arg1;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;

@end
