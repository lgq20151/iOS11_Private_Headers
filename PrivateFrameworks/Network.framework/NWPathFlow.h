/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPathFlow : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_path_flow> * _internalPathFlow;
}

@property (getter=isAssigned, nonatomic, readonly) bool assigned;
@property (nonatomic, readonly) NWInterface *interface;
@property (readonly) NSObject<OS_nw_path_flow> *internalPathFlow;
@property (nonatomic, readonly) NWEndpoint *localEndpoint;
@property (nonatomic, readonly) NSUUID *nexusAgent;
@property (nonatomic, readonly) NSUUID *nexusInstance;
@property (nonatomic, readonly) unsigned int nexusPort;
@property (nonatomic, readonly) NWEndpoint *remoteEndpoint;
@property (getter=isViable, nonatomic, readonly) bool viable;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)initWithPathFlow:(id)arg1;
- (id)interface;
- (id)internalPathFlow;
- (bool)isAssigned;
- (bool)isViable;
- (id)localEndpoint;
- (id)nexusAgent;
- (id)nexusInstance;
- (unsigned int)nexusPort;
- (id)privateDescription;
- (id)remoteEndpoint;

@end
