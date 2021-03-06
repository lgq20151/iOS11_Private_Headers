/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPDFView : UIView <UIPDFAnnotationControllerDelegate, UIPDFPageViewDelegate, WKActionSheetAssistantDelegate, WKWebViewContentProvider, _WKWebViewPrintProvider> {
    struct RetainPtr<WKActionSheetAssistant> { 
        void *m_ptr; 
    }  _actionSheetAssistant;
    struct unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> > { 
        struct __compressed_pair<WebKit::ApplicationStateTracker *, std::__1::default_delete<WebKit::ApplicationStateTracker> > { 
            struct ApplicationStateTracker {} *__first_; 
        } __ptr_; 
    }  _applicationStateTracker;
    struct Vector<WTF::RetainPtr<UIPDFSelection>, 0, WTF::CrashOnOverflow, 16> { 
        struct RetainPtr<UIPDFSelection> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _cachedFindMatches;
    unsigned int  _cachedFindMaximumCount;
    unsigned long long  _cachedFindOptionsAffectingResults;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _cachedFindString;
    unsigned int  _centerPageNumber;
    struct RetainPtr<CGPDFDocument *> { 
        void *m_ptr; 
    }  _cgPDFDocument;
    unsigned int  _currentFindMatchIndex;
    unsigned int  _currentFindPageIndex;
    struct RetainPtr<UIPDFSelection> { 
        void *m_ptr; 
    }  _currentFindSelection;
    NSObject<OS_dispatch_queue> * _findQueue;
    UIView * _fixedOverlayView;
    bool  _isPerformingSameDocumentNavigation;
    bool  _isStartingZoom;
    double  _lastLayoutWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lastUnobscuredSafeAreaInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    unsigned int  _nextCachedFindMaximumCount;
    unsigned long long  _nextCachedFindOptionsAffectingResults;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _nextCachedFindString;
    struct atomic<unsigned int> { 
        unsigned int __a_; 
    }  _nextComputeMatchesOperationID;
    struct CGSize { 
        double width; 
        double height; 
    }  _overlaidAccessoryViewsInset;
    struct RetainPtr<WKPDFPageNumberIndicator> { 
        void *m_ptr; 
    }  _pageNumberIndicator;
    struct Vector<PDFPageInfo, 0, WTF::CrashOnOverflow, 16> { 
        struct { /* ? */ } *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _pages;
    struct RetainPtr<UIPDFDocument> { 
        void *m_ptr; 
    }  _pdfDocument;
    struct InteractionInformationAtPosition { 
        struct InteractionInformationRequest { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } point; 
            bool includeSnapshot; 
            bool includeLinkIndicator; 
        } request; 
        bool nodeAtPositionIsAssistedNode; 
        bool hasSelectionAtPosition; 
        bool isSelectable; 
        bool isNearMarkedText; 
        bool touchCalloutEnabled; 
        bool isLink; 
        bool isImage; 
        bool isAttachment; 
        bool isAnimatedImage; 
        bool isElement; 
        bool isDataDetectorLink; 
        struct FloatPoint { 
            float m_x; 
            float m_y; 
        } adjustedPointForNodeRespondingToClickEvents; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_schemeEnd; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_portEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } url; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_schemeEnd; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_portEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } imageURL; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } title; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } idAttribute; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } bounds; 
        struct RefPtr<WebKit::ShareableBitmap> { 
            struct ShareableBitmap {} *m_ptr; 
        } image; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } textBefore; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } textAfter; 
        struct TextIndicatorData { 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } selectionRectInRootViewCoordinates; 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } textBoundingRectInRootViewCoordinates; 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } contentImageWithoutSelectionRectInRootViewCoordinates; 
            struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { 
                struct FloatRect {} *m_buffer; 
                unsigned int m_capacity; 
                unsigned int m_size; 
            } textRectsInBoundingRectCoordinates; 
            float contentImageScaleFactor; 
            struct RefPtr<WebCore::Image> { 
                struct Image {} *m_ptr; 
            } contentImageWithHighlight; 
            struct RefPtr<WebCore::Image> { 
                struct Image {} *m_ptr; 
            } contentImageWithoutSelection; 
            struct RefPtr<WebCore::Image> { 
                struct Image {} *m_ptr; 
            } contentImage; 
            struct Color { 
                union { 
                    unsigned long long rgbaAndFlags; 
                    struct ExtendedColor {} *extendedColor; 
                } m_colorData; 
            } estimatedBackgroundColor; 
            unsigned char presentationTransition; 
            unsigned short options; 
        } linkIndicator; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } dataDetectorIdentifier; 
        struct RetainPtr<NSArray> { 
            void *m_ptr; 
        } dataDetectorResults; 
    }  _positionInformation;
    UIScrollView * _scrollView;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _suggestedFilename;
    struct RetainPtr<UIWKSelectionAssistant> { 
        void *m_ptr; 
    }  _webSelectionAssistant;
    WKWebView * _webView;
}

