/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBasebandPowerToolKPIs : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _armUtilityPDFs;
    int  _armUtilityThresholdPoint;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeBackgroundActivityARMUtilitys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeBackgroundActivityDurations;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeCumulativeARMUtilitys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeCumulativeDurations;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeMarginalCoverageARMUtilitys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeMarginalCoverageDurations;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeOOSARMUtilitys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeOOSDurations;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeRACHFailARMUtilitys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeRACHFailDurations;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeStruckInDCHARMUtilitys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeStruckInDCHDurations;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeTcXONotShuttingARMUtilitys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeTcXONotShuttingDurations;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeUnknownARMUtilitys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _causeCodeUnknownDurations;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int armUtilityThresholdPoint : 1; 
        unsigned int radarPriority : 1; 
    }  _has;
    int  _radarPriority;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) int*armUtilityPDFs;
@property (nonatomic, readonly) unsigned long long armUtilityPDFsCount;
@property (nonatomic) int armUtilityThresholdPoint;
@property (nonatomic, readonly) int*causeCodeBackgroundActivityARMUtilitys;
@property (nonatomic, readonly) unsigned long long causeCodeBackgroundActivityARMUtilitysCount;
@property (nonatomic, readonly) int*causeCodeBackgroundActivityDurations;
@property (nonatomic, readonly) unsigned long long causeCodeBackgroundActivityDurationsCount;
@property (nonatomic, readonly) int*causeCodeCumulativeARMUtilitys;
@property (nonatomic, readonly) unsigned long long causeCodeCumulativeARMUtilitysCount;
@property (nonatomic, readonly) int*causeCodeCumulativeDurations;
@property (nonatomic, readonly) unsigned long long causeCodeCumulativeDurationsCount;
@property (nonatomic, readonly) int*causeCodeMarginalCoverageARMUtilitys;
@property (nonatomic, readonly) unsigned long long causeCodeMarginalCoverageARMUtilitysCount;
@property (nonatomic, readonly) int*causeCodeMarginalCoverageDurations;
@property (nonatomic, readonly) unsigned long long causeCodeMarginalCoverageDurationsCount;
@property (nonatomic, readonly) int*causeCodeOOSARMUtilitys;
@property (nonatomic, readonly) unsigned long long causeCodeOOSARMUtilitysCount;
@property (nonatomic, readonly) int*causeCodeOOSDurations;
@property (nonatomic, readonly) unsigned long long causeCodeOOSDurationsCount;
@property (nonatomic, readonly) int*causeCodeRACHFailARMUtilitys;
@property (nonatomic, readonly) unsigned long long causeCodeRACHFailARMUtilitysCount;
@property (nonatomic, readonly) int*causeCodeRACHFailDurations;
@property (nonatomic, readonly) unsigned long long causeCodeRACHFailDurationsCount;
@property (nonatomic, readonly) int*causeCodeStruckInDCHARMUtilitys;
@property (nonatomic, readonly) unsigned long long causeCodeStruckInDCHARMUtilitysCount;
@property (nonatomic, readonly) int*causeCodeStruckInDCHDurations;
@property (nonatomic, readonly) unsigned long long causeCodeStruckInDCHDurationsCount;
@property (nonatomic, readonly) int*causeCodeTcXONotShuttingARMUtilitys;
@property (nonatomic, readonly) unsigned long long causeCodeTcXONotShuttingARMUtilitysCount;
@property (nonatomic, readonly) int*causeCodeTcXONotShuttingDurations;
@property (nonatomic, readonly) unsigned long long causeCodeTcXONotShuttingDurationsCount;
@property (nonatomic, readonly) int*causeCodeUnknownARMUtilitys;
@property (nonatomic, readonly) unsigned long long causeCodeUnknownARMUtilitysCount;
@property (nonatomic, readonly) int*causeCodeUnknownDurations;
@property (nonatomic, readonly) unsigned long long causeCodeUnknownDurationsCount;
@property (nonatomic) bool hasArmUtilityThresholdPoint;
@property (nonatomic) bool hasRadarPriority;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int radarPriority;
@property (nonatomic) unsigned long long timestamp;

