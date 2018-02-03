/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewPrefetchItem : NSObject {
    UICollectionViewLayoutAttributes * _attributes;
    bool  _hasPrefetchedData;
    UICollectionReusableView * _view;
}

@property (nonatomic, retain) UICollectionViewLayoutAttributes *attributes;
@property (nonatomic) bool hasPrefetchedData;
@property (nonatomic, retain) UICollectionReusableView *view;

- (void).cxx_destruct;
- (id)attributes;
- (id)description;
- (bool)hasPrefetchedData;
- (id)initWithAttributes:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setHasPrefetchedData:(bool)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
