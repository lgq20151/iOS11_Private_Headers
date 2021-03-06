/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSABaseApplicationDelegate : TSKApplicationDelegate {
    <TSADownloadDelegate> * _downloadDelegate;
    TSADocumentRoot * mDocumentRoot;
}

@property (nonatomic, readonly) NSArray *applicationTemplateVariants;
@property (nonatomic) TSADocumentRoot *documentRoot;
@property (nonatomic, retain) <TSADownloadDelegate> *downloadDelegate;
@property (nonatomic, readonly) NSArray *importableDocumentTypes;
@property (nonatomic, readonly) NSString *nativeDocumentExtension;
@property (nonatomic, readonly) NSString *nativeDocumentType;
@property (nonatomic, readonly) NSString *nativeSFFDocumentType;
@property (nonatomic, readonly) NSArray *readableDocumentTypes;
@property (nonatomic, readonly) NSString *tangierEditingFormatDocumentType;
@property (nonatomic, readonly) NSString *templateDocumentExtension;
@property (nonatomic, readonly) NSString *templateDocumentType;
@property (nonatomic, readonly) NSString *templateSFFDocumentType;

+ (void)presentAlertController:(id)arg1 animated:(bool)arg2;
+ (void)resetSharedConfigurations;
+ (id)sharedDelegate;

- (bool)URLIsValidForImportedHyperlink:(id)arg1;
- (id)applicationTemplateVariants;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (void)dealloc;
- (id)documentRoot;
- (Class)documentRootClass;
- (id)downloadDelegate;
- (id)existingNestedDocumentPathForPath:(id)arg1;
- (id)importableDocumentTypes;
- (id)init;
- (id)invalidURLSchemes;
- (bool)isReadableDocumentType:(id)arg1;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)nativeDocumentExtension;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (bool)openURL:(id)arg1;
- (void)persistenceError:(id)arg1;
- (id)readableDocumentTypes;
- (void)registerDefaults;
- (void)setDocumentRoot:(id)arg1;
- (void)setDownloadDelegate:(id)arg1;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentExtension;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)validURLSchemes;

@end
