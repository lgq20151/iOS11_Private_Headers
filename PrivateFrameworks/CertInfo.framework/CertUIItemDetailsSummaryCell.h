/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertUIItemDetailsSummaryCell : UITableViewCell {
    double  _detailLabelOriginX;
    NSArray * _detailViews;
}

@property (nonatomic) double detailLabelOriginX;
@property (nonatomic, retain) NSArray *detailViews;

- (void).cxx_destruct;
- (void)createViewWithDescriptors:(id)arg1;
- (void)createViewWithItemDetailArray:(id)arg1;
- (double)detailLabelOriginX;
- (id)detailViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setDetailLabelOriginX:(double)arg1;
- (void)setDetailViews:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end