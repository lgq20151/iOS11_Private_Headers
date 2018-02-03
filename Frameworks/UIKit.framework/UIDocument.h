/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocument : NSObject <NSFilePresenter, NSProgressReporting> {
    NSLock * _activityContinuationLock;
    id  _alertPresenter;
    NSTimer * _autosavingTimer;
    NSUserActivity * _currentUserActivity;
    id  _differenceDueToRecentChanges;
    id  _differenceSincePreservingPreviousVersion;
    id  _differenceSinceSaving;
    struct __docFlags { 
        unsigned int inClose : 1; 
        unsigned int isOpen : 1; 
        unsigned int inOpen : 1; 
        unsigned int isAutosavingBecauseOfTimer : 1; 
        unsigned int versionWithoutRecentChangesIsNotLastOpened : 1; 
        unsigned int ignoreUndoAndRedoNotifications : 1; 
        unsigned int editingTemporarilyDisabled : 1; 
        unsigned int editingDisabledDueToPermissions : 1; 
        unsigned int isRegisteredAsFilePresenter : 1; 
        unsigned int movingFile : 1; 
        unsigned int savingError : 1; 
        unsigned int inConflict : 1; 
        unsigned int needToStopAccessingSecurityScopedResource : 1; 
    }  _docFlags;
    NSLock * _documentPropertyLock;
    NSObject<OS_dispatch_queue> * _fileAccessQueue;
    NSObject<OS_dispatch_semaphore> * _fileAccessSemaphore;
    NSDate * _fileModificationDate;
    NSOperationQueue * _filePresenterQueue;
    NSString * _fileType;
    NSURL * _fileURL;
    double  _lastPreservationTime;
    double  _lastSaveTime;
    NSString * _localizedName;
    NSObject<OS_dispatch_queue> * _openingQueue;
    NSProgress * _progress;
    id  _progressSubscriber;
    NSUndoManager * _undoManager;
    id  _versionWithoutRecentChanges;
    NSMutableArray * _versions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDocumentDifferenceSize *differenceDueToRecentChanges;
@property (nonatomic, readonly) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion;
@property (nonatomic, readonly) NSDocumentDifferenceSize *differenceSinceSaving;
@property (readonly) unsigned long long documentState;
@property (copy) NSDate *fileModificationDate;
@property (readonly, copy) NSString *fileType;
@property (readonly) NSURL *fileURL;
@property (nonatomic, readonly) bool hasUnsavedChanges;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *localizedName;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (getter=progress, setter=_setProgress:, nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) NSString *savingFileType;
@property (readonly) Class superclass;
@property (retain) NSUndoManager *undoManager;

+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4;
+ (id)_fileModificationDateForURL:(id)arg1;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(bool)arg4;
+ (id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)_url:(id)arg1 matchesURL:(id)arg2;

- (void).cxx_destruct;
- (id)_activityTypeIdentifierForCloudDocument:(bool*)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_autosaveWithCompletionHandler:(id /* block */)arg1;
- (void)_autosavingCompletedSuccessfully:(bool)arg1;
- (double)_autosavingDelay;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_clearUserActivity;
- (bool)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(id /* block */)arg3;
- (bool)_documentIsUbiquitous;
- (id)_fileOpeningQueue;
- (void)_finishSavingToURL:(id)arg1 forSaveOperation:(long long)arg2 changeCount:(id)arg3;
- (bool)_hasSavingError;
- (bool)_hasUnsavedChanges;
- (void)_invalidateCurrentUserActivity;
- (bool)_isEditingDisabledDueToPermissions;
- (bool)_isEditingTemporarilyDisabled;
- (bool)_isInConflict;
- (bool)_isInOpen;
- (bool)_isOpen;
- (void)_lockFileAccessQueueAndPerformBlock:(id /* block */)arg1;
- (void)_manageUserActivity;
- (void)_performBlock:(id /* block */)arg1 synchronouslyOnQueue:(id)arg2;
- (void)_performBlockSynchronouslyOnMainThread:(id /* block */)arg1;
- (id)_presentableFileNameForSaveOperation:(long long)arg1 url:(id)arg2;
- (void)_progressPublished:(id)arg1;
- (void)_progressUnpublished;
- (void)_reallyManageUserActivity;
- (void)_registerAsFilePresenterIfNecessary;
- (void)_releaseUndoManager;
- (void)_rescheduleAutosaving;
- (void)_saveUnsavedChangesWithCompletionHandler:(id /* block */)arg1;
- (void)_scheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(bool)arg2;
- (void)_sendStateChangedNotification;
- (void)_setEditingDisabledDueToPermissions:(bool)arg1;
- (void)_setEditingTemporarilyDisabled:(bool)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setHasSavingError:(bool)arg1;
- (void)_setInConflict:(bool)arg1;
- (void)_setInOpen:(bool)arg1;
- (void)_setOpen:(bool)arg1;
- (void)_setProgress:(id)arg1;
- (void)_setUserActivity:(id)arg1;
- (bool)_shouldAllowWritingInResponseToPresenterMessage;
- (id)_titleForActivityContinuation;
- (void)_unlockFileAccessQueue;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_updateConflictState;
- (void)_updateLastUsedDate;
- (void)_updateLocalizedName;
- (void)_updatePermissionsState:(bool)arg1;
- (id)_userActivityWithActivityType:(id)arg1;
- (id)_userInfoForActivityContinuation;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)autosaveWithCompletionHandler:(id /* block */)arg1;
- (id)changeCountTokenForSaveOperation:(long long)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)differenceDueToRecentChanges;
- (id)differenceSincePreservingPreviousVersion;
- (id)differenceSinceSaving;
- (void)disableEditing;
- (unsigned long long)documentState;
- (void)enableEditing;
- (id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(long long)arg2 error:(id*)arg3;
- (id)fileModificationDate;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(long long)arg2;
- (id)fileType;
- (id)fileURL;
- (void)finishedHandlingError:(id)arg1 recovered:(bool)arg2;
- (void)handleError:(id)arg1 userInteractionPermitted:(bool)arg2;
- (bool)hasUnsavedChanges;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (bool)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)localizedName;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(id /* block */)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemHasUnsavedChangesWithCompletionHandler:(id /* block */)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (id)progress;
- (bool)readFromURL:(id)arg1 error:(id*)arg2;
- (void)relinquishPresentedItemToReader:(id /* block */)arg1;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToURL:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)savingFileType;
- (void)setFileModificationDate:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (id)undoManager;
- (void)updateChangeCount:(long long)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(long long)arg2;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;
- (void)userInteractionNoLongerPermittedForError:(id)arg1;
- (bool)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id*)arg5;
- (bool)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;

@end