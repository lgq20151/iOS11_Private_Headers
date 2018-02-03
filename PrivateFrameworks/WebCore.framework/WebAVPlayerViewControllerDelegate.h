/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly> {
    struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> { 
        struct WebVideoFullscreenInterfaceAVKit {} *m_ptr; 
    }  _fullscreenInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Ref<WebCore::WebPlaybackSessionInterfaceAVKit> { struct WebPlaybackSessionInterfaceAVKit {} *x_4_1_1; } x4; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_5_1_1; } x5; struct RetainPtr<AVPlayerViewController> { void *x_6_1_1; } x6; struct WebVideoFullscreenModel {} *x7; struct WebVideoFullscreenChangeObserver {} *x8; struct RetainPtr<UIWindow> { void *x_9_1_1; } x9; struct RetainPtr<UIViewController> { void *x_10_1_1; } x10; struct RetainPtr<UIView> { void *x_11_1_1; } x11; struct RetainPtr<UIWindow> { void *x_12_1_1; } x12; struct RetainPtr<WebAVPlayerLayerView> { void *x_13_1_1; } x13; unsigned int x14; /* Warning: unhandled struct encoding: '{Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase' */ struct x15; }*fullscreenInterface; /* unknown property attribute:  std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase}}}}{Timer<WebCore::WebVideoFullscreenInterfaceAVKit>=^^?{Ref<WTF::RunLoop>=^{RunLoop}}{RetainPtr<__CFRunLoopTimer *>=^v}^{WebVideoFullscreenInterfaceAVKit}}BBBBBBBB} */
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Ref<WebCore::WebPlaybackSessionInterfaceAVKit> { struct WebPlaybackSessionInterfaceAVKit {} *x_4_1_1; } x4; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_5_1_1; } x5; struct RetainPtr<AVPlayerViewController> { void *x_6_1_1; } x6; struct WebVideoFullscreenModel {} *x7; struct WebVideoFullscreenChangeObserver {} *x8; struct RetainPtr<UIWindow> { void *x_9_1_1; } x9; struct RetainPtr<UIViewController> { void *x_10_1_1; } x10; struct RetainPtr<UIView> { void *x_11_1_1; } x11; struct RetainPtr<UIWindow> { void *x_12_1_1; } x12; struct RetainPtr<WebAVPlayerLayerView> { void *x_13_1_1; } x13; unsigned int x14; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x15; }*)fullscreenInterface;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerFailedToStartPictureInPicture:(id)arg1 withError:(id)arg2;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)setFullscreenInterface:(struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Ref<WebCore::WebPlaybackSessionInterfaceAVKit> { struct WebPlaybackSessionInterfaceAVKit {} *x_4_1_1; } x4; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_5_1_1; } x5; struct RetainPtr<AVPlayerViewController> { void *x_6_1_1; } x6; struct WebVideoFullscreenModel {} *x7; struct WebVideoFullscreenChangeObserver {} *x8; struct RetainPtr<UIWindow> { void *x_9_1_1; } x9; struct RetainPtr<UIViewController> { void *x_10_1_1; } x10; struct RetainPtr<UIView> { void *x_11_1_1; } x11; struct RetainPtr<UIWindow> { void *x_12_1_1; } x12; struct RetainPtr<WebAVPlayerLayerView> { void *x_13_1_1; } x13; unsigned int x14; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x15; }*)arg1;

@end
