/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeer : NSManagedObject

@property (nonatomic, retain) NSSet *localPeerStates;
@property (nonatomic, retain) NSString *peerCode;
@property (nonatomic, retain) NSString *peerKey;
@property (nonatomic, retain) NSSet *primaryKeyRanges;
@property (nonatomic, retain) NSSet *remoteStates;
@property (nonatomic, retain) NSSet *transactionEntries;

+ (id)allPeersInManagedObjectContext:(id)arg1;
+ (id)peerForPeerID:(id)arg1 inManagedObjectContext:(id)arg2 createIfMissing:(bool)arg3;

@end
