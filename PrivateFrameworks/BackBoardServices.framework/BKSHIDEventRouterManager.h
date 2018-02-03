/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {
    bool  _needsFlush;
}

@property (nonatomic) bool needsFlush;

+ (id)sharedInstance;

- (void)_flush;
- (void)_flushTrigger;
- (void)_routerUpdated:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)needsFlush;
- (void)setEventRouters:(id)arg1;
- (void)setNeedsFlush:(bool)arg1;

@end
