/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWConnection : NSObject {
    NWConcrete_nw_connection * _internalConnection;
    long long  _internalConnectionState;
    NSError * _internalError;
    bool  _internalHasBetterPath;
    bool  _internalIsViable;
    NWPath * _internalPath;
}

@property (nonatomic, readonly) NWEndpoint *connectedLocalEndpoint;
@property (nonatomic, readonly) NWEndpoint *connectedRemoteEndpoint;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) NWPath *currentPath;
@property (nonatomic, readonly) NWEndpoint *endpoint;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool hasBetterPath;
@property (nonatomic, retain) NWConcrete_nw_connection *internalConnection;
@property long long internalConnectionState;
@property (retain) NSError *internalError;
@property bool internalHasBetterPath;
@property bool internalIsViable;
@property (retain) NWPath *internalPath;
@property (nonatomic, readonly) NWParameters *parameters;
@property (nonatomic, readonly) unsigned int tlsConnectionTime;
@property (getter=isViable, nonatomic, readonly) bool viable;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)connectionWithConnectedSocket:(int)arg1;
+ (id)connectionWithEndpoint:(id)arg1 parameters:(id)arg2;
+ (id)connectionWithInternalConnection:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelCurrentEndpoint;
- (id)connectedLocalEndpoint;
- (id)connectedRemoteEndpoint;
- (long long)connectionState;
- (id)copyCurrentPath;
- (id)copyError;
- (id)currentPath;
- (void)dumpTimestamps;
- (id)endpoint;
- (id)error;
- (void)forceCancel;
- (int)getConnectedSocket;
- (bool)hasBetterPath;
- (id)initWithConnectedSocket:(int)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithInternalConnection:(id)arg1;
- (id)internalConnection;
- (long long)internalConnectionState;
- (id)internalError;
- (bool)internalHasBetterPath;
- (bool)internalIsViable;
- (id)internalPath;
- (bool)isViable;
- (id)parameters;
- (void)setInternalConnection:(id)arg1;
- (void)setInternalConnectionState:(long long)arg1;
- (void)setInternalError:(id)arg1;
- (void)setInternalHasBetterPath:(bool)arg1;
- (void)setInternalIsViable:(bool)arg1;
- (void)setInternalPath:(id)arg1;
- (void)start;
- (bool)startTLSWithSessionID:(id)arg1;
- (unsigned int)tlsConnectionTime;

@end
