/* made by EzioChiu
   Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSValue : NSObject {
    JSContext * _context;
    struct OpaqueJSValue { } * m_value;
}

@property (readonly) JSContext *context;
@property (readonly) bool isArray;
@property (readonly) bool isBoolean;
@property (readonly) bool isDate;
@property (readonly) bool isNull;
@property (readonly) bool isNumber;
@property (readonly) bool isObject;
@property (readonly) bool isString;
@property (readonly) bool isUndefined;

+ (SEL)selectorForStructToValue:(const char *)arg1;
+ (SEL)selectorForValueToStruct:(const char *)arg1;
+ (id)valueWithBool:(bool)arg1 inContext:(id)arg2;
+ (id)valueWithDouble:(double)arg1 inContext:(id)arg2;
+ (id)valueWithInt32:(int)arg1 inContext:(id)arg2;
+ (id)valueWithJSValueRef:(struct OpaqueJSValue { }*)arg1 inContext:(id)arg2;
+ (id)valueWithNewArrayInContext:(id)arg1;
+ (id)valueWithNewErrorFromMessage:(id)arg1 inContext:(id)arg2;
+ (id)valueWithNewObjectInContext:(id)arg1;
+ (id)valueWithNewRegularExpressionFromPattern:(id)arg1 flags:(id)arg2 inContext:(id)arg3;
+ (id)valueWithNullInContext:(id)arg1;
+ (id)valueWithObject:(id)arg1 inContext:(id)arg2;
+ (id)valueWithPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(id)arg2;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inContext:(id)arg2;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(id)arg2;
+ (id)valueWithSize:(struct CGSize { double x1; double x2; })arg1 inContext:(id)arg2;
+ (id)valueWithUInt32:(unsigned int)arg1 inContext:(id)arg2;
+ (id)valueWithUndefinedInContext:(id)arg1;

- (struct OpaqueJSValue { }*)JSValueRef;
- (id)callWithArguments:(id)arg1;
- (id)constructWithArguments:(id)arg1;
- (id)context;
- (void)dealloc;
- (void)defineProperty:(id)arg1 descriptor:(id)arg2;
- (bool)deleteProperty:(id)arg1;
- (id)description;
- (bool)hasProperty:(id)arg1;
- (id)init;
- (id)initWithValue:(struct OpaqueJSValue { }*)arg1 inContext:(id)arg2;
- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;
- (bool)isArray;
- (bool)isBoolean;
- (bool)isDate;
- (bool)isEqualToObject:(id)arg1;
- (bool)isEqualWithTypeCoercionToObject:(id)arg1;
- (bool)isInstanceOf:(id)arg1;
- (bool)isNull;
- (bool)isNumber;
- (bool)isObject;
- (bool)isString;
- (bool)isUndefined;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)toArray;
- (bool)toBool;
- (id)toDate;
- (id)toDictionary;
- (double)toDouble;
- (int)toInt32;
- (id)toNumber;
- (id)toObject;
- (id)toObjectOfClass:(Class)arg1;
- (struct CGPoint { double x1; double x2; })toPoint;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })toRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toRect;
- (struct CGSize { double x1; double x2; })toSize;
- (id)toString;
- (unsigned int)toUInt32;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)valueForProperty:(id)arg1;

@end