@property (nonatomic, readonly) struct CGPDFDocument { }*_wk_printedDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackground;
@property (nonatomic, readonly) struct CGPDFDocument { }*pdfDocument;
@property (nonatomic, readonly) NSString *suggestedFilename;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_URLForLinkAnnotation:(id)arg1;
- (void)_applicationDidCreateWindowContext;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;
- (void)_applicationWillEnterForeground;
- (void)_clearPages;
- (void)_computeMatchesForString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_computePageAndDocumentFrames;
- (void)_didFindMatch:(id)arg1;
- (void)_didLoadPDFDocument;
- (void)_ensureViewForPage:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct RetainPtr<UIPDFPageView> { void *x_2_1_1; } x2; struct RetainPtr<UIPDFPage> { void *x_3_1_1; } x3; unsigned int x4; }*)arg1;
- (void)_highlightLinkAnnotation:(id)arg1 forDuration:(double)arg2 completionHandler:(id /* block */)arg3;
- (struct CGPoint { double x1; double x2; })_offsetForPageNumberIndicator;
- (void)_resetZoomAnimated:(bool)arg1;
- (void)_revalidateViews;
- (void)_scrollToFragment:(id)arg1;
- (void)_showPasswordEntryField;
- (void)_updateDocumentFrame;
- (void)_updatePageNumberIndicator;
- (unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1;
- (struct CGPDFDocument { }*)_wk_printedDocument;
- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
- (void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(id)arg3;
- (void)dealloc;
- (void)didMoveToWindow;
- (bool)isBackground;
- (struct CGPDFDocument { }*)pdfDocument;
- (struct optional<WebKit::InteractionInformationAtPosition> { bool x1; union storage_t<WebKit::InteractionInformationAtPosition> { unsigned char x_2_1_1; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_4_1; int x_1_4_2; } x_1_3_1; bool x_1_3_2; bool x_1_3_3; } x_2_2_1; bool x_2_2_2; bool x_2_2_3; bool x_2_2_4; bool x_2_2_5; bool x_2_2_6; bool x_2_2_7; bool x_2_2_8; bool x_2_2_9; bool x_2_2_10; bool x_2_2_11; bool x_2_2_12; struct FloatPoint { float x_13_3_1; float x_13_3_2; } x_2_2_13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_14_3_1; unsigned int x_14_3_2 : 1; unsigned int x_14_3_3 : 1; unsigned int x_14_3_4 : 1; unsigned int x_14_3_5; unsigned int x_14_3_6; unsigned int x_14_3_7; unsigned int x_14_3_8; unsigned int x_14_3_9; unsigned int x_14_3_10; unsigned int x_14_3_11; unsigned int x_14_3_12; unsigned int x_14_3_13; } x_2_2_14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_15_3_1; unsigned int x_15_3_2 : 1; unsigned int x_15_3_3 : 1; unsigned int x_15_3_4 : 1; unsigned int x_15_3_5; unsigned int x_15_3_6; unsigned int x_15_3_7; unsigned int x_15_3_8; unsigned int x_15_3_9; unsigned int x_15_3_10; unsigned int x_15_3_11; unsigned int x_15_3_12; unsigned int x_15_3_13; } x_2_2_15; } x_2_1_2; } x2; })positionInformationForActionSheetAssistant:(id)arg1;
- (void)resetZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)suggestedFilename;
- (void)web_computedContentInsetDidChange;
- (void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_hideFindUI;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { double x1; double x2; })arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 kind:(int)arg4;

@end
