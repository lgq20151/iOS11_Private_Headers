/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankerRoundingBehavior : NSObject <NSDecimalNumberBehaviors> {
    short  _precision;
}

@property (readonly) short precision;

- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;
- (id)initWithPreciscion:(short)arg1;
- (short)precision;
- (unsigned long long)roundingMode;
- (short)scale;

@end
