/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPageControl : UIControl {
    UIVisualEffectView * _backgroundVisualEffectView;
    long long  _currentPage;
    UIImage * _currentPageImage;
    NSMutableArray * _currentPageImages;
    UIColor * _currentPageIndicatorTintColor;
    long long  _displayedPage;
    NSMutableArray * _indicators;
    long long  _lastUserInterfaceIdiom;
    _UILegibilitySettings * _legibilitySettings;
    long long  _numberOfPages;
    struct { 
        unsigned int hideForSinglePage : 1; 
        unsigned int defersCurrentPageDisplay : 1; 
    }  _pageControlFlags;
    UIImage * _pageImage;
    NSMutableArray * _pageImages;
    UIColor * _pageIndicatorTintColor;
}

@property (nonatomic) long long currentPage;
@property (nonatomic, retain) UIColor *currentPageIndicatorTintColor;
@property (nonatomic) bool defersCurrentPageDisplay;
@property (nonatomic) bool hidesForSinglePage;
@property (getter=_legibilitySettings, setter=_setLegibilitySettings:, nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (getter=_legibilityStyle, setter=_setLegibilityStyle:, nonatomic) long long legibilityStyle;
@property (nonatomic) long long numberOfPages;
@property (nonatomic, retain) UIColor *pageIndicatorTintColor;

+ (bool)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (id)_activePageIndicatorImage;
- (void)_cachePageIndicatorImages;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_cachedPageIndicatorImageForPage:(long long)arg1;
- (void)_commonPageControlInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createModernIndicatorImageFromView:(id)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (long long)_displayedPage;
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(bool)arg2;
- (id)_effectiveContentView;
- (bool)_hasCustomImageForPage:(long long)arg1 enabled:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorFrameAtIndex:(long long)arg1;
- (double)_indicatorSpacing;
- (id)_indicatorViewEnabled:(bool)arg1 index:(long long)arg2;
- (id)_indicatorViewEnabled:(bool)arg1 index:(long long)arg2 legible:(bool)arg3;
- (void)_invalidateIndicators;
- (id)_legibilitySettings;
- (long long)_legibilityStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_modernBounds;
- (id)_modernColorEnabled:(bool)arg1;
- (double)_modernCornerRadius;
- (id)_modernIndicatorImageEnabled:(bool)arg1;
- (void)_modernTransitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3 legible:(bool)arg4;
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_pageIndicatorImage;
- (id)_pageIndicatorImageForPage:(long long)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setCurrentPage:(long long)arg1;
- (void)_setDisplayedPage:(long long)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (void)_setLegibilityStyle:(long long)arg1;
- (bool)_shouldDrawLegibly;
- (void)_transitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3;
- (void)_transitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3 legible:(bool)arg4;
- (void)_updateCurrentPageDisplay;
- (bool)canBecomeFocused;
- (long long)currentPage;
- (id)currentPageIndicatorTintColor;
- (bool)defersCurrentPageDisplay;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hidesForSinglePage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (long long)numberOfPages;
- (id)pageIndicatorTintColor;
- (void)setCurrentPage:(long long)arg1;
- (void)setCurrentPageIndicatorTintColor:(id)arg1;
- (void)setDefersCurrentPageDisplay:(bool)arg1;
- (void)setHidesForSinglePage:(bool)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (void)setPageIndicatorTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForNumberOfPages:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateCurrentPageDisplay;

@end
