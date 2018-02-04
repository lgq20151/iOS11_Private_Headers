/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface VolumeGraphView : UIView {
    StockGraphImageSet * _graphImageSet;
    bool  _showingTintedRegion;
    UIView * _tintedRegionClipView;
    TintedView * _tintedVolumeView;
    UIImage * _volumeImage;
}

@property (nonatomic, retain) StockGraphImageSet *graphImageSet;

- (void).cxx_destruct;
- (id)graphImageSet;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (void)setGraphImageSet:(id)arg1;
- (void)setShowingSelectedRegion:(bool)arg1;

@end