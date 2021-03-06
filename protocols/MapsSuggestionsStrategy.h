/* made by EzioChiu.
 */

@protocol MapsSuggestionsStrategy <MapsSuggestionsObject>

@required

- (void)addDeduper:(id <MapsSuggestionsDeduper>)arg1;
- (void)addFilter:(id <MapsSuggestionsFilter>)arg1;
- (void)addImprover:(id <MapsSuggestionsImprover>)arg1;
- (void)clearData;
- (MapsSuggestionsManager *)manager;
- (void)removeAllDedupers;
- (void)removeAllFilters;
- (void)removeAllImprovers;
- (void)removeFilter:(id <MapsSuggestionsFilter>)arg1;
- (void)setManager:(MapsSuggestionsManager *)arg1;
- (bool)shouldKeepEntry:(MapsSuggestionsEntry *)arg1;
- (struct NSArray { Class x1; }*)topSuggestionsWithSourceEntries:(struct NSDictionary { Class x1; }*)arg1 error:(id*)arg2;

@end
