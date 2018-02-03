/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationInterpretation : NSObject <NSSecureCoding> {
    double  _averageConfidenceScore;
    NSArray * _tokens;
}

@property (nonatomic) double averageConfidenceScore;
@property (nonatomic, readonly) bool removeSpaceAfter;
@property (nonatomic, readonly) bool removeSpaceBefore;
@property (nonatomic, readonly) NSArray *tokens;

+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(const struct __CFString { }*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)averageConfidenceScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokens:(id)arg1;
- (id)initWithTokens:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)removeSpaceAfter;
- (bool)removeSpaceBefore;
- (id)serializedInterpretationWithTransform:(const struct __CFString { }*)arg1;
- (void)setAverageConfidenceScore:(double)arg1;
- (id)tokens;

@end
