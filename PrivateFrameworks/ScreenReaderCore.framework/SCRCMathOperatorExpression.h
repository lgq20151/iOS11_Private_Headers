/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression {
    unsigned short  _operatorChar;
}

@property (nonatomic, readonly) unsigned short operatorChar;

- (bool)_isIntegral;
- (bool)_isInvisibleCharacter;
- (bool)_isMinusSign;
- (bool)_isRingOperator;
- (bool)_isSummation;
- (bool)_isUnionOrIntersection;
- (bool)canBeUsedWithRange;
- (id)description;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEllipsis;
- (bool)isFenceDelimiter;
- (bool)isNaturalSuperscript;
- (bool)isOperationSymbol;
- (bool)isTermSeparator;
- (id)latexFormatStringAsOver;
- (id)mathMLString;
- (unsigned short)operatorChar;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2;

@end