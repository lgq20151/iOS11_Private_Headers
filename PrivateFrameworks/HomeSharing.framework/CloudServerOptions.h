/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface CloudServerOptions : NSObject {
    bool  _prohibitArtworkPrefetch;
    bool  _prohibitLibraryUpload;
    bool  _supportsAutomaticEnablingiCloudMusicLibrary;
}

@property (nonatomic) bool prohibitArtworkPrefetch;
@property (nonatomic) bool prohibitLibraryUpload;
@property (nonatomic) bool supportsAutomaticEnablingiCloudMusicLibrary;

- (bool)prohibitArtworkPrefetch;
- (bool)prohibitLibraryUpload;
- (void)setProhibitArtworkPrefetch:(bool)arg1;
- (void)setProhibitLibraryUpload:(bool)arg1;
- (void)setSupportsAutomaticEnablingiCloudMusicLibrary:(bool)arg1;
- (bool)supportsAutomaticEnablingiCloudMusicLibrary;

@end
