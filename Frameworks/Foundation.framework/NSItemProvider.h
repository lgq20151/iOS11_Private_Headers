/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSItemProvider : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    <NSItemProviderDataTransferDelegate> * _dataTransferDelegate;
    <_NSItemProviderLoading> * _loadOperator;
    NSMutableDictionary * _metadata;
    NSMutableDictionary * _preferredRepresentationByType;
    id /* block */  _previewImageHandler;
    NSMutableDictionary * _representationByType;
    NSArray * _representations;
    NSString * _suggestedName;
    NSMutableOrderedSet * _typeOrder;
    NSDictionary * _userInfo;
}

@property (readonly) NSUUID *_UUID;
@property (retain) <_NSItemProviderLoading> *_loadOperator;
@property (nonatomic, retain) NSMutableDictionary *_preferredRepresentationByType;
@property (nonatomic, retain) NSMutableDictionary *_representationByType;
@property (readonly) NSArray *_representations;
@property (nonatomic, retain) NSMutableOrderedSet *_typeOrder;
@property <NSItemProviderDataTransferDelegate> *dataTransferDelegate;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredPresentationSize;
@property (nonatomic) long long preferredPresentationStyle;
@property (copy) id /* block */ previewImageHandler;
@property (readonly, copy) NSArray *registeredTypeIdentifiers;
@property (copy) NSString *suggestedName;
@property (nonatomic, copy) NSData *teamData;
@property (copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_UUID;
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(id /* block */)arg3;
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 visibility:(long long)arg3 loader:(id /* block */)arg4;
- (void)_addRepresentationType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(id /* block */)arg3;
- (id)_availableTypes;
- (id)_availableTypesWithFilterBlock:(id /* block */)arg1;
- (void)_commonInitGenerateUUID:(bool)arg1;
- (bool)_hasRepresentationConformingToType:(id)arg1;
- (bool)_hasRepresentationOfType:(id)arg1;
- (void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)_loadItemOfClass:(Class)arg1 withLoadHandler:(id /* block */)arg2 options:(id)arg3 coerceForCoding:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)_loadObjectOfClass:(Class)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_loadOperator;
- (void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)_metadataValueForKey:(id)arg1;
- (id)_preferredRepresentationByType;
- (id)_representationByType;
- (id)_representationConformingToType:(id)arg1;
- (id)_representationForType:(id)arg1;
- (id)_representations;
- (void)_setItemRepresentation:(id)arg1;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)_typeOrder;
- (bool)canLoadObjectOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTransferDelegate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasItemConformingToTypeIdentifier:(id)arg1;
- (bool)hasRepresentationConformingToTypeIdentifier:(id)arg1 fileOptions:(long long)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithObject:(id)arg1;
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loadFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)loadObjectOfClass:(Class)arg1 completionHandler:(id /* block */)arg2;
- (void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)previewImageHandler;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 visibility:(long long)arg3 loadHandler:(id /* block */)arg4;
- (void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(id /* block */)arg2;
- (void)registerObject:(id)arg1 visibility:(long long)arg2;
- (void)registerObjectOfClass:(Class)arg1 visibility:(long long)arg2 loadHandler:(id /* block */)arg3;
- (id)registeredTypeIdentifiers;
- (id)registeredTypeIdentifiersWithFileOptions:(long long)arg1;
- (id)representations;
- (void)setDataTransferDelegate:(id)arg1;
- (void)setPreviewImageHandler:(id /* block */)arg1;
- (void)setSuggestedName:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_loadOperator:(id)arg1;
- (void)set_preferredRepresentationByType:(id)arg1;
- (void)set_representationByType:(id)arg1;
- (void)set_typeOrder:(id)arg1;
- (id)suggestedName;
- (id)userInfo;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)itemProviderWithURL:(id)arg1 title:(id)arg2;

- (void)_NSItemProviderDidRegisterObject:(id)arg1;
- (Class)_highestFidelityClassForLoading:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredPresentationSize;
- (long long)preferredPresentationStyle;
- (void)setPreferredPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredPresentationStyle:(long long)arg1;
- (void)setTeamData:(id)arg1;
- (id)teamData;

@end
