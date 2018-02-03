/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate> {
    struct TextTrackRepresentationCocoa { int (**x1)(); struct TextTrackRepresentationClient {} *x2; struct RetainPtr<CALayer> { void *x_3_1_1; } x3; struct RetainPtr<WebCoreTextTrackRepresentationCocoaHelper> { void *x_4_1_1; } x4; } * _parent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct TextTrackRepresentationCocoa { int (**x1)(); struct TextTrackRepresentationClient {} *x2; struct RetainPtr<CALayer> { void *x_3_1_1; } x3; struct RetainPtr<WebCoreTextTrackRepresentationCocoaHelper> { void *x_4_1_1; } x4; }*parent;
@property (readonly) Class superclass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithParent:(struct TextTrackRepresentationCocoa { int (**x1)(); struct TextTrackRepresentationClient {} *x2; struct RetainPtr<CALayer> { void *x_3_1_1; } x3; struct RetainPtr<WebCoreTextTrackRepresentationCocoaHelper> { void *x_4_1_1; } x4; }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct TextTrackRepresentationCocoa { int (**x1)(); struct TextTrackRepresentationClient {} *x2; struct RetainPtr<CALayer> { void *x_3_1_1; } x3; struct RetainPtr<WebCoreTextTrackRepresentationCocoaHelper> { void *x_4_1_1; } x4; }*)parent;
- (void)setParent:(struct TextTrackRepresentationCocoa { int (**x1)(); struct TextTrackRepresentationClient {} *x2; struct RetainPtr<CALayer> { void *x_3_1_1; } x3; struct RetainPtr<WebCoreTextTrackRepresentationCocoaHelper> { void *x_4_1_1; } x4; }*)arg1;

@end
