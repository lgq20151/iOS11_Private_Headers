/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPrivilegedHelper : NSObject {
    NSMutableArray * _allKnownEntitlementGroup;
    NSMutableSet * _allKnownEntitlementSet;
    NSMutableDictionary * _handlers;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSMutableArray *allKnownEntitlementGroup;
@property (retain) NSMutableSet *allKnownEntitlementSet;
@property (retain) NSMutableDictionary *handlers;
@property (retain) NSObject<OS_xpc_object> *listener;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)allKnownEntitlementGroup;
- (id)allKnownEntitlementSet;
- (void)handleRequest:(id)arg1 onConnection:(id)arg2;
- (id)handlers;
- (id)initWithQueue:(id)arg1;
- (id)listener;
- (id)queue;
- (void)registerHandlerFunction:(int (*)arg1 type:(int)arg2 allowedEntitlementGroup:(id)arg3;
- (void)registerHelperFunctions;
- (void)setAllKnownEntitlementGroup:(id)arg1;
- (void)setAllKnownEntitlementSet:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startThrottlePolicyEventListener;
- (bool)startXPCListener;

@end
