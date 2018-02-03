/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewDropProposal : UIDropProposal {
    NSIndexPath * _adjustedTargetIndexPath;
    long long  _intent;
}

@property (nonatomic, readonly) long long _dropLocation;
@property (getter=_adjustedTargetIndexPath, setter=_setAdjustedTargetIndexPath:, nonatomic, retain) NSIndexPath *adjustedTargetIndexPath;
@property (nonatomic) long long intent;

- (void).cxx_destruct;
- (id)_adjustedTargetIndexPath;
- (long long)_dropAction;
- (long long)_dropLocation;
- (void)_setAdjustedTargetIndexPath:(id)arg1;
- (id)_updatedDropProposalWithDropOperation:(unsigned long long)arg1 dropIntent:(long long)arg2 adjustedTargetIndexPath:(id)arg3;
- (id)initWithDropOperation:(unsigned long long)arg1;
- (id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2;
- (id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2;
- (long long)intent;
- (void)setIntent:(long long)arg1;

@end
