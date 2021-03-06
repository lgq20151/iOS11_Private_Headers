/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAVMediaObject : CKMediaObject {
    double  _duration;
    bool  _durationLoaded;
}

@property (nonatomic) double duration;

+ (id)durationCache;

- (id)description;
- (double)duration;
- (void)setDuration:(double)arg1;

@end
