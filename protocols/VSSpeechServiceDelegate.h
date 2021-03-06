/* made by EzioChiu.
 */

@protocol VSSpeechServiceDelegate <NSObject>

@required

- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(bool)arg1 error:(NSError *)arg2;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1 error:(NSError *)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidReceiveTimingInfo:(NSArray *)arg1;
- (oneway void)speechRequestDidStart;
- (oneway void)speechRequestDidStopWithSuccess:(bool)arg1 phonemesSpoken:(NSString *)arg2 error:(NSError *)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1;
- (oneway void)synthesisRequestDidFinishWithInstrumentMetrics:(VSInstrumentMetrics *)arg1 error:(NSError *)arg2;

@end
