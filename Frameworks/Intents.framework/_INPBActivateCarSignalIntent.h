/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBActivateCarSignalIntent : PBCodable <NSCopying> {
    _INPBDataString * _carName;
    _INPBIntentMetadata * _intentMetadata;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _signals;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDataString *carName;
@property (nonatomic, readonly) bool hasCarName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) int*signals;
@property (nonatomic, readonly) unsigned long long signalsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsSignals:(id)arg1;
- (void)addSignals:(int)arg1;
- (id)carName;
- (void)clearSignals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCarName;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarName:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSignals:(int*)arg1 count:(unsigned long long)arg2;
- (int*)signals;
- (id)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)signalsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
