/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding> {
    LSBundleProxy * _containingBundle;
    bool  _onSystemPartition;
    NSString * _originalIdentifier;
    NSString * _pluginIdentifier;
    NSUUID * _pluginUUID;
    NSString * _protocol;
    NSDate * _registrationDate;
    NSString * _signerOrganization;
}

@property (nonatomic, readonly) LSBundleProxy *containingBundle;
@property (nonatomic, readonly) NSDictionary *infoPlist;
@property (getter=isOnSystemPartition, nonatomic, readonly) bool onSystemPartition;
@property (nonatomic, readonly) NSString *originalIdentifier;
@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, readonly) NSDictionary *pluginKitDictionary;
@property (nonatomic, readonly) NSUUID *pluginUUID;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSDate *registrationDate;
@property (nonatomic, readonly) NSString *teamID;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)arg1 error:(id*)arg2;
+ (id)plugInKitProxyForPlugin:(unsigned int)arg1 withContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg2;
+ (id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
+ (id)pluginKitProxyForIdentifier:(id)arg1;
+ (id)pluginKitProxyForURL:(id)arg1;
+ (id)pluginKitProxyForUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)UPPValidated;
- (id)_initWithPlugin:(unsigned int)arg1 andContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg2;
- (id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
- (id)_valueForEqualityTesting;
- (id)boundIconsDictionary;
- (id)containingBundle;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (bool)isOnSystemPartition;
- (id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(bool)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3;
- (id)originalIdentifier;
- (bool)pluginCanProvideIcon;
- (id)pluginIdentifier;
- (id)pluginKitDictionary;
- (id)pluginUUID;
- (bool)profileValidated;
- (id)protocol;
- (id)registrationDate;
- (id)signerOrganization;
- (id)teamID;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_applicationBundleIdentifier;
- (id)un_applicationBundleURL;

@end
