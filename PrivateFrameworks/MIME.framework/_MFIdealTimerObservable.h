/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFIdealTimerObservable : MFObservable {
    <MFObservable> * _input;
    double  _interval;
    <MFScheduler> * _scheduler;
}

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 timeInterval:(double)arg2 scheduler:(id)arg3;
- (id)subscribe:(id)arg1;

@end