/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUV2BridgeBus : AUAudioUnitBus {
    struct OpaqueAudioComponentInstance { } * _audioUnit;
    unsigned int  _element;
    AUAudioUnitV2Bridge * _owner;
    unsigned int  _scope;
}

- (void).cxx_destruct;
- (id)format;
- (id)initWithOwner:(id)arg1 au:(struct OpaqueAudioComponentInstance { }*)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;
- (void)setEnabled:(bool)arg1;
- (bool)setFormat:(id)arg1 error:(id*)arg2;

@end
