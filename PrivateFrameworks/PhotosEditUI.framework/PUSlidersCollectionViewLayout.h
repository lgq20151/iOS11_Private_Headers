/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUSlidersCollectionViewLayout : UICollectionViewFlowLayout {
    double  _rowHeight;
}

@property (nonatomic) double rowHeight;

- (void)prepareLayout;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;

@end