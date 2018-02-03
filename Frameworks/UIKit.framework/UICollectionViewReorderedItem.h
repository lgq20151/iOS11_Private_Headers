/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewReorderedItem : NSObject {
    UICollectionViewCell * _cell;
    NSIndexPath * _originalIndexPath;
    bool  _pinned;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinnedPreviousContentOffset;
    id /* block */  _pinningTest;
    NSIndexPath * _targetIndexPath;
}

@property (nonatomic, readonly) UICollectionViewCell *cell;
@property (nonatomic, retain) NSIndexPath *originalIndexPath;
@property (nonatomic) bool pinned;
@property (nonatomic) struct CGPoint { double x1; double x2; } pinnedPreviousContentOffset;
@property (nonatomic, copy) id /* block */ pinningTest;
@property (nonatomic, retain) NSIndexPath *targetIndexPath;

- (void).cxx_destruct;
- (id)cell;
- (id)description;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2;
- (bool)isNOOP;
- (id)originalIndexPath;
- (bool)pinned;
- (struct CGPoint { double x1; double x2; })pinnedPreviousContentOffset;
- (id /* block */)pinningTest;
- (void)setOriginalIndexPath:(id)arg1;
- (void)setPinned:(bool)arg1;
- (void)setPinnedPreviousContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPinningTest:(id /* block */)arg1;
- (void)setTargetIndexPath:(id)arg1;
- (id)targetIndexPath;

@end
