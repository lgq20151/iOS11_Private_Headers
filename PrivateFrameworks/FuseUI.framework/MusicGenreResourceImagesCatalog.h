/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicGenreResourceImagesCatalog : NSObject {
    NSDictionary * _genreMappings;
    NSMutableSet * _unknownGenres;
}

+ (id)sharedGenreResourceImagesCatalog;

- (void).cxx_destruct;
- (id)_baseNameOfImageForGenreNamed:(id)arg1;
- (id)init;
- (id)nameOfImageForGenreNamed:(id)arg1;
- (void)registerGenreResouceImages;
- (id)resourceURLForGenreNamed:(id)arg1;

@end
