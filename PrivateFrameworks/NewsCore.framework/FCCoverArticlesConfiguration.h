/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCoverArticlesConfiguration : NSObject {
    NTPBCoverArticlesConfig * _coverArticlesConfig;
    NSString * _feedID;
}

@property (nonatomic, readonly) NSString *feedID;

- (void).cxx_destruct;
- (id)feedID;
- (unsigned long long)hash;
- (id)initWithPBCoverArticleConfig:(id)arg1;
- (bool)isEqual:(id)arg1;

@end