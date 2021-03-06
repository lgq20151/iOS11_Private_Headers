/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMosaicGalleryComponentView : SXGalleryComponentView <SXFullScreenCanvasShowable, SXImageViewDelegate, SXMosaicGalleryLayouterDataSource, SXTextSourceDataSource, SXViewportChangeListener> {
    NSMutableSet * _exposedGalleryItems;
    SXFullScreenCanvasController * _fullScreenCanvasController;
    SXMosaicGalleryLayouter * _galleryLayouter;
    UIView * _galleryView;
    NSMutableArray * _imageViews;
    bool  _loadedAtleastOneImage;
    SXMediaViewEvent * _mediaViewEvent;
    NSMutableArray * _visibleImageViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *exposedGalleryItems;
@property (nonatomic, readonly) SXFullScreenCanvasController *fullScreenCanvasController;
@property (nonatomic, retain) SXMosaicGalleryLayouter *galleryLayouter;
@property (nonatomic, retain) UIView *galleryView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *imageViews;
@property (nonatomic) bool loadedAtleastOneImage;
@property (nonatomic, retain) SXMediaViewEvent *mediaViewEvent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *visibleImageViews;

- (void).cxx_destruct;
- (id)additionsForTextSource:(id)arg1;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsGalleryType;
- (unsigned long long)analyticsMediaType;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (void)createMediaViewEventForGalleryItem:(id)arg1;
- (void)discardContents;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;
- (id)documentControllerForTextSource:(id)arg1;
- (id)exposedGalleryItems;
- (void)finishMediaViewEvent;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)fullScreenCanvasController;
- (id)fullScreenCanvasController:(id)arg1 canvasViewForShowable:(id)arg2;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint { double x1; double x2; })arg2 inShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (id)galleryLayouter;
- (struct CGSize { double x1; double x2; })galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (bool)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
- (id)galleryView;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;
- (id)imageViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)imageViews;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (bool)loadedAtleastOneImage;
- (id)mediaViewEvent;
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;
- (void)presentComponent;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)renderContents;
- (void)renderContentsInDrawableRect;
- (bool)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (void)setExposedGalleryItems:(id)arg1;
- (void)setGalleryLayouter:(id)arg1;
- (void)setGalleryView:(id)arg1;
- (void)setLoadedAtleastOneImage:(bool)arg1;
- (void)setMediaViewEvent:(id)arg1;
- (bool)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)submitEvents;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textStyleForTextSource:(id)arg1;
- (void)visibleBoundsChanged;
- (id)visibleImageViews;
- (void)willSubmitMediaExposureEvent:(id)arg1;

@end
