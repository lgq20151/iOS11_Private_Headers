/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying> {
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSString * _mailboxId;
    NSMutableArray * _removedMessageIds;
}

@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic, retain) NSMutableArray *removedMessageIds;

+ (Class)removedMessageIdType;

- (void).cxx_destruct;
- (void)addRemovedMessageId:(id)arg1;
- (void)clearRemovedMessageIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasFullSyncVersion;
- (bool)hasMailboxId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)removedMessageIdAtIndex:(unsigned long long)arg1;
- (id)removedMessageIds;
- (unsigned long long)removedMessageIdsCount;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setRemovedMessageIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end