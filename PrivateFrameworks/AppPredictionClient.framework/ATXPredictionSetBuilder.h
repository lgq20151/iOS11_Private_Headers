/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXPredictionSetBuilder : NSObject {
    int  _appCount;
    NSMutableData * _data;
    bool  _finished;
}

- (void).cxx_destruct;
- (id)finish;
- (id)init;
- (void)recordApp:(id)arg1 score:(double)arg2;

@end
