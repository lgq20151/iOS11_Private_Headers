/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySafeSaveFile : NSObject {
    bool  _continueCheckingDownload;
    bool  _continueCheckingUpload;
    PFUbiquityLocation * _currentLocation;
    NSError * _downloadError;
    bool  _downloadSuccess;
    bool  _isRegistered;
    NSString * _localPeerID;
    bool  _moveAfterSave;
    PFUbiquityLocation * _permanentLocation;
    NSError * _safeSaveError;
    PFUbiquityLocation * _safeSaveLocation;
    NSObject<OS_dispatch_semaphore> * _safeSaveSemaphore;
    bool  _safeSaveSuccess;
}

@property (nonatomic, readonly) bool continueCheckingDownload;
@property (nonatomic, readonly) bool continueCheckingUpload;
@property (nonatomic, retain) PFUbiquityLocation *currentLocation;
@property (nonatomic, readonly) NSError *downloadError;
@property (nonatomic, readonly) bool downloadSuccess;
@property (nonatomic, readonly) bool existsAtPermanentLocation;
@property (nonatomic, readonly) bool existsAtSafeSaveLocation;
@property (nonatomic, readonly) bool existsInCloud;
@property (nonatomic, readonly) bool isRegistered;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) bool moveAfterSave;
@property (nonatomic, readonly) PFUbiquityLocation *permanentLocation;
@property (nonatomic, readonly) NSError *safeSaveError;
@property (nonatomic, readonly) PFUbiquityLocation *safeSaveLocation;
@property (nonatomic, readonly) bool safeSaveSuccess;

- (void)checkFileDownload;
- (void)checkSafeSaveFileUpload;
- (void)checkSafeSaveFileUploadAsync;
- (bool)continueCheckingDownload;
- (bool)continueCheckingUpload;
- (id)currentLocation;
- (void)dealloc;
- (id)description;
- (id)downloadError;
- (void)downloadFinished;
- (bool)downloadLatestVersion:(bool)arg1 error:(id*)arg2;
- (bool)downloadSuccess;
- (bool)existsAtPermanentLocation;
- (bool)existsAtSafeSaveLocation;
- (bool)existsInCloud;
- (id)init;
- (id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (bool)isFileDownloaded:(id*)arg1;
- (bool)isFileUploaded:(id*)arg1;
- (bool)isRegistered;
- (bool)loadFile:(id*)arg1;
- (bool)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (id)localPeerID;
- (bool)moveAfterSave;
- (bool)moveToPermanentLocation:(id*)arg1;
- (id)permanentLocation;
- (bool)removeFile:(id*)arg1;
- (bool)removeFileFromLocation:(id)arg1 error:(id*)arg2;
- (id)safeSaveError;
- (bool)safeSaveFile:(bool)arg1 moveToPermanentLocation:(bool)arg2 error:(id*)arg3;
- (void)safeSaveFinishedUpload;
- (id)safeSaveLocation;
- (bool)safeSaveSuccess;
- (void)setCurrentLocation:(id)arg1;
- (void)setDownloadError:(id)arg1;
- (void)setDownloadSuccess:(bool)arg1;
- (void)setSafeSaveError:(id)arg1;
- (void)setSafeSaveSuccess:(bool)arg1;
- (bool)waitForFileToDownload:(id*)arg1;
- (bool)waitForFileToUpload:(id*)arg1;
- (bool)writeFile:(id*)arg1;
- (bool)writeFileToLocation:(id)arg1 error:(id*)arg2;

@end
