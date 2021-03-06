/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedManagedObjectContext : PLManagedObjectContext

- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2;
- (bool)isUserInterfaceContext;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;

@end
