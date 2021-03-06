/* made by EzioChiu.
 */

@protocol PDAssertionCoordinatorExportedInterface <PDXPCServiceExportedInterface>

@required

- (void)acquireAssertionOfType:(void *)arg1 withIdentifier:(void *)arg2 reason:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)assertionExistsOfType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)invalidateAssertionOfType:(void *)arg1 withIdentifier:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
