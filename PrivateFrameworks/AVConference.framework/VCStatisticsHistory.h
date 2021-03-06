/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCStatisticsHistory : NSObject {
    int  _currentPacketHistoryIndex;
    struct VCStatisticsPacketHistory { 
        unsigned int packetId; 
        unsigned int totalPacketCount; 
        double timestamp; 
    }  _packetHistory;
    int  _packetHistorySize;
}

- (void)addPacketId:(unsigned int)arg1 totalPacketCount:(unsigned int)arg2 time:(double)arg3;
- (bool)getTimestampWithPacketId:(unsigned int)arg1 timestamp:(double*)arg2;
- (bool)getTotalPacketCountWithPacketId:(unsigned int)arg1 totalPacketCount:(unsigned int*)arg2;

@end
