/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXAppInstallCoordinatorSeed : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    unsigned long long  _creator;
    unsigned long long  _intent;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) unsigned long long creator;
@property (nonatomic) unsigned long long intent;
@property (nonatomic, retain) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creator;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)intent;
- (void)setBundleID:(id)arg1;
- (void)setCreator:(unsigned long long)arg1;
- (void)setIntent:(unsigned long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end