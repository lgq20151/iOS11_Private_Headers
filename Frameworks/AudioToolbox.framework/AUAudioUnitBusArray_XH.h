/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUAudioUnitBusArray_XH : AUAudioUnitBusArray {
    bool  _countWritable;
}

- (id)initWithOwner:(id)arg1 scope:(unsigned int)arg2 busses:(id)arg3 countWritable:(bool)arg4;
- (bool)isCountChangeable;
- (bool)setBusCount:(unsigned long long)arg1 error:(id*)arg2;

@end
