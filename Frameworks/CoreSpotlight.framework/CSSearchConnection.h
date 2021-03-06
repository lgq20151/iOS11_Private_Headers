/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchConnection : CSXPCConnection {
    NSMutableDictionary * _queries;
}

@property (nonatomic, readonly) NSMutableDictionary *queries;

+ (void)initialize;
+ (id)sharedSearchConnection;

- (void).cxx_destruct;
- (void)cancelQuery:(unsigned long long)arg1;
- (void)handleError:(id)arg1;
- (void)handleReply:(id)arg1;
- (id)init;
- (id)queries;
- (id)queryForID:(id)arg1;
- (id)removeQueryForID:(id)arg1;
- (void)setQuery:(id)arg1 forID:(id)arg2;
- (void)startQuery:(id)arg1 context:(id)arg2;

@end
