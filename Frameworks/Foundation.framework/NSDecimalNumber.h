/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDecimalNumber : NSNumber {
    unsigned int  _exponent;
    unsigned int  _hasExternalRefCount;
    unsigned int  _isCompact;
    unsigned int  _isNegative;
    unsigned int  _length;
    unsigned short  _mantissa;
    unsigned int  _refs;
    unsigned int  _reserved;
}

@property (readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } decimalValue;
@property (readonly) double doubleValue;
@property (readonly) const char *objCType;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)decimalNumberWithDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg1;
+ (id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(bool)arg3;
+ (id)decimalNumberWithString:(id)arg1;
+ (id)decimalNumberWithString:(id)arg1 locale:(id)arg2;
+ (id)defaultBehavior;
+ (id)maximumDecimalNumber;
+ (id)minimumDecimalNumber;
+ (id)notANumber;
+ (id)numberWithBool:(bool)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithLong:(long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)one;
+ (void)setDefaultBehavior:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)zero;

- (bool)_allowsDirectEncoding;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (bool)boolValue;
- (BOOL)charValue;
- (Class)classForCoder;
- (long long)compare:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decimalNumberByAdding:(id)arg1;
- (id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByDividingBy:(id)arg1;
- (id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingBy:(id)arg1;
- (id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByRaisingToPower:(unsigned long long)arg1;
- (id)decimalNumberByRaisingToPower:(unsigned long long)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByRoundingAccordingToBehavior:(id)arg1;
- (id)decimalNumberBySubstracting:(id)arg1;
- (id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubtracting:(id)arg1;
- (id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg1;
- (id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(bool)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (int)intValue;
- (bool)isEqual:(id)arg1;
- (long long)longLongValue;
- (long long)longValue;
- (const char *)objCType;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end
