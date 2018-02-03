/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerLayer : CALayer {
    struct RetainPtr<WebAVPlayerController> { 
        void *m_ptr; 
    }  _avPlayerController;
    struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> { 
        struct WebVideoFullscreenInterfaceAVKit {} *m_ptr; 
    }  _fullscreenInterface;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _modelVideoLayerFrame;
    NSDictionary * _pixelBufferAttributes;
    bool  _readyForDisplay;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoDimensions;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _videoGravity;
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    }  _videoSublayer;
}

@property (nonatomic) struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Ref<WebCore::WebPlaybackSessionInterfaceAVKit> { struct WebPlaybackSessionInterfaceAVKit {} *x_4_1_1; } x4; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_5_1_1; } x5; struct RetainPtr<AVPlayerViewController> { void *x_6_1_1; } x6; struct WebVideoFullscreenModel {} *x7; struct WebVideoFullscreenChangeObserver {} *x8; struct RetainPtr<UIWindow> { void *x_9_1_1; } x9; struct RetainPtr<UIViewController> { void *x_10_1_1; } x10; struct RetainPtr<UIView> { void *x_11_1_1; } x11; struct RetainPtr<UIWindow> { void *x_12_1_1; } x12; struct RetainPtr<WebAVPlayerLayerView> { void *x_13_1_1; } x13; unsigned int x14; /* Warning: unhandled struct encoding: '{Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase' */ struct x15; }*fullscreenInterface; /* unknown property attribute:  std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase}}}}{Timer<WebCore::WebVideoFullscreenInterfaceAVKit>=^^?{Ref<WTF::RunLoop>=^{RunLoop}}{RetainPtr<__CFRunLoopTimer *>=^v}^{WebVideoFullscreenInterfaceAVKit}}BBBBBBBB} */
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } modelVideoLayerFrame;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (getter=isReadyForDisplay, nonatomic) bool readyForDisplay;
@property struct CGSize { double x1; double x2; } videoDimensions;
@property (nonatomic, retain) NSString *videoGravity;
@property (nonatomic, retain) CALayer *videoSublayer;

+ (id)keyPathsForValuesAffectingVideoRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Ref<WebCore::WebPlaybackSessionInterfaceAVKit> { struct WebPlaybackSessionInterfaceAVKit {} *x_4_1_1; } x4; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_5_1_1; } x5; struct RetainPtr<AVPlayerViewController> { void *x_6_1_1; } x6; struct WebVideoFullscreenModel {} *x7; struct WebVideoFullscreenChangeObserver {} *x8; struct RetainPtr<UIWindow> { void *x_9_1_1; } x9; struct RetainPtr<UIViewController> { void *x_10_1_1; } x10; struct RetainPtr<UIView> { void *x_11_1_1; } x11; struct RetainPtr<UIWindow> { void *x_12_1_1; } x12; struct RetainPtr<WebAVPlayerLayerView> { void *x_13_1_1; } x13; unsigned int x14; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x15; }*)fullscreenInterface;
- (id)init;
- (bool)isReadyForDisplay;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })modelVideoLayerFrame;
- (id)pixelBufferAttributes;
- (id)playerController;
- (void)resolveBounds;
- (void)setFullscreenInterface:(struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Ref<WebCore::WebPlaybackSessionInterfaceAVKit> { struct WebPlaybackSessionInterfaceAVKit {} *x_4_1_1; } x4; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_5_1_1; } x5; struct RetainPtr<AVPlayerViewController> { void *x_6_1_1; } x6; struct WebVideoFullscreenModel {} *x7; struct WebVideoFullscreenChangeObserver {} *x8; struct RetainPtr<UIWindow> { void *x_9_1_1; } x9; struct RetainPtr<UIViewController> { void *x_10_1_1; } x10; struct RetainPtr<UIView> { void *x_11_1_1; } x11; struct RetainPtr<UIWindow> { void *x_12_1_1; } x12; struct RetainPtr<WebAVPlayerLayerView> { void *x_13_1_1; } x13; unsigned int x14; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x15; }*)arg1;
- (void)setModelVideoLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setReadyForDisplay:(bool)arg1;
- (void)setVideoDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoSublayer:(id)arg1;
- (struct CGSize { double x1; double x2; })videoDimensions;
- (id)videoGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;
- (id)videoSublayer;

@end
