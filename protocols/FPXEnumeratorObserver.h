/* made by EzioChiu.
 */

@protocol FPXEnumeratorObserver <NSObject>

@required

- (void)didUpdateItem:(FPItem *)arg1;
- (void)enumerationResultsDidChange;

@end