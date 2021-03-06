/* made by EzioChiu.
 */

@protocol UITextFieldContent <_UITextContent>

@required

- (bool)allowsAttachments;
- (long long)nonEditingLinebreakMode;
- (void)setAllowsAttachments:(bool)arg1;
- (void)setNonEditingLinebreakMode:(long long)arg1;

@end
