/* made by EzioChiu.
 */

@protocol _ICPredictionSourcing

@required

- (void)predictedItemsWithProactiveTrigger:(void *)arg1 searchContext:(void *)arg2 limit:(void *)arg3 timeoutInMilliseconds:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: _ICProactiveTrigger *, _ICSearchContext *, unsigned long long, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)searchForMeCardEmailAddressesWithTimeout:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)searchForMeCardRegionsWithTimeout:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
