/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityGlobalObjectIDCache : NSObject {
    NSString * _localPeerID;
    NSMutableDictionary * _peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock * _peerIDToEntityNameToPrimaryKeyLock;
    NSString * _storeName;
}

@property (nonatomic, retain) NSString *localPeerID;
@property (nonatomic, retain) NSString *storeName;

+ (id)stringValueFromArray:(id)arg1 atIndexDescribedByStringNumber:(id)arg2;

- (id)createGlobalIDForCompressedString:(id)arg1 withEntityNames:(id)arg2 primaryKeys:(id)arg3 peerIDs:(id)arg4;
- (id)createGlobalIDForGlobalIDString:(id)arg1;
- (id)createGlobalIDForPrimarKey:(unsigned long long)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3;
- (id)createGlobalIDForPrimaryKeyString:(id)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2;
- (id)localPeerID;
- (void)purgeCache;
- (void)setLocalPeerID:(id)arg1;
- (void)setStoreName:(id)arg1;
- (id)storeName;

@end
