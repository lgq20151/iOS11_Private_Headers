/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISLinearExpression : NSObject <NSFastEnumeration, NSISRowBody> {
    double  constant;
    union { 
        /* Warning: unhandled struct encoding: '{?="stored_extern_marker"@"slab"^{?}"capacity"Q}"inline_slab"{?="aligner"Q}"padding"[48C])' */ struct { 
            id stored_extern_marker; 
        } extern_data; 
        unsigned long long capacity; 
    }  data;
    unsigned int  inline_capacity;
    unsigned int  var_count;
}

@property double constant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)acquireFromPoolForUseCase:(long long)arg1;
+ (void)initialize;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;

- (void)addExpression:(id)arg1 times:(double)arg2;
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(id /* block */)arg3 processVariableDroppedFromReceiver:(id /* block */)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(id /* block */)arg3 processVariableDroppedFromReceiver:(id /* block */)arg4;
- (double)coefficientForVariable:(id)arg1;
- (double)constant;
- (id)copyContentsAndReturnToPool;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)enumerateVariables:(id /* block */)arg1;
- (void)enumerateVariablesAndCoefficients:(id /* block */)arg1;
- (bool)enumerateVariablesAndCoefficientsUntil:(id /* block */)arg1;
- (unsigned long long)hash;
- (double)incrementConstant:(double)arg1;
- (id)init;
- (id)initWithInlineCapacity:(unsigned long long)arg1;
- (bool)isConstant;
- (bool)isEqual:(id)arg1;
- (void)removeVariable:(id)arg1;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id /* block */)arg3 processVariableDroppedFromReceiver:(id /* block */)arg4;
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(id /* block */)arg4 processVariableDroppedFromReceiver:(id /* block */)arg5;
- (void)returnToPool;
- (void)scaleBy:(double)arg1;
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;
- (void)setConstant:(double)arg1;
- (unsigned long long)variableCount;
- (id)variablesArray;
- (void)verifyInternalIntegrity;

@end
