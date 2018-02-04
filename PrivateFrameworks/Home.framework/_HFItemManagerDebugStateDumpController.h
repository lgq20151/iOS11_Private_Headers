/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface _HFItemManagerDebugStateDumpController : NSObject {
    NSHashTable * _itemManagers;
}

@property (nonatomic, retain) NSHashTable *itemManagers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_performStateDump;
- (id)init;
- (id)itemManagers;
- (void)registerItemManager:(id)arg1;
- (void)setItemManagers:(id)arg1;

@end