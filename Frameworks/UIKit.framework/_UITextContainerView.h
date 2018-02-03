/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextTiledLayerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _constrainedTiledRenderingRect;
    long long  _contentsFormat;
    <_UITextContainerViewDelegate> * _delegate;
    NSMutableSet * _ghostedRanges;
    NSMutableSet * _hiddenAreaRects;
    long long  _invalidationSeqClipsToBounds;
    unsigned long long  _invalidationSeqNo;
    NSDictionary * _linkTextAttributes;
    NSArray * _maskedRectangles;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    struct { 
        unsigned int textContainerOriginInvalid : 1; 
        unsigned int verticalLayout : 2; 
        unsigned int horizontallyResizable : 1; 
        unsigned int verticallyResizable : 1; 
        unsigned int freezeTextContainerSize : 1; 
        unsigned int contentFormatEvaluationEnabled : 1; 
        unsigned int containedInTextView : 1; 
    }  _tcvFlags;
    NSTextContainer * _textContainer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textContainerInset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textContainerOrigin;
}

@property (getter=isContentFormatEvaluationEnabled, nonatomic) bool contentFormatEvaluationEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UITextContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:, nonatomic) bool freezeTextContainerSize;
@property (readonly) unsigned long long hash;
@property (getter=isHorizontallyResizable, nonatomic) bool horizontallyResizable;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } markedRange;
@property (nonatomic, readonly) NSDictionary *markedTextStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) double maxTileHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } minSize;
@property (readonly) Class superclass;
@property (nonatomic) NSTextContainer *textContainer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textContainerInset;
@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic) bool usesTiledViews;
@property (getter=isVerticallyResizable, nonatomic) bool verticallyResizable;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_addHiddenArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_constrainTiledRenderingToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_contentsFormatForNonDeepDrawing;
- (id)_currentTextColor;
- (long long)_determineContentsFormat;
- (void)_didScroll;
- (bool)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withExtension:(bool)arg2;
- (bool)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withExtensionFactor:(double)arg2 minimumExtensionDistance:(double)arg3 repetitions:(unsigned long long)arg4;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)_evaluateContentsFormat;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_extendedGlyphRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 maxGlyphIndex:(unsigned long long)arg2 drawingToScreen:(bool)arg3;
- (bool)_freezeTextContainerSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_intersectRectWithConstrainedTiledRenderingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_removeHiddenAreas;
- (void)_resetMaskedRectangles;
- (void)_setFrameOrBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 settingAction:(id /* block */)arg3;
- (void)_setFreezeTextContainerSize:(bool)arg1;
- (void)_sizeToConstrainedContainerUsedRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textTiledLayer:(id)arg1 constrainTileableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_unconstrainTiledRendering;
- (bool)_wantsDeepDrawing;
- (void)addGhostedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)delegate;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 delegate:(id)arg3;
- (void)invalidateTextContainerOrigin;
- (bool)isContentFormatEvaluationEnabled;
- (bool)isHorizontallyResizable;
- (bool)isVerticallyResizable;
- (id)layer;
- (id)layoutManager;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (long long)layoutOrientation;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (id)linkTextAttributes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (id)markedTextStyle;
- (struct CGSize { double x1; double x2; })maxSize;
- (double)maxTileHeight;
- (struct CGSize { double x1; double x2; })minSize;
- (void)removeAllGhostedRanges;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConstrainedFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentFormatEvaluationEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontallyResizable:(bool)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaxTileHeight:(double)arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(bool)arg2;
- (void)setNeedsLayout;
- (void)setTextContainer:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUsesTiledViews:(bool)arg1;
- (void)setVerticallyResizable:(bool)arg1;
- (void)sizeToFit;
- (id)textContainer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (id)textStorage;
- (void)tintColorDidChange;
- (void)updateInsertionPointStateAndRestartTimer:(bool)arg1;
- (bool)usesTiledViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)willMoveToSuperview:(id)arg1;

@end
