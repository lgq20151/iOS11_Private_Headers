/* made by EzioChiu.
 */

@protocol NSISVariableDelegate <NSObject>

@required

- (NSString *)nsis_descriptionOfVariable:(NSISVariable *)arg1;
- (bool)nsis_shouldIntegralizeVariable:(NSISVariable *)arg1;
- (void)nsis_valueOfVariable:(NSISVariable *)arg1 didChangeInEngine:(NSISEngine *)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(NSISVariable *)arg1;

@end
