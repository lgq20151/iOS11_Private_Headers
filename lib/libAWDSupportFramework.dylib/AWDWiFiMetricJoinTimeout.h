/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricJoinTimeout : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _associationStates;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _channels;
    struct { 
        unsigned int sequence : 1; 
    }  _has;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _joinClassificationInfos;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _joinTargetClassificationInfos;
    unsigned int  _sequence;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _totalNumberOfJoinAttempts;
}

@property (nonatomic, readonly) unsigned int*associationStates;
@property (nonatomic, readonly) unsigned long long associationStatesCount;
@property (nonatomic, readonly) unsigned int*channels;
@property (nonatomic, readonly) unsigned long long channelsCount;
@property (nonatomic) bool hasSequence;
@property (nonatomic, readonly) unsigned int*joinClassificationInfos;
@property (nonatomic, readonly) unsigned long long joinClassificationInfosCount;
@property (nonatomic, readonly) unsigned int*joinTargetClassificationInfos;
@property (nonatomic, readonly) unsigned long long joinTargetClassificationInfosCount;
@property (nonatomic) unsigned int sequence;
@property (nonatomic, readonly) unsigned int*totalNumberOfJoinAttempts;
@property (nonatomic, readonly) unsigned long long totalNumberOfJoinAttemptsCount;

- (void)addAssociationState:(unsigned int)arg1;
- (void)addChannel:(unsigned int)arg1;
- (void)addJoinClassificationInfo:(unsigned int)arg1;
- (void)addJoinTargetClassificationInfo:(unsigned int)arg1;
- (void)addTotalNumberOfJoinAttempts:(unsigned int)arg1;
- (unsigned int)associationStateAtIndex:(unsigned long long)arg1;
- (unsigned int*)associationStates;
- (unsigned long long)associationStatesCount;
- (unsigned int)channelAtIndex:(unsigned long long)arg1;
- (unsigned int*)channels;
- (unsigned long long)channelsCount;
- (void)clearAssociationStates;
- (void)clearChannels;
- (void)clearJoinClassificationInfos;
- (void)clearJoinTargetClassificationInfos;
- (void)clearTotalNumberOfJoinAttempts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSequence;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)joinClassificationInfoAtIndex:(unsigned long long)arg1;
- (unsigned int*)joinClassificationInfos;
- (unsigned long long)joinClassificationInfosCount;
- (unsigned int)joinTargetClassificationInfoAtIndex:(unsigned long long)arg1;
- (unsigned int*)joinTargetClassificationInfos;
- (unsigned long long)joinTargetClassificationInfosCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)sequence;
- (void)setAssociationStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setChannels:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasSequence:(bool)arg1;
- (void)setJoinClassificationInfos:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setJoinTargetClassificationInfos:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setSequence:(unsigned int)arg1;
- (void)setTotalNumberOfJoinAttempts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)totalNumberOfJoinAttempts;
- (unsigned int)totalNumberOfJoinAttemptsAtIndex:(unsigned long long)arg1;
- (unsigned long long)totalNumberOfJoinAttemptsCount;
- (void)writeTo:(id)arg1;

@end
