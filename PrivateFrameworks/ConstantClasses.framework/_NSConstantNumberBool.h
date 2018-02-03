/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
 */

@interface _NSConstantNumberBool : _NSConstantNumber

+ (void)load;

- (bool)boolValue;
- (BOOL)charValue;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (double)doubleValue;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (int)intValue;
- (long long)integerValue;
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
