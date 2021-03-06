/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStreamTrack : RadioTrack

@property (getter=isITunesStream, nonatomic, readonly) bool ITunesStream;
@property (nonatomic, readonly, retain) NSURL *certificateURL;
@property (nonatomic, readonly, retain) NSURL *contentURL;
@property (nonatomic, readonly, retain) NSURL *keyServerURL;
@property (getter=isSkipable, nonatomic, readonly) bool skipable;

- (id)certificateURL;
- (id)contentURL;
- (bool)isITunesStream;
- (bool)isSkipable;
- (id)keyServerURL;

@end
