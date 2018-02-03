/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCookieObserverAdapter : NSObject {
    struct CookieStorageObserver { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct RetainPtr<NSHTTPCookieStorage> { void *x_2_1_1; } x2; bool x3; struct RetainPtr<WebCookieObserverAdapter> { void *x_4_1_1; } x4; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x5; } * observer;
}

- (void)cookiesChangedNotificationHandler:(id)arg1;
- (id)initWithObserver:(struct CookieStorageObserver { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct RetainPtr<NSHTTPCookieStorage> { void *x_2_1_1; } x2; bool x3; struct RetainPtr<WebCookieObserverAdapter> { void *x_4_1_1; } x4; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x5; }*)arg1;

@end
