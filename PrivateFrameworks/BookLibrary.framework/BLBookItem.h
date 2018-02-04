/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLBookItem : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSString * _album;
    NSString * _author;
    NSString * _coverImagePath;
    NSDictionary * _entry;
    NSString * _feedURL;
    NSURL * _fileURL;
    NSString * _folderName;
    bool  _iTunesU;
    NSString * _identifier;
    NSString * _itunesuAssetID;
    NSDate * _lastUserAccessDate;
    NSString * _legacyUniqueIdentifier;
    NSURL * _permlink;
    NSString * _persistentIdentifier;
    NSString * _publicationVersion;
    NSString * _publisherIdentifier;
    long long  _purgePriority;
    bool  _sample;
    NSString * _storeIdentifier;
    NSString * _temporaryIdentifier;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *coverImagePath;
@property (nonatomic, retain) NSDictionary *entry;
@property (nonatomic, copy) NSString *feedURL;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, copy) NSString *folderName;
@property (nonatomic) bool iTunesU;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *itunesuAssetID;
@property (nonatomic, retain) NSDate *lastUserAccessDate;
@property (nonatomic, copy) NSString *legacyUniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, retain) NSURL *permlink;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic, copy) NSString *publicationVersion;
@property (nonatomic, copy) NSString *publisherIdentifier;
@property (nonatomic) long long purgePriority;
@property (getter=isSample, nonatomic) bool sample;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSString *temporaryIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_cloudCoverImageData;
- (id)_cloudDictionaryRepresentation;
- (void)_setCloudCoverImageData:(id)arg1;
- (id)album;
- (id)author;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverImagePath;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entry;
- (id)feedURL;
- (id)fileURL;
- (id)folderName;
- (bool)iTunesU;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithEduCloudData:(id)arg1 path:(id)arg2;
- (id)initWithEntry:(id)arg1 basePath:(id)arg2;
- (id)initWithStoreDownload:(id)arg1 permlink:(id)arg2 title:(id)arg3;
- (bool)isSample;
- (id)itunesuAssetID;
- (id)lastUserAccessDate;
- (id)legacyUniqueIdentifier;
- (id)mimeType;
- (id)path;
- (id)permlink;
- (id)persistentIdentifier;
- (id)publicationVersion;
- (id)publisherIdentifier;
- (long long)purgePriority;
- (void)setAlbum:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCoverImagePath:(id)arg1;
- (void)setEntry:(id)arg1;
- (void)setFeedURL:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFolderName:(id)arg1;
- (void)setITunesU:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItunesuAssetID:(id)arg1;
- (void)setLastUserAccessDate:(id)arg1;
- (void)setLegacyUniqueIdentifier:(id)arg1;
- (void)setPermlink:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setPublicationVersion:(id)arg1;
- (void)setPublisherIdentifier:(id)arg1;
- (void)setPurgePriority:(long long)arg1;
- (void)setSample:(bool)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setTemporaryIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)storeIdentifier;
- (id)temporaryIdentifier;
- (id)title;
- (long long)type;

@end