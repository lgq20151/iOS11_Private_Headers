/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentTextStyle : SXTextStyle

@property (nonatomic, readonly) SXDropCapStyle *dropCapStyle;
@property (nonatomic, readonly) long long exactLineHeight;
@property (nonatomic, readonly) long long firstLineIndent;
@property (nonatomic, readonly) bool hangingPunctuation;
@property (nonatomic, readonly) long long hyphenation;
@property (nonatomic, readonly) long long lineHeight;
@property (nonatomic, readonly) SXTextStyle *linkStyle;
@property (nonatomic, readonly) long long paragraphSpacingAfter;
@property (nonatomic, readonly) long long paragraphSpacingBefore;
@property (nonatomic, readonly) double relativeLineHeight;
@property (nonatomic, readonly) long long textAlignment;

- (long long)exactLineHeightWithValue:(id)arg1 withType:(int)arg2;
- (long long)hyphenationWithValue:(id)arg1 withType:(int)arg2;
- (long long)lineHeightWithValue:(id)arg1 withType:(int)arg2;
- (double)relativeLineHeightWithValue:(id)arg1 withType:(int)arg2;
- (long long)textAlignmentWithValue:(id)arg1 withType:(int)arg2;

@end