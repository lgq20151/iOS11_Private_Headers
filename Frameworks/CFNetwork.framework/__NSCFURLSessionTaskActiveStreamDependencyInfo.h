/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskActiveStreamDependencyInfo : NSObject {
    NSMutableDictionary * _mainDocumentTaskMimeTypes;
    NSMutableDictionary * _mainDocumentTaskURLs;
    NSNumber * _streamID;
}

@property (nonatomic, retain) NSMutableDictionary *_mainDocumentTaskMimeTypes;
@property (nonatomic, retain) NSMutableDictionary *_mainDocumentTaskURLs;
@property (nonatomic, retain) NSNumber *_streamID;

- (id)_mainDocumentTaskMimeTypes;
- (id)_mainDocumentTaskURLs;
- (id)_streamID;
- (void)addNewStreamID:(id)arg1 requestURLString:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithStreamID:(id)arg1 requestURLString:(id)arg2 dependencyInfo:(id)arg3;
- (bool)isEmpty;
- (int)parentStreamIDForMimeType:(id)arg1;
- (int)parentStreamIDForURLString:(id)arg1;
- (void)removeStreamWithStreamID:(id)arg1 requestURLString:(id)arg2;
- (void)set_mainDocumentTaskMimeTypes:(id)arg1;
- (void)set_mainDocumentTaskURLs:(id)arg1;
- (void)set_streamID:(id)arg1;

@end
