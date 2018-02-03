/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSArray *rangeArray;
@property (readonly) NSRegularExpression *regularExpression;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)initWithRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
- (id)rangeArray;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeWithName:(id)arg1;
- (id)regularExpression;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;

@end
