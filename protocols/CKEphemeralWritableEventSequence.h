/* made by EzioChiu.
 */

@protocol CKEphemeralWritableEventSequence

@required

- (bool)appendEvent:(CKEvent *)arg1;
- (void)loadFromKnowledgeStreamNamed:(void *)arg1 between:(void *)arg2 and:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAllEventsSavedInKnowledgeStreamNamed:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)writeEventsToKnowledgeStreamNamed:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end