/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewCellAppearanceState : NSObject {
    int  _dragState;
    bool  _hasBeganCancelling;
    bool  _hasLifted;
}

@property (nonatomic, readonly) long long appearance;
@property (nonatomic) int dragState;
@property (nonatomic, readonly) bool enrouteToOrReachedTerminalState;
@property (nonatomic) bool hasBeganCancelling;
@property (nonatomic, readonly) bool hasBeganDroppingInto;
@property (nonatomic) bool hasLifted;

- (long long)appearance;
- (id)description;
- (void)didBeginCancelling;
- (void)didBeginDropping;
- (void)didBeginDroppingInto;
- (void)didBeginLift;
- (void)didCompleteCancelling;
- (void)didCompleteDropping;
- (void)didCompleteLift;
- (void)didEnd;
- (void)didMove;
- (int)dragState;
- (bool)enrouteToOrReachedTerminalState;
- (bool)hasBeganCancelling;
- (bool)hasBeganDroppingInto;
- (bool)hasLifted;
- (id)init;
- (void)setDragState:(int)arg1;
- (void)setHasBeganCancelling:(bool)arg1;
- (void)setHasLifted:(bool)arg1;
- (void)willBeginCancelling;

@end
