/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton> {
    SEL  _action;
    long long  _style;
    id  _target;
}

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;

@end
