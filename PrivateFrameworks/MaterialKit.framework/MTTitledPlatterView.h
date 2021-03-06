/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTTitledPlatterView : MTPlatterView <MTPlatterInternal, MTTitled> {
    UIView * _headerContainerView;
    MTPlatterHeaderContentView * _headerContentView;
    UIView * _headerOverlayView;
    bool  _sashHidden;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasShadow;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) UIButton *iconButton;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (getter=isSashHidden, nonatomic) bool sashHidden;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIButton *utilityButton;

- (void).cxx_destruct;
- (void)_configureHeaderContainerViewIfNecessary;
- (void)_configureHeaderContentView;
- (void)_configureHeaderContentViewIfNecessary;
- (void)_configureHeaderOverlayViewIfNecessary;
- (void)_configureMainOverlayView;
- (id)_headerContentView;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)date;
- (long long)dateFormatStyle;
- (bool)headerHeedsHorizontalLayoutMargins;
- (id)icon;
- (id)iconButton;
- (bool)isDateAllDay;
- (bool)isSashHidden;
- (void)layoutSubviews;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setHeaderHeedsHorizontalLayoutMargins:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setNeedsLayout;
- (void)setSashHidden:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUtilityView:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)timeZone;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (id)utilityButton;
- (id)utilityView;

@end
