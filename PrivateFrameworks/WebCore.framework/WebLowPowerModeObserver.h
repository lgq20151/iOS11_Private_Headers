/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebLowPowerModeObserver : NSObject {
    bool  _isLowPowerModeEnabled;
    struct LowPowerModeNotifier { struct RetainPtr<WebLowPowerModeObserver> { void *x_1_1_1; } x1; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x2; } * _notifier;
}

@property (nonatomic, readonly) bool isLowPowerModeEnabled;
@property (nonatomic) struct LowPowerModeNotifier { struct RetainPtr<WebLowPowerModeObserver> { void *x_1_1_1; } x1; /* Warning: unhandled struct encoding: '{Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase' */ struct x2; }*notifier; /* unknown property attribute:  std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase}}}}} */

- (void)_didReceiveLowPowerModeChange;
- (void)dealloc;
- (id)initWithNotifier:(struct LowPowerModeNotifier { struct RetainPtr<WebLowPowerModeObserver> { void *x_1_1_1; } x1; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x2; }*)arg1;
- (bool)isLowPowerModeEnabled;
- (struct LowPowerModeNotifier { struct RetainPtr<WebLowPowerModeObserver> { void *x_1_1_1; } x1; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x2; }*)notifier;
- (void)setNotifier:(struct LowPowerModeNotifier { struct RetainPtr<WebLowPowerModeObserver> { void *x_1_1_1; } x1; struct Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase {} x2; }*)arg1;

@end
