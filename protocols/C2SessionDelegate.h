/* made by EzioChiu.
 */

@protocol C2SessionDelegate <NSObject>

@required

- (void)C2Session:(C2Session *)arg1 didBecomeInvalidWithError:(NSError *)arg2;

@end
