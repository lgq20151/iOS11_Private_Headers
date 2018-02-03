/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringResult : NSPersistentStoreResult {
    CKServerChangeToken * _changeToken;
    NSError * _error;
    NSPersistentHistoryToken * _historyToken;
    bool  _madeChanges;
    NSCloudKitMirroringRequest * _request;
    bool  _success;
}

@property (nonatomic, readonly) CKServerChangeToken *changeToken;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSPersistentHistoryToken *historyToken;
@property (nonatomic, readonly) bool madeChanges;
@property (nonatomic, readonly) NSCloudKitMirroringRequest *request;
@property (nonatomic, readonly) bool success;

- (id)changeToken;
- (void)dealloc;
- (id)error;
- (id)historyToken;
- (id)initWithRequest:(id)arg1 success:(bool)arg2 madeChanges:(bool)arg3 error:(id)arg4 changeToken:(id)arg5 historyToken:(id)arg6;
- (bool)madeChanges;
- (id)request;
- (bool)success;

@end
