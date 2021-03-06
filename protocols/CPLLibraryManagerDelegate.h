/* made by EzioChiu.
 */

@protocol CPLLibraryManagerDelegate <NSObject>

@required

- (void)libraryManagerDidStartSynchronization:(CPLLibraryManager *)arg1;
- (void)libraryManagerHasChangesToPull:(CPLLibraryManager *)arg1;
- (void)libraryManagerStatusDidChange:(CPLLibraryManager *)arg1;

@optional

- (NSString *)displayableNameForLibraryManager:(CPLLibraryManager *)arg1;
- (void)libraryManagerDidChangeConfiguration:(CPLLibraryManager *)arg1;
- (void)libraryManagerHasStatusChanges:(CPLLibraryManager *)arg1;

@end
