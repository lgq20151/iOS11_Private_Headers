/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHost : NSObject {
    NSArray * addresses;
    NSArray * names;
    id  reserved;
}

@property (readonly, copy) NSString *address;
@property (readonly, copy) NSArray *addresses;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *names;
@property (nonatomic, retain) __NSHostExtraIvars *reserved;

+ (id)currentHost;
+ (void)flushHostCache;
+ (id)hostWithAddress:(id)arg1;
+ (id)hostWithName:(id)arg1;
+ (bool)isHostCacheEnabled;
+ (void)setHostCacheEnabled:(bool)arg1;

- (void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(id /* block */)arg3;
- (id)_thingToResolve;
- (id)address;
- (id)addresses;
- (void)blockingResolveUntil:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)initToResolve:(id)arg1 as:(int)arg2;
- (bool)isEqualToHost:(id)arg1;
- (id)localizedName;
- (id)name;
- (id)names;
- (id)reserved;
- (void)resolve:(id /* block */)arg1;
- (void)resolveCurrentHostWithHandler:(id /* block */)arg1;
- (void)setReserved:(id)arg1;

@end
