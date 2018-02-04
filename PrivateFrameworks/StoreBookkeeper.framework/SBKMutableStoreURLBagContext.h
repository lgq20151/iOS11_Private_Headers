/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString *domain;
@property bool domainDisabled;
@property double pollingIntervalInSeconds;
@property (retain) NSURL *pullAllKeyValueRequestURL;
@property (retain) NSURL *pullKeyValueRequestURL;
@property (retain) NSURL *pushAllKeyValueRequestURL;
@property (retain) NSURL *pushKeyValueRequestURL;
@property (retain) NSURL *syncRequestURL;

@end