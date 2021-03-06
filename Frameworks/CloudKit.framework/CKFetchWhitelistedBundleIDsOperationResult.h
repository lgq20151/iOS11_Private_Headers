/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchWhitelistedBundleIDsOperationResult : CKOperationResult <NSSecureCoding> {
    NSArray * _bundleIDs;
}

@property (nonatomic, copy) NSArray *bundleIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)bundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIDs:(id)arg1;

@end
