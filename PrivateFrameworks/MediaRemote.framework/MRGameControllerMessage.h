/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerMessage : MRProtocolMessage {
    void * _event;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) unsigned long long controllerID;
@property (nonatomic, readonly) void*event;

- (unsigned long long)controllerID;
- (void*)event;
- (id)initWithGameControllerEvent:(void*)arg1 controllerID:(unsigned long long)arg2;
- (unsigned long long)priority;
- (bool)shouldLog;
- (unsigned long long)type;

@end
