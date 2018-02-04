/* made by EzioChiu.
 */

@protocol PKPaymentValidating <NSObject>

@required

- (bool)isValidWithError:(id*)arg1;

@optional

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

@end