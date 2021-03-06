/* made by EzioChiu.
 */

@protocol UITextPasteConfigurationSupporting_Internal <UITextPasteConfigurationSupporting, UITextInput>

@required

- (NSArray *)_implicitPasteConfigurationClasses;
- (void)_performPasteOfAttributedString:(void *)arg1 toRange:(void *)arg2 animator:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSAttributedString *, UITextRange *, <UITextPasteAnimating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITextRange *, NSAttributedString *, void*
- (bool)allowsEditingTextAttributes;
- (NSDictionary *)typingAttributes;

@optional

- (void)_pasteSessionDidFinish;

@end
