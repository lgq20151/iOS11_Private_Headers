/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouter : NSObject <NSSecureCoding> {
    long long  _destination;
    NSSet * _hidEventDescriptors;
}

@property (readonly) long long destination;
@property (readonly, retain) NSSet *hidEventDescriptors;

+ (id)defaultEventRouters;
+ (id)defaultFocusedAppEventRouter;
+ (id)defaultSystemAppEventRouter;
+ (id)routerWithDestination:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void)addHIDEventDescriptors:(id)arg1;
- (bool)containsDescriptor:(id)arg1;
- (void)dealloc;
- (id)description;
- (long long)destination;
- (id)dumpContents;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hidEventDescriptors;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(long long)arg1;
- (id)initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)removeHIDEventDescriptors:(id)arg1;
- (bool)specifiesDescriptor:(id)arg1;
- (id)stringForDestination:(long long)arg1;

@end
