/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCompletionOfferResponse : NSObject {
    NSMutableDictionary * _itemsByVariant;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (id)mediaItemsWithStoreOfferVariant:(long long)arg1;
- (id)responseDictionary;

@end
