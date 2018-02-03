/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSTerminationAssertionEfficacyChangedEvent : BKSAssertionEvent {
    unsigned long long  _efficacyMask;
    NSString * _targetBundleIdentifier;
}

@property (nonatomic) unsigned long long efficacyMask;
@property (nonatomic, readonly) unsigned long long maxEfficacy;
@property (nonatomic, copy) NSString *targetBundleIdentifier;

- (void)dealloc;
- (id)description;
- (unsigned long long)efficacyMask;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxEfficacy;
- (void)setEfficacyMask:(unsigned long long)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (id)targetBundleIdentifier;

@end
