/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerRange : NSManagedObject

@property (nonatomic, retain) NSNumber *end;
@property (nonatomic, retain) PFUbiquityPeer *peer;
@property (nonatomic, retain) NSNumber *peerEnd;
@property (nonatomic, retain) NSString *peerEntityName;
@property (nonatomic, retain) NSNumber *peerStart;
@property (nonatomic, retain) NSNumber *start;
@property (nonatomic, retain) PFUbiquityStoreMetadata *storeMetadata;

- (void)loadFromBaselineDictionary:(id)arg1;

@end
