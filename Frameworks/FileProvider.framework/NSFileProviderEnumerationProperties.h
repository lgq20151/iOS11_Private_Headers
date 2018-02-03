/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface NSFileProviderEnumerationProperties : NSObject <NSSecureCoding> {
    FPItemID * _enumeratedItemID;
    NSURL * _enumeratedItemURL;
    NSString * _enumeratingApplicationBundleIdentifier;
    NSArray * _fileTypes;
    bool  _recursiveEnumeration;
    unsigned long long  _requestedBatchSize;
    NSDictionary * _userInfo;
}

@property (getter=_enumeratedItemURL, setter=_setEnumeratedItemURL:, copy) NSURL *_enumeratedItemURL;
@property (copy) FPItemID *enumeratedItemID;
@property (copy) NSString *enumeratedItemIdentifier;
@property (copy) NSString *enumeratingApplicationBundleIdentifier;
@property (copy) NSArray *fileTypes;
@property bool recursiveEnumeration;
@property unsigned long long requestedBatchSize;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_enumeratedItemURL;
- (void)_setEnumeratedItemURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeratedItemID;
- (id)enumeratedItemIdentifier;
- (id)enumeratingApplicationBundleIdentifier;
- (id)fileTypes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)recursiveEnumeration;
- (unsigned long long)requestedBatchSize;
- (void)setEnumeratedItemID:(id)arg1;
- (void)setEnumeratedItemIdentifier:(id)arg1;
- (void)setEnumeratingApplicationBundleIdentifier:(id)arg1;
- (void)setFileTypes:(id)arg1;
- (void)setRecursiveEnumeration:(bool)arg1;
- (void)setRequestedBatchSize:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (id)initWithConfiguration:(id)arg1 tags:(id)arg2;
- (id)initWithHostIdentifier:(id)arg1 maximumNumberOfItems:(long long)arg2 allowedDocumentTypes:(id)arg3 excludedDocumentTypes:(id)arg4 tags:(id)arg5;

@end
