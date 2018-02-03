/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDescriptor : NSObject <BSDescriptionProviding, NSSecureCoding> {
    unsigned int  _hidEventType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int hidEventType;
@property (readonly) Class superclass;

+ (id)descriptorWithEventType:(unsigned int)arg1;
+ (id)reusableDescriptorWithEventType:(unsigned int)arg1;
+ (id)reusableKeyboardDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (id)reusableVendorDefinedDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (bool)describes:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)hidEventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
