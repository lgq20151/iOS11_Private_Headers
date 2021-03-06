/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *routeAsZilchBinary;
@property (nonatomic, copy) NSData *routeId;
@property (nonatomic, copy) NSData *sessionState;
@property (readonly) Class superclass;

+ (id)route;
+ (id)routeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)routeAsZilchBinary;
- (id)routeId;
- (id)sessionState;
- (void)setRouteAsZilchBinary:(id)arg1;
- (void)setRouteId:(id)arg1;
- (void)setSessionState:(id)arg1;

@end
