/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSIndexJob : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _bundleIDs;
    NSArray * _excludedBundleIDs;
    NSString * _extensionBundleID;
    NSArray * _identifiersToReindex;
    long long  _jobOptions;
    long long  _jobType;
    NSString * _providerIdentifier;
    NSString * _providerType;
}

@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) NSArray *excludedBundleIDs;
@property (nonatomic, retain) NSString *extensionBundleID;
@property (nonatomic, retain) NSArray *identifiersToReindex;
@property (nonatomic) long long jobOptions;
@property (nonatomic) long long jobType;
@property (nonatomic, retain) NSString *providerIdentifier;
@property (nonatomic, retain) NSString *providerType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedBundleIDs;
- (id)extensionBundleID;
- (unsigned long long)hash;
- (id)identifiersToReindex;
- (id)initWithCoder:(id)arg1;
- (id)initWithJobType:(long long)arg1;
- (id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2;
- (id)initWithXPCDict:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)jobOptions;
- (long long)jobType;
- (id)providerIdentifier;
- (id)providerType;
- (void)setBundleIDs:(id)arg1;
- (void)setExcludedBundleIDs:(id)arg1;
- (void)setExtensionBundleID:(id)arg1;
- (void)setIdentifiersToReindex:(id)arg1;
- (void)setJobOptions:(long long)arg1;
- (void)setJobType:(long long)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setProviderType:(id)arg1;
- (id)xpc_dictionary;

@end
