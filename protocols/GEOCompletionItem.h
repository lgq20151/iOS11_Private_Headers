/* made by EzioChiu.
 */

@protocol GEOCompletionItem <NSObject>

@required

- (NSString *)calloutTitle;
- (NSArray *)displayLines;
- (NSData *)entryMetadata;
- (<GEOMapItem> *)geoMapItem;
- (bool)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (NSArray *)highlightsForLine:(unsigned long long)arg1;
- (GEOMapItemIdentifier *)identifier;
- (NSData *)metadata;
- (NSString *)queryLine;
- (GEOSearchCategory *)searchCategory;
- (void)sendFeedback;
- (long long)type;

@end
