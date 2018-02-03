/* made by EzioChiu.
 */

@protocol _UIActivityHelperDelegate <NSObject>

@required

- (void)activityHelper:(_UIActivityHelper *)arg1 didUpdateActivityMatchingResults:(_UIActivityMatchingResults *)arg2;
- (bool)activityHelper:(_UIActivityHelper *)arg1 matchingWithContext:(_UIActivityMatchingContext *)arg2 shouldIncludeSystemActivityType:(NSString *)arg3;

@optional

- (NSArray *)activityHelper:(_UIActivityHelper *)arg1 activitiesForActivityType:(NSString *)arg2 matchingContext:(_UIActivityMatchingContext *)arg3;

@end