- (void)addArmUtilityPDF:(int)arg1;
- (void)addCauseCodeBackgroundActivityARMUtility:(int)arg1;
- (void)addCauseCodeBackgroundActivityDurations:(int)arg1;
- (void)addCauseCodeCumulativeARMUtility:(int)arg1;
- (void)addCauseCodeCumulativeDurations:(int)arg1;
- (void)addCauseCodeMarginalCoverageARMUtility:(int)arg1;
- (void)addCauseCodeMarginalCoverageDurations:(int)arg1;
- (void)addCauseCodeOOSARMUtility:(int)arg1;
- (void)addCauseCodeOOSDurations:(int)arg1;
- (void)addCauseCodeRACHFailARMUtility:(int)arg1;
- (void)addCauseCodeRACHFailDurations:(int)arg1;
- (void)addCauseCodeStruckInDCHARMUtility:(int)arg1;
- (void)addCauseCodeStruckInDCHDurations:(int)arg1;
- (void)addCauseCodeTcXONotShuttingARMUtility:(int)arg1;
- (void)addCauseCodeTcXONotShuttingDurations:(int)arg1;
- (void)addCauseCodeUnknownARMUtility:(int)arg1;
- (void)addCauseCodeUnknownDurations:(int)arg1;
- (int)armUtilityPDFAtIndex:(unsigned long long)arg1;
- (int*)armUtilityPDFs;
- (unsigned long long)armUtilityPDFsCount;
- (int)armUtilityThresholdPoint;
- (int)causeCodeBackgroundActivityARMUtilityAtIndex:(unsigned long long)arg1;
- (int*)causeCodeBackgroundActivityARMUtilitys;
- (unsigned long long)causeCodeBackgroundActivityARMUtilitysCount;
- (int*)causeCodeBackgroundActivityDurations;
- (int)causeCodeBackgroundActivityDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)causeCodeBackgroundActivityDurationsCount;
- (int)causeCodeCumulativeARMUtilityAtIndex:(unsigned long long)arg1;
- (int*)causeCodeCumulativeARMUtilitys;
- (unsigned long long)causeCodeCumulativeARMUtilitysCount;
- (int*)causeCodeCumulativeDurations;
- (int)causeCodeCumulativeDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)causeCodeCumulativeDurationsCount;
- (int)causeCodeMarginalCoverageARMUtilityAtIndex:(unsigned long long)arg1;
- (int*)causeCodeMarginalCoverageARMUtilitys;
- (unsigned long long)causeCodeMarginalCoverageARMUtilitysCount;
- (int*)causeCodeMarginalCoverageDurations;
- (int)causeCodeMarginalCoverageDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)causeCodeMarginalCoverageDurationsCount;
- (int)causeCodeOOSARMUtilityAtIndex:(unsigned long long)arg1;
- (int*)causeCodeOOSARMUtilitys;
- (unsigned long long)causeCodeOOSARMUtilitysCount;
- (int*)causeCodeOOSDurations;
- (int)causeCodeOOSDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)causeCodeOOSDurationsCount;
- (int)causeCodeRACHFailARMUtilityAtIndex:(unsigned long long)arg1;
- (int*)causeCodeRACHFailARMUtilitys;
- (unsigned long long)causeCodeRACHFailARMUtilitysCount;
- (int*)causeCodeRACHFailDurations;
- (int)causeCodeRACHFailDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)causeCodeRACHFailDurationsCount;
- (int)causeCodeStruckInDCHARMUtilityAtIndex:(unsigned long long)arg1;
- (int*)causeCodeStruckInDCHARMUtilitys;
- (unsigned long long)causeCodeStruckInDCHARMUtilitysCount;
- (int*)causeCodeStruckInDCHDurations;
- (int)causeCodeStruckInDCHDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)causeCodeStruckInDCHDurationsCount;
- (int)causeCodeTcXONotShuttingARMUtilityAtIndex:(unsigned long long)arg1;
- (int*)causeCodeTcXONotShuttingARMUtilitys;
- (unsigned long long)causeCodeTcXONotShuttingARMUtilitysCount;
- (int*)causeCodeTcXONotShuttingDurations;
- (int)causeCodeTcXONotShuttingDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)causeCodeTcXONotShuttingDurationsCount;
- (int)causeCodeUnknownARMUtilityAtIndex:(unsigned long long)arg1;
- (int*)causeCodeUnknownARMUtilitys;
- (unsigned long long)causeCodeUnknownARMUtilitysCount;
- (int*)causeCodeUnknownDurations;
- (int)causeCodeUnknownDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)causeCodeUnknownDurationsCount;
- (void)clearArmUtilityPDFs;
- (void)clearCauseCodeBackgroundActivityARMUtilitys;
- (void)clearCauseCodeBackgroundActivityDurations;
- (void)clearCauseCodeCumulativeARMUtilitys;
- (void)clearCauseCodeCumulativeDurations;
- (void)clearCauseCodeMarginalCoverageARMUtilitys;
- (void)clearCauseCodeMarginalCoverageDurations;
- (void)clearCauseCodeOOSARMUtilitys;
- (void)clearCauseCodeOOSDurations;
- (void)clearCauseCodeRACHFailARMUtilitys;
- (void)clearCauseCodeRACHFailDurations;
- (void)clearCauseCodeStruckInDCHARMUtilitys;
- (void)clearCauseCodeStruckInDCHDurations;
- (void)clearCauseCodeTcXONotShuttingARMUtilitys;
- (void)clearCauseCodeTcXONotShuttingDurations;
- (void)clearCauseCodeUnknownARMUtilitys;
- (void)clearCauseCodeUnknownDurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArmUtilityThresholdPoint;
- (bool)hasRadarPriority;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)radarPriority;
- (bool)readFrom:(id)arg1;
- (void)setArmUtilityPDFs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setArmUtilityThresholdPoint:(int)arg1;
- (void)setCauseCodeBackgroundActivityARMUtilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeBackgroundActivityDurations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeCumulativeARMUtilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeCumulativeDurations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeMarginalCoverageARMUtilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeMarginalCoverageDurations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeOOSARMUtilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeOOSDurations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeRACHFailARMUtilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeRACHFailDurations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeStruckInDCHARMUtilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeStruckInDCHDurations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeTcXONotShuttingARMUtilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeTcXONotShuttingDurations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeUnknownARMUtilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCauseCodeUnknownDurations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasArmUtilityThresholdPoint:(bool)arg1;
- (void)setHasRadarPriority:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRadarPriority:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
