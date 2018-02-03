/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigCommChannelUUIDCommunicationChannelManager : NSObject <AVFigRoutingContextCommunicationChannelManager> {
    struct __CFDictionary { } * _communicationChannelsForUUIDs;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    struct __CFString { } * _outgoingCommChannelUUID;
    AVFigRoutingContextOutputContextImpl * _parentOutputContextImpl;
    struct OpaqueFigRoutingContext { } * _routingContext;
    AVWeakReference * _weakObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property AVFigRoutingContextOutputContextImpl *parentOutputContextImpl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceiveData:(struct __CFData { }*)arg1 fromCommChannelUUID:(struct __CFString { }*)arg2;
- (void)dealloc;
- (void)didCloseCommChannelUUID:(struct __CFString { }*)arg1;
- (id)init;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (id)outgoingCommunicationChannel;
- (id)parentOutputContextImpl;
- (void)setParentOutputContextImpl:(id)arg1;

@end
