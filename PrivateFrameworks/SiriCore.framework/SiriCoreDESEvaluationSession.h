/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreDESEvaluationSession : NSObject <NSURLSessionDelegate> {
    NSURL * _baseURL;
    NSObject<OS_dispatch_queue> * _queue;
    SiriCoreLocalSpeechRecognizer * _recognizer;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRecipeResponse:(id)arg1 records:(id)arg2 completion:(id /* block */)arg3;
- (void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(id /* block */)arg3;
- (void)_runWithCompletion:(id /* block */)arg1;
- (void)_runWithRecords:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendRecipeResponseForRecord:(id)arg1 recipeId:(id)arg2 result:(id)arg3 error:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (id)initWithBaseURL:(id)arg1;
- (void)invalidate;
- (void)runWithCompletion:(id /* block */)arg1;

@end
