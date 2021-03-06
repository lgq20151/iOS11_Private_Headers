/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharedServerItem : BRCServerItem

- (id)aliasDerivedStructure;
- (id)asSharedItem;
- (id)fallbackParentAppLibraryOnFS;
- (id)fallbackParentItemIDOnFS;
- (id)fallbackParentItemOnFS;
- (id)fallbackParentServerItemOnFS;
- (bool)isSharedItem;
- (bool)isSharedToMeChildItem;
- (bool)isSharedToMeTopLevelItem;
- (id)parentItemIDOnFS;
- (id)parentItemIDOnFSInDB:(id)arg1;
- (id)parentItemOnFS;
- (id)parentLocalItemOnFS;
- (id)parentZoneOnFS;
- (id)st;

@end
