/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSHostExtraIvars : NSObject {
    NSObject<OS_dispatch_queue> * cacheAccessQueue;
    NSObject<OS_dispatch_queue> * callbackQueue;
    NSObject<OS_dispatch_queue> * resolveQueue;
    int  resolveType;
    bool  startedResolving;
    NSString * thingToResolve;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *resolveQueue;
@property (nonatomic) int resolveType;
@property bool startedResolving;
@property (nonatomic, retain) NSString *thingToResolve;

- (id)cacheAccessQueue;
- (id)callbackQueue;
- (void)cleanup;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)resolveQueue;
- (int)resolveType;
- (void)setResolveType:(int)arg1;
- (void)setStartedResolving:(bool)arg1;
- (void)setThingToResolve:(id)arg1;
- (bool)startedResolving;
- (id)thingToResolve;

@end
