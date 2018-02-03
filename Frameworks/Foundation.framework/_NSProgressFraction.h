/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSProgressFraction : NSObject <NSCopying, NSSecureCoding> {
    long long  _completed;
    bool  _overflowed;
    long long  _total;
}

@property long long completed;
@property (readonly) bool overflowed;
@property long long total;

+ (id)fractionWithCompleted:(long long)arg1 total:(long long)arg2;
+ (id)fractionWithDouble:(double)arg1;
+ (bool)supportsSecureCoding;

- (void)_simplifyFromDouble:(double)arg1;
- (void)addFraction:(id)arg1;
- (long long)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)divideByValue:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fractionByAddingFraction:(id)arg1;
- (id)fractionByMultiplyingFraction:(id)arg1;
- (id)fractionBySimplifying;
- (id)fractionBySubtractingFraction:(id)arg1;
- (double)fractionCompleted;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompleted:(long long)arg1 total:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFinished;
- (bool)isFractionCompletedEqual:(id)arg1;
- (bool)isIndeterminate;
- (bool)isNaN;
- (void)multiplyByFraction:(id)arg1;
- (bool)overflowed;
- (void)setCompleted:(long long)arg1;
- (void)setTotal:(long long)arg1;
- (void)simplify;
- (void)subtractFraction:(id)arg1;
- (long long)total;

@end
