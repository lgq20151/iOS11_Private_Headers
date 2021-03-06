/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPDeletionTracker : NSObject <PPPortraitDeletionTrackingProtocol> {
    PPAllocSupport * _allocSupport;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableDictionary * _recentNamedEntityDeletions;
    NSDate * _validAfterDate;
}

- (void).cxx_destruct;
- (void)_locked_ageOutDeletionsWithCurrentDate:(id)arg1;
- (void)_locked_prepAlloc;
- (void)clear;
- (void)coreRoutineEnableStateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)entitiesDeletedSinceDate:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)registerAddedNamedEntities:(id)arg1;
- (void)registerDeletedNamedEntities:(id)arg1;
- (void)voiceAssistantEnableStateWithCompletion:(id /* block */)arg1;

@end
