/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveAncestorsResponseAncestor : PBCodable <NSCopying> {
    NSData * _parentChainPrivateKey;
    CKDPProtectionInfo * _parentChainProtectionInfo;
    CKDPRecordIdentifier * _parentIdentifier;
    CKDPProtectionInfo * _parentRecordProtectionInfo;
    CKDPRecordIdentifier * _recordIdentifier;
}

@property (nonatomic, readonly) bool hasParentChainPrivateKey;
@property (nonatomic, readonly) bool hasParentChainProtectionInfo;
@property (nonatomic, readonly) bool hasParentIdentifier;
@property (nonatomic, readonly) bool hasParentRecordProtectionInfo;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, retain) NSData *parentChainPrivateKey;
@property (nonatomic, retain) CKDPProtectionInfo *parentChainProtectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *parentIdentifier;
@property (nonatomic, retain) CKDPProtectionInfo *parentRecordProtectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasParentChainPrivateKey;
- (bool)hasParentChainProtectionInfo;
- (bool)hasParentIdentifier;
- (bool)hasParentRecordProtectionInfo;
- (bool)hasRecordIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parentChainPrivateKey;
- (id)parentChainProtectionInfo;
- (id)parentIdentifier;
- (id)parentRecordProtectionInfo;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setParentChainPrivateKey:(id)arg1;
- (void)setParentChainProtectionInfo:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setParentRecordProtectionInfo:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end