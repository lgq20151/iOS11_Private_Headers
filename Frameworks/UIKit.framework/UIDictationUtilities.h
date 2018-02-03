/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationUtilities : NSObject

+ (id)_properNameForString:(id)arg1;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)bestInterpretationForPhrases:(id)arg1;
+ (id)dictationPhrasesFromPhraseArray:(id)arg1;
+ (id)dictationPhrasesFromTokenMatrix:(id)arg1;
+ (id)interpretationFromAFInterpretation:(id)arg1;
+ (id)interpretationFromAFTokens:(id)arg1;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (bool)needsLeadingSpaceForPhrases:(id)arg1 secureInput:(bool)arg2;
+ (bool)needsTrailingSpaceForPhrases:(id)arg1 secureInput:(bool)arg2;
+ (id)phraseFromAFPhrase:(id)arg1;
+ (id)tokenFromAFToken:(id)arg1;

@end
