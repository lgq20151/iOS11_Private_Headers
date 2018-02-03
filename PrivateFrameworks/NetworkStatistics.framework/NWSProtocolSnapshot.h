/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWSProtocolSnapshot : NWSSnapshot {
    bool  _countsIncludeHeaderOverhead;
    int  _epid;
    unsigned long long  _eupid;
    NSString * _euuid;
    double  _flowDuration;
    unsigned long long  _flowStartContinuousTime;
    NSDate * _flowStartTimestamp;
    bool  _interfaceAWDL;
    bool  _interfaceCellular;
    bool  _interfaceCellularViaFallback;
    bool  _interfaceExpensive;
    unsigned int  _interfaceIndex;
    bool  _interfaceLoopback;
    bool  _interfaceUnknown;
    bool  _interfaceWifi;
    bool  _interfaceWired;
    NSData * _localAddress;
    unsigned long long  _networkActivityMapPart1;
    unsigned long long  _networkActivityMapPart2;
    unsigned long long  _networkActivityMapStartTime;
    int  _processID;
    NSString * _processName;
    unsigned int  _receiveBufferSize;
    unsigned int  _receiveBufferUsed;
    NSData * _remoteAddress;
    unsigned int  _trafficClass;
    unsigned long long  _uniqueProcessID;
    NSString * _uuid;
    NSString * _vuuid;
}

@property (readonly) bool countsIncludeHeaderOverhead;
@property (readonly) int epid;
@property (readonly) unsigned long long eupid;
@property (readonly) NSString *euuid;
@property (readonly) double flowDuration;
@property (readonly) unsigned long long flowStartContinuousTime;
@property (readonly) NSDate *flowStartTimestamp;
@property (readonly) bool interfaceAWDL;
@property (readonly) bool interfaceCellular;
@property (readonly) bool interfaceCellularViaFallback;
@property (readonly) bool interfaceExpensive;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) bool interfaceLoopback;
@property (readonly) bool interfaceUnknown;
@property (readonly) bool interfaceWifi;
@property (readonly) bool interfaceWired;
@property (readonly) NSData *localAddress;
@property (readonly) unsigned long long networkActivityMapPart1;
@property (readonly) unsigned long long networkActivityMapPart2;
@property (readonly) unsigned long long networkActivityMapStartTime;
@property (readonly) int processID;
@property (readonly) NSString *processName;
@property (readonly) unsigned int receiveBufferSize;
@property (readonly) unsigned int receiveBufferUsed;
@property (readonly) NSData *remoteAddress;
@property (readonly) unsigned int trafficClass;
@property (readonly) unsigned long long uniqueProcessID;
@property (readonly) NSString *uuid;
@property (readonly) NSString *vuuid;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_createNSUUIDForBytes:(unsigned char)arg1;
- (id)_dateWithContinuousTime:(unsigned long long)arg1;
- (double)_intervalWithContinuousTime:(unsigned long long)arg1;
- (double)_referenceIntervalWithContinuousTime:(unsigned long long)arg1;
- (bool)countsIncludeHeaderOverhead;
- (int)epid;
- (unsigned long long)eupid;
- (id)euuid;
- (double)flowDuration;
- (unsigned long long)flowStartContinuousTime;
- (id)flowStartTimestamp;
- (bool)interfaceAWDL;
- (bool)interfaceCellular;
- (bool)interfaceCellularViaFallback;
- (bool)interfaceExpensive;
- (unsigned int)interfaceIndex;
- (bool)interfaceLoopback;
- (bool)interfaceUnknown;
- (bool)interfaceWifi;
- (bool)interfaceWired;
- (id)localAddress;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)networkActivityMapStartTime;
- (int)processID;
- (id)processName;
- (unsigned int)receiveBufferSize;
- (unsigned int)receiveBufferUsed;
- (id)remoteAddress;
- (unsigned int)trafficClass;
- (unsigned long long)uniqueProcessID;
- (id)uuid;
- (id)vuuid;

@end
