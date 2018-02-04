/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWallpaperAlbum : PLManagedAlbum

@property (nonatomic) short wallpaperAlbumType;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)wallpaperAlbumInLibrary:(id)arg1;

- (id)_kindDescription;
- (void)awakeFromInsert;
- (id)localizedTitle;
- (unsigned long long)photosCount;
- (id)posterImage;

@end