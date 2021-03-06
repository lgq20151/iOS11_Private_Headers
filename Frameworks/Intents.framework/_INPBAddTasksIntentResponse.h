/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAddTasksIntentResponse : PBCodable <NSCopying> {
    NSMutableArray * _addedTasks;
    _INPBTaskList * _modifiedTaskList;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *addedTasks;
@property (nonatomic, readonly) bool hasModifiedTaskList;
@property (nonatomic, retain) _INPBTaskList *modifiedTaskList;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)addedTasksType;
+ (id)options;

- (void).cxx_destruct;
- (void)addAddedTasks:(id)arg1;
- (id)addedTasks;
- (id)addedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)addedTasksCount;
- (void)clearAddedTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModifiedTaskList;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedTaskList;
- (bool)readFrom:(id)arg1;
- (void)setAddedTasks:(id)arg1;
- (void)setModifiedTaskList:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
