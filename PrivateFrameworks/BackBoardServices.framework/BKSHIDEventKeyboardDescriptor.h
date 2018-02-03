/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventKeyboardDescriptor : BKSHIDEventDescriptor {
    unsigned int  _page;
    unsigned int  _usage;
}

@property (readonly) unsigned int page;
@property (readonly) unsigned int usage;

+ (id)descriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (id)_initWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 eventType:(unsigned int)arg3;
- (bool)describes:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)page;
- (unsigned int)usage;

@end
