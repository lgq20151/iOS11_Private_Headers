/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipTrackCommand : MPRemoteCommand {
    struct { 
        long long numberOfAvailableSkips; 
        long long skipFrequency; 
        double skipInterval; 
    }  _skipLimit;
}

@property (nonatomic) struct { long long x1; long long x2; double x3; } skipLimit;

- (id)_mediaRemoteCommandInfoOptions;
- (void)setSkipLimit:(struct { long long x1; long long x2; double x3; })arg1;
- (struct { long long x1; long long x2; double x3; })skipLimit;

@end
