/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCBasebandCongestionDetector : NSObject {
    VCBasebandMetrics * _basebandMetrics;
    bool  _isTargetBitrateStabilized;
    void * _logBasebandDump;
    VCRateControlMediaController * _mediaController;
    unsigned int  _mode;
    double  _notificationArrivalTime;
    unsigned int  _radioAccessTechnology;
    AVCStatisticsCollector * _statisticsCollector;
    unsigned int  _targetBitrate;
}

@property (nonatomic) bool isTargetBitrateStabilized;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) unsigned int targetBitrate;

- (void)dealloc;
- (void)enableBasebandLogDump:(void*)arg1;
- (id)init;
- (bool)isTargetBitrateStabilized;
- (id)mediaController;
- (unsigned int)mode;
- (bool)parseBasebandNotification:(char *)arg1 size:(int)arg2 arrivalTime:(double)arg3 basebandNotification:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; } x4; }*)arg4;
- (void)printFlushAckToBasebandDump:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short*)arg4 isBDCDListReset:(bool)arg5;
- (void)processBasebandAck:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; } x4; }*)arg1;
- (bool)processBasebandNotification:(id)arg1 metaDate:(id)arg2 error:(id*)arg3;
- (bool)processBasebandNotificationWithBuffer:(char *)arg1 size:(int)arg2 arrivalTime:(double)arg3 error:(id*)arg4;
- (unsigned int)radioAccessTechnology;
- (void)setIsTargetBitrateStabilized:(bool)arg1;
- (void)setMediaController:(id)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (id)statisticsCollector;
- (unsigned int)targetBitrate;

@end
