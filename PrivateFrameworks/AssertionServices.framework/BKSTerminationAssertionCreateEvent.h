/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSTerminationAssertionCreateEvent : BKSTerminationAssertionUpdateEvent {
    BKSTerminationContext * _context;
    unsigned long long  _efficacy;
    NSString * _targetBundleIdentifier;
}

@property (nonatomic, retain) BKSTerminationContext *context;
@property (nonatomic) unsigned long long efficacy;
@property (nonatomic, copy) NSString *targetBundleIdentifier;

- (id)context;
- (void)dealloc;
- (id)description;
- (unsigned long long)efficacy;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEfficacy:(unsigned long long)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (id)targetBundleIdentifier;

@end
