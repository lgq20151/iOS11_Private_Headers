/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMovieCardSectionView : SearchUICardSectionView

@property (retain) NUIContainerStackView *contentView;
@property (retain) SFMediaInfoCardSection *section;

+ (id)dragTitleForCardSection:(id)arg1;

- (id)initWithCardSection:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (id)setupContentView;

@end
