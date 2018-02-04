/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAPasteboardFileChunkItemProvider : NSObject <UAPasteboardItemProviding> {
    long long  _chunkSize;
    NSFileHandle * _dataFile;
    NSNumber * _offsetInFile;
    NSString * _type;
    NSUUID * _uuid;
}

@property long long chunkSize;
@property (retain) NSFileHandle *dataFile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSNumber *offsetInFile;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (long long)chunkSize;
- (id)dataFile;
- (void)getDataWithCompletionBlock:(id /* block */)arg1;
- (id)initWithType:(id)arg1 fileHandle:(id)arg2 offsetInFile:(id)arg3 size:(long long)arg4;
- (id)offsetInFile;
- (void)setChunkSize:(long long)arg1;
- (void)setDataFile:(id)arg1;
- (void)setOffsetInFile:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)type;
- (id)uuid;

@end