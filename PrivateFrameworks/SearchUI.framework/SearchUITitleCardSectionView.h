/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITitleCardSectionView : SearchUICardSectionView {
    NUIContainerBoxView * _containerView;
    UILabel * _label;
}

@property (retain) NUIContainerBoxView *containerView;
@property (retain) UILabel *label;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)containerView;
- (id)label;
- (void)setContainerView:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)setupContentView;
- (void)updateWithCardSection:(id)arg1;

@end
