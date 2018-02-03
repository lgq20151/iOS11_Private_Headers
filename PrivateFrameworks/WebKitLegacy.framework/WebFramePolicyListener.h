/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFramePolicyListener : NSObject <WebFormSubmissionListener, WebPolicyDecisionListener> {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _appLinkURL;
    struct RefPtr<WebCore::Frame> { 
        struct Frame {} *m_ptr; 
    }  _frame;
    struct Function<void (WebCore::PolicyAction)>="m_callableWrapper"{unique_ptr<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase> >="__ptr_"{__compressed_pair<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase> >="__first_"^{CallableWrapperBase {}  _policyFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)continue;
- (void)dealloc;
- (void)download;
- (void)ignore;
- (id)initWithFrame:(struct Frame { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; struct MainFrame {} *x4; struct Page {} *x5; struct RefPtr<WebCore::Settings> { struct Settings {} *x_6_1_1; } x6; struct FrameTree { struct Frame {} *x_7_1_1; struct Frame {} *x_7_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_7_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_7_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_7_1_5; struct Frame {} *x_7_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_7_1_7; struct Frame {} *x_7_1_8; unsigned int x_7_1_9; } x7; }*)arg1 policyFunction:(struct Function<void (WebCore::PolicyAction)>={unique_ptr<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase> >=^{CallableWrapperBase {}*)arg2;
- (id)initWithFrame:(struct Frame { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; struct MainFrame {} *x4; struct Page {} *x5; struct RefPtr<WebCore::Settings> { struct Settings {} *x_6_1_1; } x6; struct FrameTree { struct Frame {} *x_7_1_1; struct Frame {} *x_7_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_7_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_7_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_7_1_5; struct Frame {} *x_7_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_7_1_7; struct Frame {} *x_7_1_8; unsigned int x_7_1_9; } x7; }*)arg1 policyFunction:(struct Function<void (WebCore::PolicyAction)>={unique_ptr<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (WebCore::PolicyAction)>::CallableWrapperBase> >=^{CallableWrapperBase {}*)arg2 appLinkURL:(id)arg3;
- (void)invalidate;
- (void)receivedPolicyDecision:(int)arg1;
- (void)use;

@end
