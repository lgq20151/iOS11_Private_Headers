/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCIAdConfiguration : NSObject {
    NTPBIAdConfig * _pbConfig;
    bool  _segmentsEnabled;
    long long  _segmentsHistoryWindowInterval;
    long long  _segmentsMinimumArticleCount;
    long long  _segmentsSubmissionFrequency;
    double  _segmentsThreshold;
}

@property (getter=areSegmentsEnabled, nonatomic, readonly) bool segmentsEnabled;
@property (nonatomic, readonly) long long segmentsHistoryWindowInterval;
@property (nonatomic, readonly) long long segmentsMinimumArticleCount;
@property (nonatomic, readonly) long long segmentsSubmissionFrequency;
@property (nonatomic, readonly) double segmentsThreshold;

- (void).cxx_destruct;
- (bool)areSegmentsEnabled;
- (unsigned long long)hash;
- (id)initWithPBIAdConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)segmentsHistoryWindowInterval;
- (long long)segmentsMinimumArticleCount;
- (long long)segmentsSubmissionFrequency;
- (double)segmentsThreshold;

@end
