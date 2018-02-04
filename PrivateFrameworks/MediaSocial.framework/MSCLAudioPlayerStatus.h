/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAudioPlayerStatus : NSObject <NSCopying> {
    double  _currentTime;
    double  _duration;
    NSError * _error;
    long long  _state;
}

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentTime;
- (double)duration;
- (id)error;
- (void)setCurrentTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setError:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end