/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface _MDIndexExtensionLoader : NSObject {
    NSDictionary * _extensionsByBundleId;
    id  _matchingContext;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSDictionary *extensionsByBundleId;
@property (nonatomic, retain) id matchingContext;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_matchDictionary;

- (void).cxx_destruct;
- (id)_filterIndexExtensions:(id)arg1;
- (id)_loadExtensionsSynchronously;
- (id)extensionsByBundleId;
- (void)findExtensionsWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)matchingContext;
- (id)queue;
- (void)setExtensionsByBundleId:(id)arg1;
- (void)setMatchingContext:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startLookingForExtensionsWithMatchUpdateHandler:(id /* block */)arg1;
- (void)stopLookingForExtensions;

@end
