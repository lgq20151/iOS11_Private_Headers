/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *handler;
@property (nonatomic, copy) NSString *handlerBody;
@property (nonatomic) bool isAttribute;
@property (nonatomic, retain) RWIProtocolDebuggerLocation *location;
@property (nonatomic) int nodeId;
@property (nonatomic) bool once;
@property (nonatomic) bool passive;
@property (nonatomic, copy) NSString *sourceName;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) bool useCapture;

- (id)handler;
- (id)handlerBody;
- (id)initWithType:(id)arg1 useCapture:(bool)arg2 isAttribute:(bool)arg3 nodeId:(int)arg4 handlerBody:(id)arg5;
- (bool)isAttribute;
- (id)location;
- (int)nodeId;
- (bool)once;
- (bool)passive;
- (void)setHandler:(id)arg1;
- (void)setHandlerBody:(id)arg1;
- (void)setIsAttribute:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNodeId:(int)arg1;
- (void)setOnce:(bool)arg1;
- (void)setPassive:(bool)arg1;
- (void)setSourceName:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUseCapture:(bool)arg1;
- (id)sourceName;
- (id)type;
- (bool)useCapture;

@end