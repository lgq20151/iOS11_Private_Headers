/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRProtocolMessageLogger : NSObject {
    bool  _shouldLog;
    int  _token;
}

@property (nonatomic) bool shouldLog;

+ (id)sharedLogger;

- (void)dealloc;
- (id)init;
- (void)logMessage:(id)arg1 protocolMessage:(id)arg2;
- (void)setShouldLog:(bool)arg1;
- (bool)shouldLog;

@end
