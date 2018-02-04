/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITrailerView : TLKStackView {
    SearchUITrailersCardSectionView * _cardSectionView;
    UIView * _centeredBoxView;
    SKUIPlayButton * _playButton;
    SFPunchout * _punchout;
    UILabel * _titleLabel;
}

@property SearchUITrailersCardSectionView *cardSectionView;
@property (retain) UIView *centeredBoxView;
@property (retain) SKUIPlayButton *playButton;
@property (retain) SFPunchout *punchout;
@property (retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)cardSectionView;
- (id)centeredBoxView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithMediaItem:(id)arg1 cardSectionView:(id)arg2;
- (id)playButton;
- (void)playTrailer;
- (id)punchout;
- (void)setCardSectionView:(id)arg1;
- (void)setCenteredBoxView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end