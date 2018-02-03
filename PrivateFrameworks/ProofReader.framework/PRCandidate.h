/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRCandidate : NSObject {
    bool  _blacklisted;
    NSArray * _candidateWords;
    double  _errorScore;
    double  _lmScore;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
}

+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorScore:(double)arg5;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorType:(unsigned long long)arg5;
+ (id)candidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorScore:(double)arg3;
+ (id)candidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorType:(unsigned long long)arg3;
+ (id)candidateWithWords:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorScore:(double)arg3;
+ (id)candidateWithWords:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorType:(unsigned long long)arg3;
+ (double)errorScoreForType:(unsigned long long)arg1;
+ (id)replacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 intendedCharacter:(unsigned short)arg5 actualCharacter:(unsigned short)arg6;
+ (id)replacementCandidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4;
+ (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;
+ (id)transpositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 intendedFirstCharacter:(unsigned short)arg5 intendedSecondCharacter:(unsigned short)arg6;
+ (id)transpositionCandidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4;
+ (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;

- (id)candidateWords;
- (void)dealloc;
- (id)description;
- (double)errorScore;
- (id)initWithCandidateWords:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorScore:(double)arg3;
- (id)initWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorScore:(double)arg3;
- (bool)isBlacklisted;
- (double)languageModelScore;
- (unsigned long long)numberOfWords;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })replacementRange;
- (double)score;
- (void)setBlacklisted:(bool)arg1;
- (void)setErrorScore:(double)arg1;
- (void)setLanguageModelScore:(double)arg1;
- (id)string;

@end
