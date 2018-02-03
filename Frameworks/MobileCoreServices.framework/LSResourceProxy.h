/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding> {
    NSString * __boundApplicationIdentifier;
    NSURL * __boundContainerURL;
    NSURL * __boundDataContainerURL;
    NSString * __boundIconCacheKey;
    NSArray * __boundIconFileNames;
    bool  __boundIconIsPrerendered;
    _LSLazyPropertyList * __boundIconsDictionary;
    NSURL * __boundResourcesDirectoryURL;
    bool  __privateDocumentIconAllowOverride;
    NSArray * __privateDocumentIconNames;
    LSBundleProxy * __privateDocumentTypeIconOwner;
    LSBundleProxy * __typeIconOwner;
    bool  _boundIconIsBadge;
    NSString * _localizedName;
}

@property (setter=_setBoundApplicationIdentifier:, nonatomic, copy) NSString *_boundApplicationIdentifier;
@property (setter=_setBoundContainerURL:, nonatomic, copy) NSURL *_boundContainerURL;
@property (setter=_setBoundDataContainerURL:, nonatomic, copy) NSURL *_boundDataContainerURL;
@property (setter=_setBoundIconCacheKey:, nonatomic, copy) NSString *_boundIconCacheKey;
@property (setter=_setBoundIconFileNames:, nonatomic, copy) NSArray *_boundIconFileNames;
@property (setter=_setBoundIconIsPrerendered:, nonatomic) bool _boundIconIsPrerendered;
@property (setter=_setBoundIconsDictionary:, nonatomic, copy) _LSLazyPropertyList *_boundIconsDictionary;
@property (setter=_setBoundResourcesDirectoryURL:, nonatomic, copy) NSURL *_boundResourcesDirectoryURL;
@property (setter=_setPrivateDocumentIconAllowOverride:, nonatomic) bool _privateDocumentIconAllowOverride;
@property (setter=_setPrivateDocumentIconNames:, nonatomic, copy) NSArray *_privateDocumentIconNames;
@property (setter=_setPrivateDocumentTypeIconOwner:, nonatomic, copy) LSBundleProxy *_privateDocumentTypeIconOwner;
@property (setter=_setTypeIconOwner:, nonatomic, copy) LSBundleProxy *_typeIconOwner;
@property (setter=_setBoundIconIsBadge:, nonatomic) bool boundIconIsBadge;
@property (nonatomic, readonly) NSDictionary *iconsDictionary;
@property (setter=_setLocalizedName:, nonatomic, copy) NSString *localizedName;
@property (nonatomic, readonly) NSString *primaryIconName;
@property (nonatomic) unsigned long long propertyListCachingStrategy;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (bool)supportsSecureCoding;

- (id)_boundApplicationIdentifier;
- (id)_boundContainerURL;
- (id)_boundDataContainerURL;
- (id)_boundIconCacheKey;
- (id)_boundIconFileNames;
- (bool)_boundIconIsPrerendered;
- (id)_boundIconsDictionary;
- (id)_boundResourcesDirectoryURL;
- (id)_initWithLocalizedName:(id)arg1;
- (id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 dataContainerURL:(id)arg4 boundResourcesDirectoryURL:(id)arg5 boundIconsDictionary:(id)arg6 boundIconCacheKey:(id)arg7 boundIconFileNames:(id)arg8 typeIconOwner:(id)arg9 boundIconIsPrerendered:(bool)arg10 boundIconIsBadge:(bool)arg11;
- (bool)_privateDocumentIconAllowOverride;
- (id)_privateDocumentIconNames;
- (id)_privateDocumentIconNamesAsCacheKey;
- (id)_privateDocumentTypeIconOwner;
- (void)_setBoundApplicationIdentifier:(id)arg1;
- (void)_setBoundContainerURL:(id)arg1;
- (void)_setBoundDataContainerURL:(id)arg1;
- (void)_setBoundIconCacheKey:(id)arg1;
- (void)_setBoundIconFileNames:(id)arg1;
- (void)_setBoundIconIsBadge:(bool)arg1;
- (void)_setBoundIconIsPrerendered:(bool)arg1;
- (void)_setBoundIconsDictionary:(id)arg1;
- (void)_setBoundResourcesDirectoryURL:(id)arg1;
- (void)_setLocalizedName:(id)arg1;
- (void)_setPrivateDocumentIconAllowOverride:(bool)arg1;
- (void)_setPrivateDocumentIconNames:(id)arg1;
- (void)_setPrivateDocumentTypeIconOwner:(id)arg1;
- (void)_setTypeIconOwner:(id)arg1;
- (id)_typeIconOwner;
- (bool)boundIconIsBadge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4;
- (id)iconDataForVariant:(int)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)iconsDictionary;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)primaryIconName;
- (unsigned long long)propertyListCachingStrategy;
- (void)setPropertyListCachingStrategy:(unsigned long long)arg1;
- (id)uniqueIdentifier;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (struct CGSize { double x1; double x2; })_applicationIconCanvasSize;
+ (long long)_compareApplicationIconCanvasSize:(struct CGSize { double x1; double x2; })arg1 withSize:(struct CGSize { double x1; double x2; })arg2;

- (struct CGSize { double x1; double x2; })_defaultStyleSize:(id)arg1;
- (struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_iconDefinitionForSize:(struct CGSize { double x1; double x2; })arg1 style:(id)arg2;
- (id)_iconForStyle:(id)arg1;
- (id)_iconForStyle:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (struct CGSize { double x1; double x2; })_largestImageSize:(id)arg1;

@end
