/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSCompoundLazyPropertyList : _LSLazyPropertyList {
    NSArray * _plists;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLazyPropertyLists:(id)arg1;

@end