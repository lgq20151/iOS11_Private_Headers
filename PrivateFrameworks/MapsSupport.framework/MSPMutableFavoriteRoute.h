/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableFavoriteRoute : MSPMutableFavorite <MSPFavoriteRoute>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) NSUUID *storageIdentifier;
@property (readonly) Class superclass;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (id)endWaypoint;
- (id)initWithBookmarkStorage:(id)arg1;
- (id)routeRequestStorage;
- (void)setRouteRequestStorage:(id)arg1;
- (id)startWaypoint;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;
- (int)transportType;

@end
