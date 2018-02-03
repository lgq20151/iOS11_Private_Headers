/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPSpotlightCollection : FPItemCollection

- (void)enumerationResultsDidChange;
- (void)enumerationWasResumed;
- (id)initWithIdentifier:(id)arg1 fileTypes:(id)arg2;
- (void)signalError:(id)arg1;
- (void)startObservingWithEnumerationProperties:(id)arg1;
- (void)startingObservationWithEnumerationProperties:(id)arg1;
- (void)stopObserving;
- (void)stoppingObservation;

@end
