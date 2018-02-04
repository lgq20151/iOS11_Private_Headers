/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSetPreferredPaymentApplicationResponse : PBCodable <NSCopying> {
    NSString * _passID;
    NSString * _preferredApplicationAID;
}

@property (nonatomic, readonly) bool hasPassID;
@property (nonatomic, readonly) bool hasPreferredApplicationAID;
@property (nonatomic, retain) NSString *passID;
@property (nonatomic, retain) NSString *preferredApplicationAID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassID;
- (bool)hasPreferredApplicationAID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (id)preferredApplicationAID;
- (bool)readFrom:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)setPreferredApplicationAID:(id)arg1;
- (void)writeTo:(id)arg1;

@end