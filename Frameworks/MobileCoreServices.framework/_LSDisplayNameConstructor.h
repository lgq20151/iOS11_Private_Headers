/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSDisplayNameConstructor : NSObject {
    NSString * _baseName;
    NSString * _extension;
    unsigned int  _hadBiDiControlCharacter;
    unsigned int  _hadColonInFSName;
    unsigned int  _hadForbiddenCharacter;
    unsigned int  _hadNonASCIICharacter;
    unsigned int  _isFolder;
    NSString * _originalName;
    NSString * _secondaryExtension;
    unsigned int  _wantsHiddenExtension;
}

+ (id)concatenateBaseName:(id)arg1 andExtension:(id)arg2;
+ (id)displayNameConstructorWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 node:(id)arg2 error:(id*)arg3;
+ (id)displayNameConstructorsWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 node:(id)arg2 error:(id*)arg3;
+ (void)getExtensionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 secondaryExtensionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 fromFileName:(id)arg3 considerConfusables:(bool)arg4;
+ (void)setShowAllExtensions:(bool)arg1;
+ (void)setSuffixForRemoteXCTests:(id)arg1;
+ (bool)showAllExtensions;
+ (id)suffixForRemoteXCTests;
+ (id)visuallyOrderCharactersInString:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)balanceBiDiControlCharacter:(unsigned short)arg1 inString:(id)arg2 imbalanceAmount:(long long)arg3;
- (id)balanceBiDiControlCharacters:(id)arg1;
- (bool)canSetExtensionHiddenWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1;
- (id)cleanSecondaryExtension:(id)arg1;
- (id)combineBaseName:(id)arg1 extension:(id)arg2;
- (void)getTransformedBaseName:(id*)arg1 extension:(id*)arg2 needsBiDiControlCharacters:(bool)arg3;
- (void)getUnlocalizedBaseName:(id*)arg1 extension:(id*)arg2 requiresAdditionalBiDiControlCharacters:(bool*)arg3;
- (id)init;
- (void)initContentBitsWithDisplayName:(id)arg1 treatAsFSName:(bool)arg2;
- (void)initNamePartsWithDisplayName:(id)arg1;
- (void)initNodeBitsWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 node:(id)arg2 bundleClass:(const unsigned int*)arg3;
- (id)initWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 node:(id)arg2 bundleClass:(const unsigned int*)arg3 desiredDisplayName:(id)arg4 treatAsFSName:(bool)arg5;
- (id)insertCompleteNameBiDiControlCharacters:(id)arg1;
- (id)insertNameComponentBiDiControlCharacters:(id)arg1;
- (bool)isStringNaturallyRTL:(id)arg1;
- (bool)mayHideExtensionWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1;
- (id)replaceForbiddenCharacters:(id)arg1;
- (bool)showExtensionWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 asIfShowingAllExtensions:(id)arg2;
- (id)transformBeforeCombining:(id)arg1 needsBiDiControlCharacters:(bool*)arg2;
- (id)unlocalizedNameWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1;
- (id)unlocalizedNameWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 asIfShowingAllExtensions:(id)arg2;
- (bool)wantsHiddenExtension;

@end
