/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayLayoutServiceServer : FBSystemServiceFacility {
    NSMutableDictionary * _calloutQueuesByQOS;
    NSMutableDictionary * _defaultQOSClientsByDisplayType;
    <FBDisplayLayoutServiceServerDelegate> * _delegate;
    NSMutableDictionary * _utilityQOSClientsByDisplayType;
}

@property (nonatomic) <FBDisplayLayoutServiceServerDelegate> *delegate;

- (id)_calloutQueueForQOS:(unsigned long long)arg1;
- (id)_defaultQOSClientsForDisplayType:(long long)arg1;
- (void)_sendDisplayLayout:(id)arg1 toClients:(id)arg2 withQualityOfService:(unsigned long long)arg3;
- (id)_utilityQOSClientsForDisplayType:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)prerequisiteMilestones;
- (void)publishDisplayLayout:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
