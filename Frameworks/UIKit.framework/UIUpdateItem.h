/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUpdateItem : NSObject {
    int  _action;
    long long  _animation;
    UICollectionViewUpdateItem * _collectionViewUpdateItem;
    UITableViewUpdateGap * _gap;
    bool  _headerFooterOnly;
    NSIndexPath * _indexPath;
    double  _offset;
    bool  _skipAnimation;
}

@property (nonatomic, readonly) int action;
@property (nonatomic) long long animation;
@property (nonatomic, readonly) UICollectionViewUpdateItem *collectionViewUpdateItem;
@property (nonatomic) UITableViewUpdateGap *gap;
@property (nonatomic) bool headerFooterOnly;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) double offset;
@property (nonatomic) bool skipAnimation;

- (void).cxx_destruct;
- (id)_actionDescription;
- (int)action;
- (long long)animation;
- (id)collectionViewUpdateItem;
- (long long)compareIndexPaths:(id)arg1;
- (id)gap;
- (bool)headerFooterOnly;
- (id)indexPath;
- (id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(long long)arg3;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (bool)isSectionOperation;
- (double)offset;
- (void)setAnimation:(long long)arg1;
- (void)setGap:(id)arg1;
- (void)setHeaderFooterOnly:(bool)arg1;
- (void)setOffset:(double)arg1;
- (void)setSkipAnimation:(bool)arg1;
- (bool)skipAnimation;

@end
