/* made by EzioChiu.
 */

@protocol CADSourceInterface

@required

- (void)CADCountCalendarItemsOfType:(void *)arg1 inSource:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: int, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, void*
- (void)CADDatabaseGetLocalSource:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetSources:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADSourceGetConstraints:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, int, unsigned long long, void*
- (void)CADSourceRefresh:(void *)arg1 isUserRequested:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*

@end