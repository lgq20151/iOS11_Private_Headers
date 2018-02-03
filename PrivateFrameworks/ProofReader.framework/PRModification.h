/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRModification : NSObject

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })additionalSyllableRange;
- (double)modificationScore;
- (unsigned long long)modificationType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)replacementString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })syllableRange;

@end
