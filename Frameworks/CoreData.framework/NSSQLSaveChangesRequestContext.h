/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {
    NSFaultHandler * _faultHandler;
    NSDictionary * _metadataToWrite;
    NSSet * _objectIDsToPruneTrigger;
    NSMutableDictionary * _originalCachedRows;
    NSSQLSavePlan * _savePlan;
    NSMutableDictionary * _updateMasksForHistoryTracking;
}

@property (nonatomic, readonly) NSFaultHandler *faultHandler;
@property (nonatomic, readonly) NSDictionary *metadataToWrite;
@property (nonatomic, readonly) NSSQLModel *model;
@property (nonatomic, readonly) NSMutableDictionary *originalCachedRows;
@property (nonatomic, readonly) NSSaveChangesRequest *request;
@property (nonatomic, readonly) NSSQLSavePlan *savePlan;

- (void)addDataMask:(id)arg1 forEntityKey:(id)arg2;
- (id)dataMaskForKey:(id)arg1;
- (void)dealloc;
- (void)executeEpilogue;
- (void)executePrologue;
- (void)executeRequestCore:(id*)arg1;
- (id)faultHandler;
- (bool)hasChangesForWriting;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)metadataToWrite;
- (id)model;
- (id)originalCachedRows;
- (id)originalRowForObjectID:(id)arg1;
- (id)request;
- (id)rowCache;
- (id)savePlan;
- (void)setOriginalRow:(id)arg1 forObjectID:(id)arg2;

@end
