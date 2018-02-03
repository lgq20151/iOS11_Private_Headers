/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDefinitionDictionary : NSObject {
    bool  _activated;
    NSString * _definitionLanguage;
    struct __DCSDictionary { } * _dictionary;
    ASAsset * _rawAsset;
}

@property bool activated;
@property (readonly) NSString *definitionLanguage;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) ASAsset *rawAsset;

+ (id)_normalizedLanguageStringForLanguageCode:(id)arg1;

- (void).cxx_destruct;
- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2;
- (id)_attributedDefinitionForTerm:(id)arg1;
- (id)_definitionValueForTerm:(id)arg1;
- (id)_fullHTMLDefinitionForTerm:(id)arg1;
- (bool)_hasDefinitionForTerm:(id)arg1;
- (bool)_isTTYDictionary;
- (id)_shortHTMLDefinitionForTerm:(id)arg1;
- (bool)activated;
- (void)dealloc;
- (id)definitionLanguage;
- (id)description;
- (id)initWithAsset:(id)arg1;
- (id)localizedDictionaryName;
- (id)localizedLanguageName;
- (id)rawAsset;
- (void)setActivated:(bool)arg1;

@end
