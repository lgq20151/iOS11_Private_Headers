/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSTouchStreamPolicy : NSObject {
    bool  _shouldSendAmbiguityRecommendations;
}

@property (nonatomic) bool shouldSendAmbiguityRecommendations;

- (void)setShouldSendAmbiguityRecommendations:(bool)arg1;
- (bool)shouldSendAmbiguityRecommendations;

@end