/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadTrackers : NSObject {
    NSMapTable * _docIDsByTracker;
    BRCAccountSession * _session;
    NSMutableDictionary * _trackersByDocID;
}

- (void).cxx_destruct;
- (void)addDownloadTracker:(id)arg1 forItemWithDocID:(id)arg2;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (bool)hasPendingTrackerForDocumentID:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)removeDownloadTracker:(id)arg1;
- (unsigned long long)spaceRequiredForTrackers;

@end
