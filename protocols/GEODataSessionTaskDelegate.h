/* made by EzioChiu.
 */

@protocol GEODataSessionTaskDelegate <NSObject>

@required

- (void)dataSession:(id <GEODataSession>)arg1 didCompleteTask:(id <GEODataSessionTask>)arg2;

@optional

- (void)dataSession:(void *)arg1 willSendRequest:(void *)arg2 forTask:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: <GEODataSession> *, GEODataRequest *, <GEODataSessionTask> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEODataRequest *, void*

@end
