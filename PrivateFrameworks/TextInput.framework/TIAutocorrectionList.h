/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIAutocorrectionList : NSObject <NSSecureCoding> {
    TIKeyboardCandidate * _autocorrection;
    NSArray * _emojiList;
    NSArray * _predictions;
    NSArray * _proactiveTriggers;
}

@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) NSArray *emojiList;
@property (nonatomic, readonly) NSArray *predictions;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic, readonly) bool shouldAcceptTopCandidate;

+ (id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(bool)arg2;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3;
+ (id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3;
+ (id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)autocorrection;
- (id)candidates;
- (void)dealloc;
- (id)description;
- (id)emojiList;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
- (id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
- (id)initWithCandidates:(id)arg1;
- (id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)predictions;
- (id)proactiveTriggers;
- (bool)shouldAcceptTopCandidate;

@end
