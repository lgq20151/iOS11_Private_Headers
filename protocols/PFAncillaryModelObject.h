/* made by EzioChiu.
 */

@protocol PFAncillaryModelObject

@required

- (NSNumber *)fetchedPKNum;
- (void)setBindValue:(NSSQLBindVariable *)arg1;
- (void)updatePKNumFromInsert:(long long)arg1;

@end
