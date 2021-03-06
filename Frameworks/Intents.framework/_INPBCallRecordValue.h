/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCallRecordValue : PBCodable <NSCopying> {
    int  _callCapability;
    _INPBCallMetrics * _callMetrics;
    int  _callType;
    _INPBContactValue * _caller;
    _INPBDateTime * _dateCreated;
    struct { 
        unsigned int callCapability : 1; 
        unsigned int callType : 1; 
        unsigned int unseen : 1; 
    }  _has;
    NSString * _identifier;
    PBUnknownFields * _unknownFields;
    bool  _unseen;
}

@property (nonatomic) int callCapability;
@property (nonatomic, retain) _INPBCallMetrics *callMetrics;
@property (nonatomic) int callType;
@property (nonatomic, retain) _INPBContactValue *caller;
@property (nonatomic, retain) _INPBDateTime *dateCreated;
@property (nonatomic) bool hasCallCapability;
@property (nonatomic, readonly) bool hasCallMetrics;
@property (nonatomic) bool hasCallType;
@property (nonatomic, readonly) bool hasCaller;
@property (nonatomic, readonly) bool hasDateCreated;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasUnseen;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool unseen;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsCallCapability:(id)arg1;
- (int)StringAsCallType:(id)arg1;
- (int)callCapability;
- (id)callCapabilityAsString:(int)arg1;
- (id)callMetrics;
- (int)callType;
- (id)callTypeAsString:(int)arg1;
- (id)caller;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallCapability;
- (bool)hasCallMetrics;
- (bool)hasCallType;
- (bool)hasCaller;
- (bool)hasDateCreated;
- (bool)hasIdentifier;
- (bool)hasUnseen;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallCapability:(int)arg1;
- (void)setCallMetrics:(id)arg1;
- (void)setCallType:(int)arg1;
- (void)setCaller:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setHasCallCapability:(bool)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasUnseen:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUnseen:(bool)arg1;
- (id)unknownFields;
- (bool)unseen;
- (void)writeTo:(id)arg1;

@end
