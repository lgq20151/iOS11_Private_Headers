/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSearchResultRanker : NSObject

+ (bool)bitAtPosition:(long long)arg1 isTrueInValue:(unsigned long long)arg2;
+ (id /* block */)bodyOfNoteOrAttachmentMatchingRule;
+ (id)initializeScoreArrayOfLength:(unsigned long long)arg1 setAllZeros:(bool)arg2;
+ (id /* block */)participantNameOrEmailMatchingRule;
+ (id)rankingRules;
+ (id)rankingScoresForSearchableItems:(id)arg1 withRankingQueryBitDictionary:(id)arg2;
+ (id)relevanceBitFieldForSearchableItems:(id)arg1;
+ (id /* block */)titleOfNoteOrAttachmentMatchingRule;

@end
