/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFileProperties : NSObject {
    bool  _burstFavorite;
    bool  _burstPicked;
    NSString * _burstUUID;
    NSString * _createdFilename;
    double  _duration;
    bool  _fetchingMetadata;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fetchingMetadataLock;
    bool  _fetchingThumbnail;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fetchingThumbnailLock;
    long long  _fileSize;
    bool  _firstPicked;
    NSString * _groupUUID;
    bool  _hasMetadata;
    bool  _hasOverriddenOrientation;
    bool  _hasThumbnail;
    bool  _highFramerate;
    NSMutableDictionary * _metadata;
    NSMutableDictionary * _metadata_hidden;
    unsigned long long  _orientation;
    NSString * _originalFilename;
    struct CGImage { } * _originalThumbnail;
    NSString * _originatingAssetID;
    bool  _raw;
    NSString * _relatedUUID;
    bool  _retrievedMetadata;
    bool  _retrievedThumbnail;
    NSMutableArray * _sidecarFiles;
    struct CGImage { } * _thumbnail;
    bool  _timeLapse;
}

@property bool burstFavorite;
@property bool burstPicked;
@property (retain) NSString *burstUUID;
@property (retain) NSString *createdFilename;
@property double duration;
@property bool fetchingMetadata;
@property bool fetchingThumbnail;
@property long long fileSize;
@property bool firstPicked;
@property (retain) NSString *groupUUID;
@property bool hasMetadata;
@property bool hasOverriddenOrientation;
@property bool hasThumbnail;
@property bool highFramerate;
@property (retain) NSMutableDictionary *metadata;
@property (retain) NSMutableDictionary *metadata_hidden;
@property unsigned long long orientation;
@property (retain) NSString *originalFilename;
@property struct CGImage { }*originalThumbnail;
@property (retain) NSString *originatingAssetID;
@property (getter=isRaw) bool raw;
@property (retain) NSString *relatedUUID;
@property bool retrievedMetadata;
@property bool retrievedThumbnail;
@property (retain) NSMutableArray *sidecarFiles;
@property struct CGImage { }*thumbnail;
@property bool timeLapse;

- (bool)burstFavorite;
- (bool)burstPicked;
- (id)burstUUID;
- (id)createdFilename;
- (void)dealloc;
- (double)duration;
- (bool)fetchingMetadata;
- (bool)fetchingThumbnail;
- (long long)fileSize;
- (void)finalize;
- (bool)firstPicked;
- (id)groupUUID;
- (bool)hasMetadata;
- (bool)hasOverriddenOrientation;
- (bool)hasThumbnail;
- (bool)highFramerate;
- (id)init;
- (bool)isRaw;
- (id)metadata;
- (id)metadata_hidden;
- (unsigned long long)orientation;
- (id)originalFilename;
- (struct CGImage { }*)originalThumbnail;
- (id)originatingAssetID;
- (id)relatedUUID;
- (bool)retrievedMetadata;
- (bool)retrievedThumbnail;
- (void)setBurstFavorite:(bool)arg1;
- (void)setBurstPicked:(bool)arg1;
- (void)setBurstUUID:(id)arg1;
- (void)setCreatedFilename:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFetchingMetadata:(bool)arg1;
- (void)setFetchingThumbnail:(bool)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setFirstPicked:(bool)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setHasOverriddenOrientation:(bool)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setHighFramerate:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadata_hidden:(id)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setOriginalThumbnail:(struct CGImage { }*)arg1;
- (void)setOriginatingAssetID:(id)arg1;
- (void)setRaw:(bool)arg1;
- (void)setRelatedUUID:(id)arg1;
- (void)setRetrievedMetadata:(bool)arg1;
- (void)setRetrievedThumbnail:(bool)arg1;
- (void)setSidecarFiles:(id)arg1;
- (void)setThumbnail:(struct CGImage { }*)arg1;
- (void)setTimeLapse:(bool)arg1;
- (id)sidecarFiles;
- (struct CGImage { }*)thumbnail;
- (bool)timeLapse;

@end
