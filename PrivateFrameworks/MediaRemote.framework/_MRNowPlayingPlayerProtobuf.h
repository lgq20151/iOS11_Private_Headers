/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying> {
    NSString * _displayName;
    struct { 
        unsigned int isDefaultPlayer : 1; 
    }  _has;
    NSString * _identifier;
    bool  _isDefaultPlayer;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsDefaultPlayer;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isDefaultPlayer;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasIdentifier;
- (bool)hasIsDefaultPlayer;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isDefaultPlayer;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasIsDefaultPlayer:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDefaultPlayer:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
