/* made by EzioChiu.
 */

@protocol UITextPasteSessionDelegate <NSObject>

@optional

- (void)textPasteSessionDidEndPasting:(id <UITextPasteSession>)arg1;
- (void)textPasteSessionWillBeginPasting:(id <UITextPasteSession>)arg1;
- (void)textPasteSessionWillBlockPasting:(id <UITextPasteSession>)arg1;

@end
