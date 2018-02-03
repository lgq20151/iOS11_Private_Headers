/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
    long long  _terminalStatus;
}

- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2;
- (long long)status;

@end
