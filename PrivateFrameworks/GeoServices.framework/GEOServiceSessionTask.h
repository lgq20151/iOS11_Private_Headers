/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServiceSessionTask : NSObject <GEOProtobufSessionTaskDelegate> {
    id /* block */  _completionHandler;
    NSError * _error;
    GEOProtobufSessionTask * _protobufTask;
    PBCodable * _response;
    GEOServiceSession * _session;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOProtobufSessionTask *protobufTask;
@property (nonatomic, retain) PBCodable *response;
@property (nonatomic) GEOServiceSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)protobufTask;
- (id)response;
- (id)session;
- (void)setError:(id)arg1;
- (void)setProtobufTask:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSession:(id)arg1;
- (void)start;

@end
