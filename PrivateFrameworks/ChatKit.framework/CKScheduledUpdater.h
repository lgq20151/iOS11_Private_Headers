/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKScheduledUpdater : CKManualUpdater {
    NSCountedSet * _holdingUpdatesKeys;
    bool  _updateSynchronouslyIfPossible;
}

@property (nonatomic, retain) NSCountedSet *holdingUpdatesKeys;
@property (nonatomic) bool updateSynchronouslyIfPossible;

- (void).cxx_destruct;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (id)holdingUpdatesKeys;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (bool)isHoldingUpdates;
- (void)setHoldingUpdatesKeys:(id)arg1;
- (void)setNeedsUpdate;
- (void)setUpdateSynchronouslyIfPossible:(bool)arg1;
- (void)updateIfNeeded;
- (bool)updateSynchronouslyIfPossible;

@end
