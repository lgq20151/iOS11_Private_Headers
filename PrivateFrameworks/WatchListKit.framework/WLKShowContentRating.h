/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKShowContentRating : WLKContentRating {
    unsigned long long  _contentAudience;
}

@property (nonatomic, readonly) unsigned long long contentAudience;

+ (unsigned long long)_audienceForString:(id)arg1;

- (unsigned long long)contentAudience;
- (id)initWithDictionary:(id)arg1;

@end
