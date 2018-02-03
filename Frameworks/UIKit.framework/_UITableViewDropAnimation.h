/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewDropAnimation : NSObject <UIDragAnimating> {
    NSMutableArray * _animationsBlocks;
    NSMutableArray * _completionBlocks;
    bool  _didBeginAnimation;
    UIDragItem * _dragItem;
}

@property (nonatomic, retain) NSMutableArray *animationsBlocks;
@property (nonatomic, retain) NSMutableArray *completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_didBeginAnimation, setter=_setDidBeginAnimation:, nonatomic) bool didBeginAnimation;
@property (nonatomic, retain) UIDragItem *dragItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addClientBlocksToAnimator:(id)arg1;
- (bool)_didBeginAnimation;
- (void)_executeCompletionBlocks;
- (void)_setDidBeginAnimation:(bool)arg1;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)animationsBlocks;
- (id)completionBlocks;
- (id)dragItem;
- (id)initWithDragItem:(id)arg1;
- (void)setAnimationsBlocks:(id)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setDragItem:(id)arg1;

@end
