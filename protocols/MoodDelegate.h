/* made by EzioChiu.
 */

@protocol MoodDelegate <NSObject>

@required

- (void)moodInfoPanel:(MoodInfoPanel *)arg1 didChangeMood:(NSIndexPath *)arg2;

@end
