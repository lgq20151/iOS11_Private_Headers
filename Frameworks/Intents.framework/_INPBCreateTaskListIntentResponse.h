/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCreateTaskListIntentResponse : PBCodable <NSCopying> {
    _INPBTaskList * _createdTaskList;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBTaskList *createdTaskList;
@property (nonatomic, readonly) bool hasCreatedTaskList;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdTaskList;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreatedTaskList;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedTaskList:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
