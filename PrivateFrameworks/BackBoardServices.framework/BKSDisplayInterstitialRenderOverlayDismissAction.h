/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <BKSDisplayRenderOverlayDismissAction, BSDescriptionProviding> {
    BKSDisplayRenderOverlayDescriptor * _overlayDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismiss;
- (void)dismissWithAnimation:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)overlayDescriptor;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
