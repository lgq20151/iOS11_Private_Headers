/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiCallingCallEndReport : PBCodable <NSCopying> {
    NSString * _callID;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _frameErasureRateHistograms;
    unsigned int  _frameErasureRateMean;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int frameErasureRateMean : 1; 
        unsigned int jitterBufferResidencyTime95Percentile : 1; 
        unsigned int jitterBufferResidencyTimeMean : 1; 
        unsigned int jitterBufferResidencyTimeMedian : 1; 
        unsigned int jitterBufferUnderflowRateMean : 1; 
        unsigned int rtpPacketLossRateMean : 1; 
    }  _has;
    unsigned int  _jitterBufferResidencyTime95Percentile;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _jitterBufferResidencyTimeHistograms;
    unsigned int  _jitterBufferResidencyTimeMean;
    unsigned int  _jitterBufferResidencyTimeMedian;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _jitterBufferUnderflowRateHistograms;
    unsigned int  _jitterBufferUnderflowRateMean;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rtpPacketLossRateHistograms;
    unsigned int  _rtpPacketLossRateMean;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *callID;
@property (nonatomic, readonly) unsigned int*frameErasureRateHistograms;
@property (nonatomic, readonly) unsigned long long frameErasureRateHistogramsCount;
@property (nonatomic) unsigned int frameErasureRateMean;
@property (nonatomic, readonly) bool hasCallID;
@property (nonatomic) bool hasFrameErasureRateMean;
@property (nonatomic) bool hasJitterBufferResidencyTime95Percentile;
@property (nonatomic) bool hasJitterBufferResidencyTimeMean;
@property (nonatomic) bool hasJitterBufferResidencyTimeMedian;
@property (nonatomic) bool hasJitterBufferUnderflowRateMean;
@property (nonatomic) bool hasRtpPacketLossRateMean;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int jitterBufferResidencyTime95Percentile;
@property (nonatomic, readonly) unsigned int*jitterBufferResidencyTimeHistograms;
@property (nonatomic, readonly) unsigned long long jitterBufferResidencyTimeHistogramsCount;
@property (nonatomic) unsigned int jitterBufferResidencyTimeMean;
@property (nonatomic) unsigned int jitterBufferResidencyTimeMedian;
@property (nonatomic, readonly) unsigned int*jitterBufferUnderflowRateHistograms;
@property (nonatomic, readonly) unsigned long long jitterBufferUnderflowRateHistogramsCount;
@property (nonatomic) unsigned int jitterBufferUnderflowRateMean;
@property (nonatomic, readonly) unsigned int*rtpPacketLossRateHistograms;
@property (nonatomic, readonly) unsigned long long rtpPacketLossRateHistogramsCount;
@property (nonatomic) unsigned int rtpPacketLossRateMean;
@property (nonatomic) unsigned long long timestamp;

- (void)addFrameErasureRateHistogram:(unsigned int)arg1;
- (void)addJitterBufferResidencyTimeHistogram:(unsigned int)arg1;
- (void)addJitterBufferUnderflowRateHistogram:(unsigned int)arg1;
- (void)addRtpPacketLossRateHistogram:(unsigned int)arg1;
- (id)callID;
- (void)clearFrameErasureRateHistograms;
- (void)clearJitterBufferResidencyTimeHistograms;
- (void)clearJitterBufferUnderflowRateHistograms;
- (void)clearRtpPacketLossRateHistograms;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)frameErasureRateHistogramAtIndex:(unsigned long long)arg1;
- (unsigned int*)frameErasureRateHistograms;
- (unsigned long long)frameErasureRateHistogramsCount;
- (unsigned int)frameErasureRateMean;
- (bool)hasCallID;
- (bool)hasFrameErasureRateMean;
- (bool)hasJitterBufferResidencyTime95Percentile;
- (bool)hasJitterBufferResidencyTimeMean;
- (bool)hasJitterBufferResidencyTimeMedian;
- (bool)hasJitterBufferUnderflowRateMean;
- (bool)hasRtpPacketLossRateMean;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)jitterBufferResidencyTime95Percentile;
- (unsigned int)jitterBufferResidencyTimeHistogramAtIndex:(unsigned long long)arg1;
- (unsigned int*)jitterBufferResidencyTimeHistograms;
- (unsigned long long)jitterBufferResidencyTimeHistogramsCount;
- (unsigned int)jitterBufferResidencyTimeMean;
- (unsigned int)jitterBufferResidencyTimeMedian;
- (unsigned int)jitterBufferUnderflowRateHistogramAtIndex:(unsigned long long)arg1;
- (unsigned int*)jitterBufferUnderflowRateHistograms;
- (unsigned long long)jitterBufferUnderflowRateHistogramsCount;
- (unsigned int)jitterBufferUnderflowRateMean;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rtpPacketLossRateHistogramAtIndex:(unsigned long long)arg1;
- (unsigned int*)rtpPacketLossRateHistograms;
- (unsigned long long)rtpPacketLossRateHistogramsCount;
- (unsigned int)rtpPacketLossRateMean;
- (void)setCallID:(id)arg1;
- (void)setFrameErasureRateHistograms:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setFrameErasureRateMean:(unsigned int)arg1;
- (void)setHasFrameErasureRateMean:(bool)arg1;
- (void)setHasJitterBufferResidencyTime95Percentile:(bool)arg1;
- (void)setHasJitterBufferResidencyTimeMean:(bool)arg1;
- (void)setHasJitterBufferResidencyTimeMedian:(bool)arg1;
- (void)setHasJitterBufferUnderflowRateMean:(bool)arg1;
- (void)setHasRtpPacketLossRateMean:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setJitterBufferResidencyTime95Percentile:(unsigned int)arg1;
- (void)setJitterBufferResidencyTimeHistograms:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setJitterBufferResidencyTimeMean:(unsigned int)arg1;
- (void)setJitterBufferResidencyTimeMedian:(unsigned int)arg1;
- (void)setJitterBufferUnderflowRateHistograms:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setJitterBufferUnderflowRateMean:(unsigned int)arg1;
- (void)setRtpPacketLossRateHistograms:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setRtpPacketLossRateMean:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
