/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKReplicaManager : NSObject {
    NSMutableDictionary * _replicaEntries;
    NSMutableOrderedSet * _replicaUUIDs;
    bool  _testMode;
    NSObject<OS_dispatch_queue> * _uuidAccessQueue;
}

@property (nonatomic) bool testMode;

+ (id)sharedReplicaManager;

- (void).cxx_destruct;
- (void)_loadState;
- (void)_saveState;
- (id)checkoutReplicaUUIDForDrawing:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)resetAllReplicaUUIDs;
- (void)returnReplicaForDrawing:(id)arg1;
- (void)setTestMode:(bool)arg1;
- (bool)testMode;
- (void)updateVersionForDrawing:(id)arg1 persist:(bool)arg2;

@end
