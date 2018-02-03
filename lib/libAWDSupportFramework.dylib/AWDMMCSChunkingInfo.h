/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSChunkingInfo : PBCodable <NSCopying> {
    long long  _byteCount;
    bool  _cancelled;
    long long  _chunkCount;
    NSMutableArray * _chunkingErrors;
    long long  _duration;
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int byteCount : 1; 
        unsigned int chunkCount : 1; 
        unsigned int duration : 1; 
        unsigned int startTime : 1; 
        unsigned int errorCode : 1; 
        unsigned int cancelled : 1; 
    }  _has;
    long long  _startTime;
}

@property (nonatomic) long long byteCount;
@property (nonatomic) bool cancelled;
@property (nonatomic) long long chunkCount;
@property (nonatomic, retain) NSMutableArray *chunkingErrors;
@property (nonatomic) long long duration;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasByteCount;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasChunkCount;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) long long startTime;

+ (Class)chunkingErrorType;

- (void)addChunkingError:(id)arg1;
- (long long)byteCount;
- (bool)cancelled;
- (long long)chunkCount;
- (id)chunkingErrorAtIndex:(unsigned long long)arg1;
- (id)chunkingErrors;
- (unsigned long long)chunkingErrorsCount;
- (void)clearChunkingErrors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasByteCount;
- (bool)hasCancelled;
- (bool)hasChunkCount;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setByteCount:(long long)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setChunkCount:(long long)arg1;
- (void)setChunkingErrors:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasByteCount:(bool)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasChunkCount:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (void)writeTo:(id)arg1;

@end
