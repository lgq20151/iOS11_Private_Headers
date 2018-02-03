/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSPersonNameComponentsStyleFormatter : NSObject {
    NSSet * _abbreviatedKeys;
    NSArray * _fallbackDescriptor;
    _NSPersonNameComponentsStyleFormatter * _fallbackStyleFormatter;
    bool  _isEnabled;
    NSSet * _keysOfInterest;
    NSLocale * _locale;
    NSPersonNameComponentsFormatter * _masterFormatter;
    NSArray * _orderedTemplate;
    long long  _ordering;
    bool  _shouldFallBack;
}

@property (readonly) NSSet *abbreviatedKeys;
@property (readonly, copy) NSArray *fallbackDescriptor;
@property (retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter;
@property (readonly) bool isEnabled;
@property (readonly) NSSet *keysOfInterest;
@property (readonly, copy) NSPersonNameComponentsFormatter *masterFormatter;
@property (readonly) NSArray *orderedKeysOfInterest;
@property (readonly) NSArray *orderedTemplate;
@property long long ordering;
@property (readonly) bool shouldFallBack;
@property (readonly) bool shouldIgnoreComponentsContainingSpecialCharacters;

- (id)_delimiterBetweenString:(id)arg1 andString:(id)arg2 isPhonetic:(bool)arg3;
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)_orderedNonEmptyKeysFromComponents:(id)arg1;
- (void)_releaseIvars;
- (id)abbreviatedKeys;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (void)dealloc;
- (id)fallbackDescriptor;
- (id)fallbackStyleFormatter;
- (bool)fullComponentsAreValid:(id)arg1;
- (id)initWithMasterFormatter:(id)arg1;
- (bool)isEnabled;
- (id)keysOfInterest;
- (id)masterFormatter;
- (id)orderedKeysOfInterest;
- (id)orderedTemplate;
- (long long)ordering;
- (void)setFallbackStyleFormatter:(id)arg1;
- (void)setOrdering:(long long)arg1;
- (bool)shouldFallBack;
- (bool)shouldIgnoreComponentsContainingSpecialCharacters;
- (id)stringFromComponents:(id)arg1 attributesByRange:(id)arg2;

@end
