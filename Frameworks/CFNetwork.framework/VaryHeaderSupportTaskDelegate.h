/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface VaryHeaderSupportTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    NSURLSessionTaskMetrics * _metrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURLSessionTaskMetrics *metrics;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)dealloc;
- (id)metrics;
- (void)setMetrics:(id)arg1;

@end
