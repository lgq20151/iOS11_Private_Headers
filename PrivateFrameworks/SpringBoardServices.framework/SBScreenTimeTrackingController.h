/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBScreenTimeTrackingController : NSObject <FBSDisplayLayoutObserver> {
    FBSDisplayLayoutMonitor * _layoutMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    int  _queue_activeCategory;
    int  _queue_activeContext;
    bool  _queue_isPhoneOrFaceTimeActive;
    bool  _queue_isScreenOn;
    double  _queue_lastCategoryChangeTime;
    FBSDisplayLayout * _queue_lastLayout;
    FBSDisplayLayoutTransitionContext * _queue_lastLayoutTransitionContext;
    unsigned long long  _queue_thisCategoryStartTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_nameForContext:(int)arg1;
- (void)_queue_handleNewLayout:(id)arg1 withContext:(id)arg2;
- (void)_queue_setActiveCategory:(int)arg1 context:(int)arg2;
- (void)_queue_setPhoneOrFaceTimeActive:(bool)arg1;
- (void)_queue_setScreenOn:(bool)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;

@end
